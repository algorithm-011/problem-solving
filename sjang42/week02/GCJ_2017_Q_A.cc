#include <cstring>
#include <iostream>
using namespace std;

int main() {
  int T;

  cin >> T;
  for (int i = 1; i <= T; i++) {
    int K;
    char str[1111];
    int count = 0;

    cin >> str;
    cin >> K;
    int len = strlen(str);

    // check if '-' is exist and then flip it if it is '-'.
    for (int o = 0; o < len - K + 1; o++) {
      if (str[o] == '-') {
        count++;
        // flip
        for (int j = o; j < o + K; j++) {
          str[j] = (str[j] == '-') ? '+' : '-';
        }
      }
    }

    // check if output str is correct or not
    bool good = true;
    for (int o = 0; o < len; o++) {
      if (str[o] == '-') {
        good = false;
        break;
      }
    }

    // print answer
    if (good)
      cout << "Case #" << i << ": " << (count) << endl;
    else
      cout << "Case #" << i << ": "
           << "IMPOSSIBLE" << endl;
  }

  return 0;
}
