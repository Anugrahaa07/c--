#include<iostream>
class student{
    public:
    std::string name;
    int rollNo;
    float marks;
    void setDetails(){
        std::cout<<"Please enter the following details:"<<'\n';
        std::cout<<"Enter the name of the student: ";
        std::getline(std::cin>>std::ws,name);
        std::cout<<"Enter the roll number of the student: ";
        std::cin>>rollNo;
        std::cout<<"Enter the mark of the student: ";
        std::cin>>marks;
    }
    void displaydetails(){
        std::cout<<'\n';
        std::cout<<"The details of the student is as follows"<<'\n';
        std::cout<<"Name: "<<name<<'\n'<<"Roll Number: "<<rollNo<<'\n'<<"Marks: "<<marks<<'\n';
    }
    void grade(){
        if(marks>=90 && marks<100){
            std::cout<<"The grade is A"<<"\n";
        }
        else if(marks>=80 && marks<90){
            std::cout<<"The grade is B"<<"\n";
        }
        else if(marks>=70 && marks<80){
            std::cout<<"The grade is C"<<"\n";
        }
        else if(marks>=60 && marks<70){
            std::cout<<"The grade is D"<<"\n";
        }
        else{
            std::cout<<"You failed"<<'\n';
        }
    }
};
int main(){
    student student1;
    student1.setDetails();
    student1.displaydetails();
    student1.grade();
    return 0;
}