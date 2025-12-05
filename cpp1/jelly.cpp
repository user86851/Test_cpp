#include <iostream>
using namespace std;


void B() {
  std::cout << "Called B" << endl;
}

void C() {
  std::cout << "Called C" << endl;
}

void A() {
  std::cout << "Called A" << endl;
  B(); 
  C();
}

int main() {
  std::cout << "Jelly!" << endl;
  A();
}