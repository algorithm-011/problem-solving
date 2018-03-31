#include <cstdio>
#include <iostream>
#include <algorithm>
#include <utility>

using namespace std;

int distance(pair<int, int> point1, pair<int, int> point2)
{
  return ((point1.first - point2.first) * (point1.first - point2.first) +
          (point1.second - point2.second) * (point1.second - point2.second));
}

int getShortests(pair<int, int> p[], int n)
{
  if (n == 2)
    return (distance(p[0], p[1]));
  if (n == 3)
    return (min({distance(p[0], p[1]), distance(p[0], p[2]), distance(p[1], p[2])}));

  int line = (p[n / 2 - 1].first + p[n / 2].first) / 2;
  int d_lr = min(getShortests(p, n / 2), getShortests(p + n / 2, n - n / 2));

  pair<int, int> mids[n];
  int count_mids = 0;

  for (int i = 0; i < n; i++)
  {
    int t = line - p[i].first;
    if (t * t < d_lr)
      mids[count_mids++] = p[i];
  }

  sort(mids, mids + count_mids,
       [](pair<int, int> &a, pair<int, int> &b) -> bool { return a.second > b.second; });

  int d = d_lr;
  for (int i = 0; i < count_mids; i++)
  {
    for (int j = 1; j <= 6 && i + j < count_mids; j++)
      d = min(d, distance(mids[i], mids[i + j]));
  }

  return (d);
}

int main(void)
{
  int N;
  pair<int, int> points[111111];

  // get inputs
  scanf("%d", &N);
  for (int i = 0; i < N; i++)
    scanf("%d %d", &points[i].first, &points[i].second);

  // sort by x
  sort(points, points + N);

  // process
  int answer = getShortests(points, N);
  cout << answer << endl;

  return (0);
}
