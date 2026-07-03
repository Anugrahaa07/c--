#include<iostream>
int main(){
    int num,a;

    std::cout<<"Enter a number: ";
    std::cin>>a;
    num=(a/10)+(a%10);
    std::cout<<"The sum of digits of a 2 digit number is: "<<num;
    return 0;
}