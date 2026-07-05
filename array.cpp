#include<iostream>
int main(){
    std::string car[100];
    for(int i=1;i<=5;i++){
        std::cout<<"Please enter the names of the car: ";
        std::cin>>car[i];
    }
    for(int i=1;i<=5;i++){
        std::cout<<car[i]<<'\n';
    }
    return 0;
}