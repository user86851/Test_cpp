#include <iostream>
using namespace std;

struct Prices {
  int drink;
  int first;
  int second;
};

struct Order { 
  int drink, first, second;
};

int calculateOrder(Prices p, Order o) {
  return o.drink*p.drink + o.first*p.first + o.second*p.second;
}

void output(int person, Prices prices, Order order) {
  int total {calculateOrder(prices, order)};
  cout << "Клиент" << person << ": " << total << endl;
}

int main() {
  Prices prices{10, 20, 30};

  {
    Order order{2, 1, 0};
    output(1, prices, order);
  }

  {
    Order order{1, 0, 3};
    output(2, prices, order);
  }
}
