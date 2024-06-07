#include <PMSYS/class/city.h>
#include <PMSYS/class/map.h>
#include <math.h>
Map::Map(){};
double Map::Distance(int x1, int y1, int x2, int y2) {
  return sqrt((x1 - x2) * (x1 - x2) + (y1 - y2) * (y1 - y2));
}
void Map::AddCity(int num, string name, int x, int y) {
  City c(num, name, x, y);
  this->cities.push_back(c);
}  // 添加城市
void Map::DeleteCity(int num) {
  int cnt = 0;
  for (City it : this->cities) {
    if (it.getNum() == num) {
      this->cities.erase(this->cities.begin() + cnt);
      return;
      break;
    } else {
      cnt++;
    }
  }
}  // 根据编号删除城市
void Map::SaveCity() {}  // 保存城市信息进入文件
void Map::ReadCity() {}  // 从文件中读取城市信息
void Map::UpdateCity(int num) {
  for (vector<City>::iterator it = this->cities.begin();
       it != this->cities.end();) {
    if (it->getNum() == num) {
      ;
    }
  }
}  // 根据城市编号修改城市信息
int Map::FindCity(int num) {}     // 根据城市编号查找城市
void Map::ShowCity() {}           // 显示所有城市信息
int Map::GetCounter() {}          // 获取现有城市记录数
int Map::GetPostionX() {}         // 根据城市编号获取x坐标
int Map::GetPostionY(int num) {}  // 根据城市编号获取y坐标
void Map::ShowCity(int num) {}    // 根据城市编号显示城市信息