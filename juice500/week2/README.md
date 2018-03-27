# 나이순 정렬(10814)
3년 전에 풀었었다. std::sort와 operator()을 사용해서 구조체 정렬을 써주면 해결이 된다.

# 팰린드롬 만들기(1213)
4년 전에 풀었었다. 알파벳 갯수를 세서 차례대로 출력해주면 쉽게 풀린다.

# 단어 정렬(1181)
3년 전에 풀었었다. C와 Python 3 둘 다로 풀었었다. C style로 구조체 정렬을 하려면 qsort와 함수 포인터를 이용하여 구현해야 한다. strcmp를 사용하면 쉽다. Python 3은 lambda와 set을 이용한 기본 문법으로 풀린다.

# 국영수(10825)
심심해서 오버엔지니어링을 했다. __lt__ 안에서 튜플로 비교를 하면 간단하게 해결이 된다. C++에서 operator < overriding이랑 비슷하다. __str__를 이용하면 출력할 때 따로 신경써주지 않아도 되어서 편하다. classmethod를 써서 parse하는 부분을 쪼개서 구현했다. * operator를 쓰면 파라미터를 넘길 때 편하다.

# Lily's Homework
sum(|a(i)-a(i-1)|)을 최소로 하려면 배열이 정렬되어있어야 한다. [1,2,3] 리스트만 해봐도 명확하다. 위로 올라갔다가 내려가는 형태가 있으면, 그 차이의 합은 계속 천천히 위로 올라가는(이미 정렬되어있는) 형태보다 언제나 저 합이 크다. 그러므로 "beautiful array"는 내림차순/오름차순 정렬되어있는 경우이다. 그러면, A로부터 "beautiful array"를 만들기 위해서 필요한 최소 swap 개수의 경우, swap을 할 때 위치와 상관이 없기 때문에 안일하게 짜도 정답이다.

# Fraudulent Activity Notifications
d 사이즈의 Sliding window의 median을 찾는 문제이다. d 사이즈의 list를 계속 sorted 상태로 유지하면 된다. 처음 sort하고 나서는, binary search를 이용해 삭제, 삽입을 하면 해결할 수 있다. 여기서, v.erase, v.insert가 O(1)이므로 시간 내에 해결할 수 있다.

