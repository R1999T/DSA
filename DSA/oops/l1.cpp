//class is  user defined datatype
//it consist od different data members
//we can create template using this

//we can create objects using class

#include<iostream>
using namespace std;

class student{
    //private members
        string name;
    public:
        
        int age;
        bool gender;

    //we can access them using functions
        void printInfo(){
        cout<<"name: "<<name<<endl;
        cout<<"age: "<<age<<endl;
        cout<<"gender: "<<gender<<endl;
        }

    //to access the private variables(setter)
    void setName(string s){
        name = s;
    }

    //getter (to print the private members )
    void getName(){
        cout<<"the name is: "<<name<<endl;
    }
};

int main(){
    //1.
    // student a;
    // a.name = "raghav";
    // a.age = 23;
    // a.gender = 1;

    //2.
    //we can also create a array
    student arr[3];
    for (int i = 0; i < 3; i++)
    {
        string s;
        cout<<"name: ";
        cin>>s;
        arr[i].setName(s);
        cout<<"age: ";
        cin>>arr[i].age;
        cout<<"gender: ";
        cin>>arr[i].gender;
        
    }


    //to print the objects
    for (int i = 0; i < 3; i++)
    {
        arr[i].printInfo();
    }
    
    //getter
    for (int i = 0; i < 3; i++)
    {
        arr[i].getName();
    }
    
    

    return 0;
}