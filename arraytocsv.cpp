#include <iostream>
#include <fstream> //dosyaya yazmak için gerekli olacak
using namespace std;
fstream csvfile;  // csv dosyamız için değişkeni hazırlıyoruz
string liste[3][2]={{"selim","26"},{"mehmet","22"},{"yeşim","18"}}; //dizinimiz
string yaz="isim,yaş \n"; //csv dosyasının başlıkları \n parametresi satı başı yapacak
int main()
{
	csvfile.open("liste.csv",ios::in |ios::out |ios::trunc); //liste.csv isimli dosyayı açtık, trunc formatı içindeki dosyayı temizledi
	for (int i=0;i<3;i++){  // dizi boyutu 3 olduğu için 3 ten küçük olacak
		yaz+=liste[i][0]+","+liste[i][1]+"\n"; // elemanları döngüde yaza aktarıyoruz
	}
	if(csvfile <<yaz){; //değişkeni dosyaya yaz
		cout<<"dosyaya yazıldı \n";
	}else{
		cout<<"hata \n";
	}
	csvfile.close(); //dosyayı kapat
	return 0;
}
