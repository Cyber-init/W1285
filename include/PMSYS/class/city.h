#ifndef PMSYS__CITY_H_
#define PMSYS__CITY_H_
#include <string>

using std::string;

class City {
 private:
  int number;
  string name;
  int x;
  int y;

 public:
  City();
  City(int number, string name, int x, int y);
  void show();                     // 显示城市信息
  void setNumber(int num);         // 设置城市编号
  void setName(string name);       // 设置城市名称
  void setPosition(int x, int y);  // 设置城市坐标
  string getName();                // 读取城市名称
  int getNum();                    // 读取城市编号
  int getX();                      // 读取城市x坐标
  int getY();                      // 读取城市y坐标
};
#endif