#include <PMSYS/menu.h>
#include <stdio.h>

int main(int argc, char *argv[]) {
  for (;;) {
    const int opt = select_menu();
    select_run(opt);
  }
  return 0;
}