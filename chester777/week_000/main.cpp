#include "main.h"

/* class for problem solver
 * */
class solver {
private:
public:
};

int main() {
    FILE *fp; // must define for using freopen_s
    freopen_s(&fp, "input.txt", "r", stdin);

    int a;

    scanf_s("%d", &a, sizeof(a));
    printf("%d", a);

    return 0;
}