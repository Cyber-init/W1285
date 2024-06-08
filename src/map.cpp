#include <PMSYS/class/city.h>
#include <PMSYS/class/map.h>
#include <math.h>
Map::Map() {};
double Map::Distance(int x1, int y1, int x2, int y2) {
  return sqrt(pow((x1 - x2), 2) + pow((y1 - y2), 2));
}
vector<City> Map::all() {  // 获取所有的 城市
  return this->cities;
}
void Map::AddCity(int num, string name, int x, int y) {  // 添加城市
  City c(num, name, x, y);
  for (City &ct : this->cities) {
    // 添加城市时 测量距离 并双方存储
    const int distance =
        this->Distance(ct.getX(), ct.getY(), c.getX(), c.getY());
    ct.setDistance(c.getNum(), distance);
    c.setDistance(ct.getNum(), distance);
  }
  this->cities.push_back(c);
}

void Map::DeleteCity(int num) {  // 根据编号删除城市
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
}

void Map::SaveCity() {}  // 保存城市信息进入文件

void Map::ReadCity() {}  // 从文件中读取城市信息

void Map::UpdateCity(int num) {
  for (City &c : this->cities) {
    if (c.getNum() == num) {
      char name[39];
      int x;
      int y;
      puts("请按照以下格式输入城市信息, 并以空格分隔。");
      puts("名称 X Y");
      scanf("%s %d %d", name, &x, &y);
      c.setName(name);
      c.setPosition(x, y);
      for (City &ct : this->cities) {
        // 测量距离 并双方存储
        const int distance =
            this->Distance(ct.getX(), ct.getY(), c.getX(), c.getY());
        ct.setDistance(c.getNum(), distance);
        c.setDistance(ct.getNum(), distance);
      }

      return;
    }
  }
  puts("不存在该城市");
}  // 根据城市编号修改城市信息

City Map::FindCity(int num) {
  for (City c : this->cities) {
    if (c.getNum() == num) {
      return c;
    }
  }
  puts("不存在该城市");
  return City();  // 返回空城市对象
}  // 根据城市编号查找城市

void Map::ShowCity() {
  for (City c : this->cities) {
    c.show();
  }
}  // 显示所有城市信息

int Map::GetCounter() {
  return this->cities.size();  // 获取现有城市记录数
}

int Map::GetPostionX(int num) {  // 根据城市编号获取x坐标
  City c = this->FindCity(num);
  return c.getX();
}

int Map::GetPostionY(int num) {  // 根据城市编号获取y坐标
  City c = this->FindCity(num);
  return c.getY();
}

void Map::ShowCity(int num) {  // 根据城市编号显示城市信息
  City c = this->FindCity(num);
  c.show();
}