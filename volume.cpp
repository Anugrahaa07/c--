#include<iostream>
int main(){
    int l,b,h,volume;
    std::cout<<"Enter the length of the cuboid: "<<'\n';
    std::cin>>l;
    std::cout<<"Enter the breadth of the cuboid: "<<'\n';
    std::cin>>b;
    std::cout<<"Enter the height of the cuboid: "<<'\n';
    std::cin>>h;
    volume=l*b*h;
    std::cout<<"The volume of the cuboid is : "<<volume<<'\n';
    return 0;
}