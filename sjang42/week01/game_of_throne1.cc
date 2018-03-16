// #include <bits/stdc++.h>
#include <iostream>
#include <string>

using namespace std;

string gameOfThrones(string s) {
  const char* str = s.c_str();
  int len = s.length();
  int count_atoz[26] = {
      0,
  };

  for (int i = 0; i < len; i++) {
    int idx = str[i] - 'a';

    count_atoz[idx]++;
  }

  int count_odd = 0;
  for (int i = 0; i < 26; i++) {
    if (count_atoz[i] % 2 != 0) count_odd++;
  }

  if (count_odd <= 1)
    return ("YES");
  else
    return ("NO");
}

int main() {
  string s;

  cin >> s;
  string result = gameOfThrones(s);
  cout << result << endl;
  return 0;
}
