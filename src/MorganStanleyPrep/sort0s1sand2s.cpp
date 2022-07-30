#include <bits/stdc++.h>
using namespace std;

void sort0s1sand2s(vector<int> &a) {
  int n = a.size();

  int sentinel = 0;

  for (int i = 0; i < n; ++i) {
    //  while (zeroes < twos)
    if (a[i] == 0) {
      swap(a[i], a[sentinel]);
      sentinel++;
    }
  }
  for (int i = sentinel; i < n; ++i) {
    if (a[i] == 1) {
      swap(a[i], a[sentinel]);
      sentinel++;
    }
  }
}

int main(int argc, char **argv) {

  vector<int> a{0, 1, 1, 0, 1, 2, 1, 2, 0, 0, 0, 1};

  //		{1, 2, 0, 1, 2, 0, 1, 2, 0, 1, 2, 0, 1, 2, 0,
  //                1, 2, 0, 1, 2, 0, 1, 2, 0, 1, 2, 0, 1, 2, 0,
  //                1, 0, 0, 0, 0, 0, 1, 1, 1, 1, 1, 2, 2, 2, 2};

  sort0s1sand2s(a);
  cout << endl;
  for (auto i : a) {
    cout << i << ", ";
  }
  cout << endl;
  return 0;
}
