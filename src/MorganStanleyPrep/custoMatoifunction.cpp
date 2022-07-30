#include <bits/stdc++.h>
using namespace std;

long long int customAtoInt(string &a) {
  int ln = a.length();
  if (ln == 0) {
    cout << "Error | StringUnderFlow" << endl;
    exit(-1);
  }
  bool neg = false;
  long long int num = 0;
  for (int i = 0; i < ln; ++i) {
    if (i == 0 && a[i] == '-') {
      neg = true;
      continue;
    }
    if (a[i] >= '0' && a[i] <= '9') {
      num = num * 10 + (long long int)(a[i] - '0');
    } else {
      cout << "Error | ALpha is there" << endl;
      exit(-1);
    }
  }

  if (neg)
    num = num * (-1);

  return num;
}

int main(int argc, char **argv) {
  string number = "9223372036854775807";

  cout << number << hex << " = " << (customAtoInt(number) + 0) << endl;
  return 0;
}
