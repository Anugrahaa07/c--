#include<iostream>
int searchfood(std::string array[],int size,std::string food ){
    int i;
    for(i=0;i<size;i++){
        if(array[i]==food){
            return i;
        }
    }
    return -1;
}
int main(){
    std::string array[]={"pizza","burger","salad"};
    std::string food,order;
    int index;
    int size=sizeof(array)/sizeof(array[0]);
    std::getline(std::cin,food);
    index=searchfood(array,size,food );
    if(index != -1){
        std::cout<<"The food is found at index "<<index;
    }
    else{
        std::cout<<"The food is not found in the index";
    }
    return 0;
}