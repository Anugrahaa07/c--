#include<iostream>
int Area(int length,int breadth){
    int area;
    area=length*breadth;
    return area;
}
int main(){
    int l,b,A;
    std::cout<<"Enter the length of the rectangle:"<<'\n';
    std::cin>>l;
    std::cout<<"Enter the breadth of the rectangle:"<<'\n';
    std::cin>>b;
    A=Area(l,b);
    std::cout<<A;
    return 0;
}