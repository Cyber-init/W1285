#include <PMSYS/menu.h>
#include <stdio.h>
#include <stdlib.h>

void appendCity(Map &map) {
  int num;
  char name[39];
  int x;
  int y;
  puts("请按照以下格式输入城市信息, 并以空格分隔。");
  puts("编号 名称 X Y");
  scanf("%d %s %d %d", &num, name, &x, &y);
  map.AddCity(num, name, x, y);
}
void delCity(Map &map) {
  int num;
  printf("请输入要删除的城市编号: ");
  scanf("%d", &num);
  map.DeleteCity(num);
  puts("删除成功");
}

void updCity(Map &map) {
  int num;
  printf("请输入要修改的城市编号: ");
  scanf("%d", &num);
  map.UpdateCity(num);
  puts("修改成功");
}

void SaveToFile(Map &map) {}
void ReadFromFile(Map &map) {}
void ShowAllCity(Map &map) {
  printf("城市总数：%d\n", map.GetCounter());
  map.ShowCity();
}
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
void RadarSearch(Plane &plane, Map &map) {
  double r;
  printf("请输入半径");
  scanf("%lf", &r);
  plane.RadarFind(r, map);
}

void GetDistance(Map &map) {  // 获取 两个城市间的距离
  int num1;
  int num2;
  printf("请输入第一个城市的编号: ");
  scanf("%d", &num1);
  printf("请输入第二个城市的编号: ");
  scanf("%d", &num2);
  City c = map.FindCity(num1);
  double d = c.getDistance(num2);
  printf("两城市间的距离为: %lf\n", d);
}