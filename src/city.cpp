#include <PMSYS/class/city.h>

City::City() {};
City::City(int number, string name, int x, int y) {
  this->number = number;
  this->name = name;
  this->x = x;
  this->y = y;
}
void City::show() {
  const int num = this->getNum();
  const char *name = this->getName().c_str();
  const int x = this->getX();
  const int y = this->getY();
  printf("城市: [%d] %s \n坐标: (%d, %d)\n\n", num, name, x, y);
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

void City::setDistance(int number, double distance) {
  // 存储 该城市与 目标城市的 距离
  this->distances[number] = distance;
}
int City::getDistance(int number) {  // 获取该城市 与 目标城市的距离
  if (this->distances.count(number) == 0) return -1;
  return this->distances[number];  // 直接返回 巨鹿
}
