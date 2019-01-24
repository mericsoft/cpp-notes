#include <iostream>

using namespace std;

class Geometri{
  public:
  const float pi=3.14;
  int r; 
  int en;
  int boy;

};

class Cember: public Geometri{
  public:
  float alan(){return r*r*pi;};
  float cevre(){return 2*r*pi;}
};

int main()
{
    Cember cember1;
    cember1.r=6;
    cout<<"cember  yaricap : "<<cember1.r<<"\n";
    cout<<"cember alan :"<<cember1.alan()<<"\n";
    cout<<"cember cevre : "<<cember1.cevre()<<"\n";

    return 0;
} 
