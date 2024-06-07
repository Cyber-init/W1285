#include <PMSYS/class/city.h>

City::City(){};
City::City(int number, string name, int x, int y) {
  this->number = number;
  this->name = name;
  this->x = x;
  this->y = y;
}
void City::show() {
  const int num = this->getNum();
  const string name = this->getName();
  const int x = this->getX();
  const int y = this->getY();
  printf("%d %s %d %d\n", num, name.c_str(), x, y);
}

void City::setNumber(const int number) { this->number = number; }
void City::setName(const string name) { this->name = name; }
void City::setPosition(const int x, const int y) {
  this->x = x;
  this->y = y;
}

string City::getName() { return this->name; }
int City::getX() { return this->x; }
int City::getY() { return this->y; }
int City::getNum() { return this->number; }
