#include<iostream>
class car{
    public:
    std::string model;
    std::string make;
    int year;
    void accelerate(){
        std::cout<<"This car can accelerate really fast";
    }
};
int main(){
    car car1;
    std::cout<<"Enter the model of the car: ";
    std::getline(std::cin>>std::ws,car1.model);
    std::cout<<"Enter the make of the car: ";
    std::getline(std::cin>>std::ws,car1.make);
    std::cout<<"Enter the year of manufacturation of the car: ";
    std::cin>>car1.year;
    std::cout<<car1.make<<'\n'<<car1.model<<'\n'<<car1.year<<'\n';
    car1.accelerate();
    return 0;
}