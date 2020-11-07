#include "Classes.cpp"
using namespace std;

int main(){
  Racer* racer = new Racer("Egor");

  racer->addSticker("cock");
  racer->addSticker("lil");
  racer->addSticker("lil");
  racer->addSticker("lil");
  racer->addSticker("lil");
  racer->addSticker("lil");
  

  racer->addDriverNumber("123");
  racer->displayStickers();
  return 0;
}
