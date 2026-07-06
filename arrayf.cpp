#include<iostream>
double getTotal(double prices[],int size){
    double total=0;
    for(int i=0;i<size;i++){
        total+=prices[i];
    }
    return total;
}
int main(){
    double prices[]={12.3,24.5,33.554,85.58};
    int size=sizeof(prices)/sizeof(double);
    double total=getTotal(prices,size);
    std::cout<<"The total is: $"<<total;
    return 0;
}