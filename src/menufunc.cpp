#include <PMSYS/menu.h>
#include <stdlib.h>
void appendCity(Map &map) {}
void delCity(Map &map) {}
void updCity(Map &map) {}
void SaveToFile(const Map &map) {}
void ReadFromFile(Map &map) {}
void ShowAllCity(Map &map) {}
void Quit(Map &map) { exit(0); }
// 飞机管理函数
void AddPlane(Plane &plane) {
  char number[39];
  char name[39];
  int x;
  int y;
  int weight;
  puts("请按照以下格式输入飞机信息, 并以空格分隔。");
  puts("编号 名称 X Y 重量");
  scanf("%s %s %d %d %d", &number, &name, &x, &y, &weight);
  plane.setNumber(number);
  plane.setName(name);
  plane.setX(x);
  plane.setY(y);
  plane.setWeight(weight);
}
void ShowPlane(Plane &plane) { plane.show(); }
void BrakePlane(Plane &plane) {
  double speed;
  double reDistance;
  puts("请按照 速度 剩余距离 的格式输入");
  scanf("%lf %lf", &speed, &reDistance);
  const int ret = plane.CanBrake(speed, reDistance);

  switch (ret) {
    case -1:
      puts("没有飞机信息");
      break;
    case 0:
      puts("飞机不可以刹车");
      break;
    case 1:
      puts("飞机可以刹车");
      break;
    default:
      break;
  }
}
void RadarSearch(Plane &plane) {}