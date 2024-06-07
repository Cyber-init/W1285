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
    case 0:
      Quit();
      break;
    case 1:
      break;
    case 2:
      break;
    case 3:
      break;
    case 4:
      break;
    case 5:
      break;
    case 6:
      break;
    case 7:
      break;
    case 8:
      break;
    case 9:
      break;
    case 10:
      break;
    default:
      break;
  }
}