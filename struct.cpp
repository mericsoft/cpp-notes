#include <iostream>
using namespace std;
struct book
{
	string no;
	string name ;
	string author;
	int value;
	int discount(float percent){
		return value-((value*percent)/100);
	}
	
};

int main(){
	book b1;
	b1.no="01";
	b1.name="C++ Notes";
	b1.author="John Doe";
	b1.value=200;

	cout <<"book information"<<endl;
	cout <<"no \t : "<<b1.no<<endl;
	cout <<"name  \t : "<<b1.name<<endl;
	cout <<"author \t : "<<b1.author<<endl;
	cout <<"price \t : "<<b1.value<<endl;
	cout <<"disc. \t : "<<b1.discount(10)<<endl;
	
}

