#include <PMSYS/menu.h>
#include <stdio.h>

int select_menu() {
  // 菜单信息
  const char *menu_msg =
      "1. 增加城市信息\n"
      "2. 删除城市信息\n"
      "3. 修改城市信息\n"
      "4. 保存城市信息到文件\n"
      "5. 从文件读取城市信息\n"
      "6. 显示所有城市信息\n"
      "7. 设置飞机信息\n"
      "8. 显示飞机信息\n"
      "9. 判断起飞飞机是否可以刹车\n"
      "10. 查询飞机雷达半径内所有的城市信息\n"
      "11. 测量两个城市间的距离*\n"
      "0. 退出";
  puts(menu_msg);

  printf("请输入选择: ");
  int opt;
  scanf("%d", &opt);

  return opt;
}
void select_run(const int opt, Map &map, Plane &plane) {
  // 用户选择要执行的函数

  switch (opt) {
    case 0:  // 退出程序
      Quit(map);
      system("pause");
      break;

    case 1:  // 增加城市信息
      appendCity(map);
      system("pause");
      break;

    case 2:  // 删除城市信息
      delCity(map);
      system("pause");
      break;

    case 3:  // 修改城市信息
      updCity(map);
      system("pause");
      break;

    case 4:  // 保存城市信息至文件
      SaveToFile(map);
      system("pause");
      break;

    case 5:  // 从文件读取城市信息
      ReadFromFile(map);
      system("pause");
      break;

    case 6:  // 显示所有的城市信息
      ShowAllCity(map);
      system("pause");
      break;

    case 7:  // 设置飞机信息
      AddPlane(plane);
      system("pause");
      break;

    case 8:  // 显示飞机信息
      ShowPlane(plane);
      system("pause");
      break;

    case 9:  // 判断起飞飞机受否可以刹车
      BrakePlane(plane);
      system("pause");
      break;

    case 10:  // 查询飞机雷达半径内所有的城市信息
      RadarSearch(plane, map);
      system("pause");
      break;

    case 11:  // 获取 两个城市间的距离
      GetDistance(map);
      system("pause");
      break;

    default:
      system("pause");
      break;
  }
}