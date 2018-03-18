# 숫자 카드(10815)
3년 전에 풀었었다. sort해서 binary search 한 듯 한데, 이보다는 그냥 unordered_set 쓰는게 더 코드가 예뻤을 것.

# 풍선 터뜨리기(2346)
Circular queue를 구현해서 풀었다. N>=1이라 괜찮은 코드. pool[0]은 queue가 비어있어도 언제나 존재한다. 사실상 빈 노드. queue empty check를 해야 해서 넣었다.

# 듣보잡(1764)
3년 전에 풀었었다. 이것도 숫자 카드와 동일하게 풀었다. 꿀팁) qsort에 strcmp를 넣으면 편하다.

# 저항(1076)
3년 전에 풀었었다. 그냥 대충 푼 듯.

# Sherlock and the Valid String
적당히 예외처리 잘 해주면 됨.

# Common Child
흔한 Longest Common Subsequence 문제. DP. 설명도 흔함. http://twinw.tistory.com/126 

# Sherlock and Anagrams
문제 설명이 정말 별로임. 그냥 존재하는 모든 Substring중에 서로 Anagram인 모든 Pair의 갯수임. Burute force로 하나하나 해보는게 가장 빠름. python3으로 풀었는데, defaultdict 쓰면 좋음.

# Count Strings
week1의 핵심. 아래와 같은 과정으로 풀어야 함. 적당한 링크 걸어놓겠음. 오토마타나 컴파일러 들었으면 빨리 눈치챌 수 있기는 하나, 구현이 복잡해서 오래 걸림. 코드에서는 1(regex_to_nfa), 2(nfa_to_dfa), 3+4(dfa_to_adj_matrix), 5(solve), 6(matrix_exp)로 구현되어 있음.
1. Regular expression -> NFA https://algs4.cs.princeton.edu/lectures/54RegularExpressions.pdf
2. NFA -> DFA http://web.cecs.pdx.edu/~harry/compilers/slides/LexicalPart3.pdf
3. DFA -> Weighted Directed Graph 이건 DFA가 Directed Graph인데 Vertex간에 동일한 edge가 여러 개 나올 수 있고, 'a', 'b'로 labeling 되어있으니, 이를 1 이상의 정수 weight로 바꿔주면 됨. 예를 들어, state S1, S2, S3에 대해, S1이 Start, S3가 finish라고 하고, S1에서 S2로 갈 때 a, S2에서 S3로 갈 때 a, b로 갈 수 있다고 하면, S1에서 S2로 가는 Weight는 1이다. a만 가능하기 때문. (즉, path가 1개이기 때문)  S2에서 S3로 가는 weight는 2로 해주어야함. 왜냐하면 aa, ab 두 string이 가능하기 때문. (즉, path가 2개이기 때문)
4. Weighted Directed Graph -> Adjacency Matrix https://en.wikipedia.org/wiki/Adjacency_matrix
5. Power of Adjacency Matrix로 path 갯수 계산하기 https://math.stackexchange.com/questions/1890620/finding-path-lengths-by-the-power-of-adjacency-matrix-of-an-undirected-graph
6. Matrix Exponentiation https://en.wikipedia.org/wiki/Exponentiation_by_squaring
