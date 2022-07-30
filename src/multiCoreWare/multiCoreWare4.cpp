#include <iostream>
#include <stdexcept>
#include <string>
using namespace std;

bool validate(string a) {

  cout << a << " ->  ";

  int len = a.size();
  if (len < 4)
    return false;
  for (int i = 0; i < len; ++i) {
    if (i == 0) {
      if (((a[i] >= 'A' && a[i] <= 'Z') || (a[i] >= 'a' && a[i] <= 'z')) ==
          false)
        return false;
      else
        continue;
    } else if (i == len - 1) {
      if (a[i] == '_')
        return false;
      else
        continue;
    } else {
      if (!((a[i] >= 'A' && a[i] <= 'Z') || (a[i] >= 'a' && a[i] <= 'z') ||
            (a[i] >= '0' && a[i] <= '9') || a[i] == '_'))
        return false;
      else
        continue;
    }
  }

  return true;
}

int main(int argc, char **argv) {

  cout << validate("Mike_Standish") << endl;        // Valid username
  cout << validate("Mike Standish") << endl;        // Invalid username
  cout << validate("Mike123_Standish1322") << endl; // Valid username
  cout << validate("Mike_Standish_") << endl;       // InValid username
  cout << validate("aMike_Standish") << endl;       // Valid username

  cout << validate("1Mike_Standish") << endl; // Valid username

  cout << validate("@Mike_Standish") << endl; // Valid username

  cout << validate("_Mike_Standish") << endl; // Valid username

  return 0;
}
