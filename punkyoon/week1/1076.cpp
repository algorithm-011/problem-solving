#include <iostream>
#include <string>
#include <cmath>
#include <map>

using namespace std;

int main(void)
{
    long long num;
    string a, b, c;
    map<string, int> graph;

    graph["black"] = 0, graph["brown"] = 1;
    graph["red"] = 2, graph["orange"] = 3;
    graph["yellow"] = 4, graph["green"] = 5;
    graph["blue"] = 6, graph["violet"] = 7;
    graph["grey"] = 8, graph["white"] = 9;

    cin >> a >> b >> c;

    num = ((graph[a]*10) + graph[b]) * pow(10, graph[c]);
    cout << num << endl;

    return 0;
}
