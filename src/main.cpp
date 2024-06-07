#include <PMSYS/menu.h>
#include <stdio.h>

int main(int argc, char *argv[]) {
  Map map;
  Plane plane;
  for (;;) {
    const int opt = select_menu();
    select_run(opt, map, plane);
  }
  return 0;
}