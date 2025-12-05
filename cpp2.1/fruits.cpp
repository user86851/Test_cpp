#include <iostream>

struct FruitCounts {
  int apples;
  int pears;
  int oranges;
};

int main()
{
  FruitCounts fruits;

  std::cout << "Apples:";
  std::cin >> fruits.apples;

  std::cout << "Pears:";
  std::cin >> fruits.pears;

  std::cout << "Oranges:";
  std::cin >> fruits.oranges;

  bool finalCondition;
  {
    bool condApples = fruits.apples > 5;
    bool condPears = fruits.pears < 8;
    bool condOranges = fruits.oranges == fruits.apples * 2;

    finalCondition = condApples && condPears && condOranges;
  }

  if (finalCondition) {
      std::cout << "Hello" << std::endl;
  }

  return 0;
}
