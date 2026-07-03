#include<iostream>
#include<cmath>
int main(){
    const double PI=3.14;
    double r,area,perimeter,volume;
    int option;

    std::cout<<"Which operation would you like to perform:"<<'\n'<<"1.Area"<<'\n'<<"2.Perimeter"<<'\n'<<"3.Volume"<<'\n';
    std::cin>>option;

    switch(option){
        case 1:
            std::cout<<"Enter the radius of the circle: ";
            std::cin>>r;
            area=PI*pow(r,2);
            std::cout<<"The Area is "<<area;
            break;
        case 2:
            std::cout<<"Enter the radius of the circle: ";
            std::cin>>r;
            perimeter=2*PI*r;
            std::cout<<"The Perimeter is "<<perimeter;
            break;
        case 3:
            std::cout<<"Enter the radius of the sphere: ";
            std::cin>>r;
            volume=(4/3)*PI*pow(r,3);
            std::cout<<"The Volume is "<<volume;
            break;
    }
    return 0;
}