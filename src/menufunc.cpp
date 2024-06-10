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

void SaveToFile(Map &map) {
  char filename[39];
  printf("请输入文件名: ");
  scanf("%s", &filename);
  FILE *fp = fopen(filename, "w");
  if (fp == NULL) {
    puts("保存文件失败");
    return;
  }

  int total = map.GetCounter();
  fprintf(fp, "%d\n", total);

  for (City city : map.all()) {
    int num = city.getNum();
    const char *name = city.getName().c_str();
    int x = city.getX();
    int y = city.getY();
    fprintf(fp, "%d %s %d %d\n", num, name, x, y);
  }
  fclose(fp);
  puts("保存成功");
}
void ReadFromFile(Map &map) {
  char filename[39];
  printf("请输入文件名: ");
  scanf("%s", &filename);
  FILE *fp = fopen(filename, "r");
  if (fp == NULL) {
    puts("打开文件失败");
    return;
  }
  char line[200];
  char total_t[4];
  fgets(line, sizeof(line), fp);
  sscanf(line, "%s", total_t);
  int total = atoi(total_t);
  printf("读取到 %d 个城市\n", total);
  while (total--) {
    char name[10];
    char num_t[4];
    char x_t[4];
    char y_t[4];  // 宽字符
    fgets(line, sizeof(line), fp);
    sscanf(line, "%s %s %s %s", num_t, name, x_t, y_t);
    int num = atoi(num_t);
    int x = atoi(x_t);
    int y = atoi(y_t);
    // printf("%s %s %s %s\n", num_t, name, x_t, y_t);
    map.AddCity(num, name, x, y);
  }
  puts("读取成功");
  fclose(fp);
}
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