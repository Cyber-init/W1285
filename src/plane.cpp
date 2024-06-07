#include <PMSYS/class/map.h>
#include <PMSYS/class/plane.h>
#include <stdio.h>

Plane::Plane() {
  this->number = "";
  this->name = "";
  this->x = 0;
  this->y = 0;
  this->weight = 0;
}
// 构造函数实现
Plane::Plane(string number, string name, int x, int y, int weight) {
  this->number = number;
  this->name = name;
  this->x = x;
  this->y = y;
  this->weight = weight;
}

// 实现所有的 setters 和 getters
// 设置飞机编号
void Plane::setNumber(string number) { this->number = number; }  // 设置飞机名称
void Plane::setName(string name) { this->name = name; }  // 设置飞机名称
void Plane::setX(int x) { this->x = x; }                 // 设置飞机 X
void Plane::setY(int y) { this->y = y; }                 // 设置 飞机 Y
void Plane::setWeight(int weight) { this->weight = weight; }  // 设置飞机重量
string Plane::getNumber() { return this->number; }  // 获取飞机编号
string Plane::getName() { return this->name; }      // 获取飞机名称
int Plane::getX() { return this->x; }               // 获取 X
int Plane::getY() { return this->y; }               // 获取 Y
int Plane::getWeight() { return this->weight; }     // 获取飞机重量
void Plane::show() {                                // 打印飞机信息
  const char *number = this->getNumber().c_str();
  const char *name = this->getName().c_str();
  const int x = this->getX();
  const int y = this->getY();
  const int weight = this->getWeight();

  printf(
      "飞机[%s](%s)\n"
      " x: %d\n"
      " y: %d\n"
      " 重量: %d\n\n",
      number, name, x, y, weight);
}

int Plane::CanBrake(double speed, double reDistance) {  // 判断能否刹车
  const int weight = this->getWeight();
  if (weight) {
    if ((weight * speed) / 5 < reDistance) {  // 重量 * 速度 / 5 < 跑道剩余距离
      return 1;
    } else {
      return 0;
    }
  } else {
    return -1;
  }
}

void Plane::RadarFind(double radarRadius, Map map) {  // 扫描半径内所有城市
  // todo!
}