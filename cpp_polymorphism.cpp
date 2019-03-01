#include <iostream>

class Alan{
public:
    int alan(int a, int b){
        return a*b;
    };
    
    double alan(double a, double b){
        return a*b;
    };
    
    double alan(double a){
        return a*a;  // kare
    };
};
int main(){
    Alan aln1;
    std::cout<<"width 2 height 3 : "<<aln1.alan(2,3)<<std::endl;
    std::cout<<"width 1.5 height 3.5  : "<<aln1.alan(1.5,3.5)<<std::endl;
    std::cout<<"square width 4 : "<<aln1.alan(4)<<std::endl;
    return 0;
}
