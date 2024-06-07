#include <PMSYS/class/plane.h>
#include <stdio.h>
Plane::Plane() {}
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
      "\tx: %d\n"
      "\ty: %d\n"
      "\t重量: %d\n",
      number, name, x, y, weight);
}