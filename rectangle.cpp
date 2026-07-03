#include<iostream>
int main(){
    double length,breadth,area;
    std::cout<<"Enter the length of the rectangle: "<<'\n';
    std::cin>>length;
    std::cout<<"Enter the breadth of the rectangle: "<<'\n';
    std::cin>>breadth;
    area=length*breadth;
    std::cout<<"The area of the rectangle is: "<<area<<" sq units";
    return 0;
}