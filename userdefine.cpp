#include<iostream>
using namespace std;

class Student{
    public:
        string names;
        int rollno;
        float cgpa;
};

int main(){
    Student s1;
    s1.names = "Anubhav Jaiswal";
    s1.rollno = 100;
    s1.cgpa = 9.5; 

    Student s2;
    s2.names = "Raghav Jaiswal";
    s2.rollno = 101;
    s2.cgpa = 9.6;
    cout<<s1.names<<" "<<s1.rollno<<" "<<s1.cgpa<<endl;
    cout<<s2.names<<" "<<s2.rollno<<" "<<s2.cgpa<<endl;
    return 0;
}