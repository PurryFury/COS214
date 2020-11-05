#include "Classes.cpp"
using namespace std;

int main(){
  CarEngine* engine = new BDWEngine();

  cout << engine->getSpeed();

  return 0;
}
