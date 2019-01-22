/*******************************************************************
*      a simple array to json example from mericsoft               *
*******************************************************************/

#include <iostream>
using namespace std;
int main()
{
    string aa[3][2]={{"ali","26"},{"sevda","22"},{"riza","34"}};  //3 e 2 çok boyutlu dizi
    int uz=sizeof(aa)/sizeof(aa[0]); // dizi temelde kaç elemanlı
    string js="["; // diziyi bu değişkene aktaracağız
    for(int i=0;i<uz;i++){    //i 0 dan dizi uzunluğuna kadar
        js+="{ad: \""+aa[i][0]+" \", yas: \""+aa[i][1]+"\"},"; // dizi değerlerini json formatında yaz
    }
    js+="]"; // jsonu kapat
    js.erase(js.size()-2,1); // döngü içinde son değerden sonra virgül gelir onu sil
    cout <<js<<"\n"; // jsonu yaz
    
   return 0;
}
