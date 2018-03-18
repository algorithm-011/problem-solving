#include <iostream>
#include <string.h>

using namespace std;

int stack [10001];
int idx = -1;

int empty() {
    if (idx < 0) {
        return 1;
    } else {
        return 0;
    }
}

void push(int x) {
    stack[++idx] = x;
}

void pop() {
    if (empty() == 1) {
        cout << "-1" << "\n";
    } else {
        cout << stack[idx] << "\n";
        stack[idx--] = 0;
    }
}

void size() {
    cout << idx + 1 << "\n";
}

void top() {
    if (empty() == 1) {
        cout << "-1" << "\n";
    } else {
        cout << stack[idx] << "\n";
    }
}

int main(void) {
    int n;
    cin >> n;
    for (int i = 0; i < n; i++) {
        char str[5];
        cin >> str;
        if (!strcmp(str, "push")) {
            int x;
            cin >> x;
            push(x);
        } else if (!strcmp(str, "pop")) {
            pop();
        } else if (!strcmp(str, "size")) {
            size();
        } else if (!strcmp(str, "empty")) {
            cout << empty() << "\n";
        } else if (!strcmp(str, "top")){
            top();
        }
    }
    return 0;
}