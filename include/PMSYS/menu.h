#ifndef PMSYS__MENU__
#define PMSYS__MENU__
#include <PMSYS/class/map.h>
#include <PMSYS/class/plane.h>

// 菜单选择类
int select_menu();
void select_run(const int opt, Map &map, Plane &plane);
// 功能函数
// 地图管理函数
void appendCity(Map &map);        // 追加城市记录
void delCity(Map &map);           // 删除城市记录
void updCity(Map &map);           // 更改城市记录
void SaveToFile(const Map &map);  // 保存到文件
void ReadFromFile(Map &map);      // 从文件中读取
void ShowAllCity(Map &map);       // 显示所有城市信息
void Quit(Map &map);              // 退出程序
// 飞机管理函数
void AddPlane(Plane &plane);     // 添加飞机
void ShowPlane(Plane &plane);    // 显示飞机信息
void BrakePlane(Plane &plane);   // 判断飞机是否可以 刹车
void RadarSearch(Plane &plane);  // 判断飞机雷达范围内的 所有城市

void GetDistance(Map &map);  // 获取 两个城市间的距离
#endif