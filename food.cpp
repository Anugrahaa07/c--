#include<iostream>
int main(){
    std::string food[5],temp;
    for(int i=0;i<5;i++){
        std::cout<<"Enter the name of food or press 'q' to quit: ";
        std::cin>>temp;
        if(temp =="q"){
            break;
        }
        else{
            food[i]=temp;
        }
    }
    std::cout<<"You ordered the following foods: "<<'\n';
    for(int i=0;!food[i].empty();i++){
        std::cout<<food[i]<<'\n';
    }
    return 0;
}