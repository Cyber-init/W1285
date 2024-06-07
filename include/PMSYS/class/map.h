#ifndef PMSYS__MAP_H_
#define PMSYS__MAP_H_
#include <PMSYS/class/city.h>

#include <vector>

using std::vector;
class Map {
 private:
  vector<City> cities;  // 现有城市记录

 public:
  Map();
  double Distance(int x1, int y1, int x2, int y2);  // 计算两坐标点之间的距离
  void AddCity(int num, string name, int x, int y);  // 添加城市
  void DeleteCity(int num);                          // 根据编号删除城市
  void SaveCity();           // 保存城市信息进入文件
  void ReadCity();           // 从文件中读取城市信息
  void UpdateCity(int num);  // 根据城市编号修改城市信息
  int FindCity(int num);     // 根据城市编号查找城市
  void ShowCity();           // 显示所有城市信息
  int GetCounter();          // 获取现有城市记录数
  int GetPostionX();         // 根据城市编号获取x坐标
  int GetPostionY(int num);  // 根据城市编号获取y坐标
  void ShowCity(int num);    // 根据城市编号显示城市信息
};
#endif