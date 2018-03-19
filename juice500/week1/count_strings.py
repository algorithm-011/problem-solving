def regex_to_nfa(regex):
    nfa = [{'a':[], 'b':[], 'e':[]} for i in range(len(regex)+1)]
    ops = []
    for idx, r in enumerate(regex):
        # match-transition edge
        if r == 'a' or r == 'b':
            nfa[idx][r].append(idx+1)

        # (, ), *
        if r in ['(', ')', '*']:
            nfa[idx]['e'].append(idx+1)

        # ( ), |
        start_idx = idx
        if r in ['(', '|']:
            ops.append(idx)
        elif r == ')':
            popped_idx = ops.pop()
            popped_r = regex[popped_idx]
            if popped_r == '|':
                start_idx = ops.pop()  # start_r == '('
                nfa[start_idx]['e'].append(popped_idx+1)
                nfa[popped_idx]['e'].append(idx)
            else:  # popped_r == '('
                start_idx = popped_idx

        # *
        if idx < (len(regex)-1):
            if regex[idx+1] == '*':
                nfa[start_idx]['e'].append(idx+1)
                nfa[idx+1]['e'].append(start_idx)

    return nfa

def nfa_to_dfa(nfa):
    def e_closure(s):
        visit = set()
        found = set(s)
        def dfs(v):
            if v in visit:
                return
            visit.add(v)
            for next_v in nfa[v]['e']:
                found.add(next_v)
                dfs(next_v)

        for v in s:
            dfs(v)
        return tuple(list(found))
    
    dfa = []
    state_idx_map = {}
    def recursive_state_finding(state):
        for path in ['a', 'b']:
            new_state = e_closure(set(i for v in state for i in nfa[v][path]))
            if new_state:
                if new_state not in state_idx_map:
                    state_idx_map[new_state] = len(dfa)
                    dfa.append({'a':set(), 'b':set()})
                    recursive_state_finding(new_state)
                dfa[state_idx_map[state]][path].add(state_idx_map[new_state])

    start_state = e_closure({0})
    state_idx_map[start_state] = 0
    dfa.append({'a':set(), 'b':set()})
    recursive_state_finding(start_state)

    for state, idx in state_idx_map.items():
        dfa[idx]['is_final'] = (len(nfa)-1) in state

    return dfa

def dfa_to_adj_matrix(dfa):
    size = len(dfa)
    adj_matrix = dict({(i, j): 0 for i in range(size) for j in range(size)}, size=size)
    for start in range(size):
        for path in ['a', 'b']:
            for finish in dfa[start][path]:
                adj_matrix[(start, finish)] += 1
    return adj_matrix

def matrix_exp(mat, n):
    def matrix_mult(m1, m2):
        size = m1['size']
        return dict({(i, j): sum([m1[(i,k)] * m2[(k,j)] for k in range(size)]) % 1000000007 for i in range(size) for j in range(size)}, size=size)

    size = mat['size']
    if n == 0:
        return dict({(i, j): 1 if i==j else 0 for i in range(size) for j in range(size)}, size=size)
    elif n == 1:
        return mat

    half = matrix_exp(mat, n//2)
    m = matrix_mult(half, half)
    if n % 2 == 1:
        m = matrix_mult(m, mat)
    return m

def solve(regex, str_len):
    dfa = nfa_to_dfa(regex_to_nfa(regex))
    adj = matrix_exp(dfa_to_adj_matrix(dfa), str_len)
    return sum([adj[(0, i)] for i in range(adj['size']) if dfa[i]['is_final']]) % 1000000007


testcases = int(input())
for _ in range(testcases):
    regex, str_len = input().strip().split()
    print(solve(regex, int(str_len)))

