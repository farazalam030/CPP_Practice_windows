#include <iostream>

using namespace std;

class Base {

public:
  int BaseA;
  Base() { BaseA = 0; }

  Base(int x) { BaseA = x; }
  virtual ~Base() { cout << "Destructing Base\n" << endl; }

  virtual int Mul() = 0;

  virtual int Add() {
    BaseA = BaseA + 10;
    return (BaseA);
  }
  int getBaseA() { return BaseA; }
  void setBaseA(int n) { BaseA = n; }
  void display() { cout << "BaseA inBase = " << BaseA << endl; }
};

class Child1 : public Base {
public:
  int childA;

  Child1() {
    BaseA = 0;
    childA = 0;
  }
  Child1(int a, int b) {
    BaseA = a;
    childA = b;
  }

  int Add() {
    BaseA = BaseA + childA;
    return (BaseA);
  }

  void display() {
    cout << "BaseA inChild = " << BaseA << endl;
    cout << "childA inChild = " << childA << endl;
  }
};

int main(int argc, char **argv) {
  Base *b = new Base(100);
  b->Add();
  b->display();
  delete b;
  Child1 *c = new Child1(200, 200);

  c->Add();
  c->display();
  delete c;
  return 0;
}
