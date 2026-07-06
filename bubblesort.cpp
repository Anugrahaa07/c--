#include<iostream>
int sortArray(int num[],int size){
    int temp;
    for(int i=0;i<size;i++){
        for(int j=0;j<size-i-1;j++){
            if(num[j]>num[j+1]){
                temp=num[j];
                num[j]=num[j+1];
                num[j+1]=temp;
            }
        }
    }
    return 0;
}
int main(){
    int num[]={3,6,1,2};
    int temp,array;
    int size=sizeof(num)/sizeof(num[0]);
    array=sortArray(num,size);
    for(int i=0;i<size;i++){
        std::cout<<"The sorted array is: "<<num[i]<<'\n';
    }
    return 0;
}