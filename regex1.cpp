#include <iostream>
#include <regex>
using namespace std;

int main(){
	string test="ali gel kalem al alican topu tut ali buraya gel";
	regex r("(ali[a-z]*)");
	smatch m;
	regex_search(test,m,r);
	string yeni="veli";
	string y=regex_replace(test,r,yeni);

	cout <<"orjinal metin : "<<test<<"\n";
	cout <<"aranan kelime grubu : ali \n";
	cout<<"kaç yerde geçti  : "<<m.length()<<"\n";
	cout<<"yeni hali : "<<y<<"\n";

}