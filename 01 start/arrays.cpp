#include<iostream>

int main(){

    int x1 = 100;
    int x2 = 2;
    int x3 = 1000;
    int x4 = 2000;

    int x[4] = {100,2,1000,2000};

    std::cout<<x[0]<<std::endl;
    std::cout<<x[1]<<std::endl;
    std::cout<<x[2]<<std::endl;
    std::cout<<x[3]<<std::endl;

    x[3] = 200;


    std::cout<<x[0]<<std::endl;
    std::cout<<x[1]<<std::endl;
    std::cout<<x[2]<<std::endl;
    std::cout<<x[3]<<std::endl;


    return 0;
}