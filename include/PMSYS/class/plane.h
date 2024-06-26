#ifndef PMSYS__PLANE_H_
#define PMSYS__PLANE_H_
#include <string>
using std::string;
class Plane {
 private:
  string number;  // 飞机编号
  string name;    // 飞机名称
  int x;
  int y;
  int weight;  // 飞机重量

 public:
  Plane();
  Plane(string number, string name, int x, int y, int weight);
  // generate all setters and getters
  void setNumber(string number);                  // 设置飞机编号
  void setName(string name);                      // 设置飞机名称
  void setX(int x);                               // 设置飞机 X
  void setY(int y);                               // 设置 飞机 Y
  void setWeight(int weight);                     // 设置飞机重量
  string getNumber();                             // 获取飞机编号
  string getName();                               // 获取飞机名称
  int getX();                                     // 获取 X
  int getY();                                     // 获取 Y
  int getWeight();                                // 获取飞机重量
  void show();                                    // 打印飞机信息
  int CanBrake(double speed, double reDistance);  // 判断能否刹车

  void RadarFind(double radarRadius, Map &map);  // 扫描半径内所有城市
};

#endif