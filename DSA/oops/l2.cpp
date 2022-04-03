//constructor and distructor

#include<iostream>
using namespace std;

class student{
    //1.
    //private members
        string name;
    public:
        
        int age;
        bool gender;


    //5. creating default constructor and the other parameterized constructor
    student(){
        cout<<"default constructor"<<endl;
    }

    student(string a , int b, bool c){
        cout<<"parametrized constructor"<<endl;
        name= a;
        age = b;
        gender = c;
    }

    // copy constructor default copy constuctor is also present below one is created by us

    student(student &a){
        cout<<"copy constructor"<<endl;
        name = a.name;
        age = a.age;
        gender = a.gender;
    }

    //destructors when object is destroyed
    ~student(){
        cout<<"destructor called"<<endl;
    }

    //2.
    //we can access data members using functions
        void printInfo(){
        cout<<"name: "<<name<<endl;
        cout<<"age: "<<age<<endl;
        cout<<"gender: "<<gender<<endl;
        }

    //3.
    //to access the private variables(setter)
    void setName(string s){
        name = s;
    }

    //4.
    //getter (to print the private members )
    void getName(){
        cout<<"the name is: "<<name<<endl;
    }

    //5. operator overloading
    bool operator == (student &a){
        if (name ==a.name && age ==a.age && gender ==a.gender)
        {
            return true;
        }
        return false;
    }
};

int main(){


    //what if we want to specify the object value at the same time we can create 
    //a constructor
    student a("raghav", 43, 1);
    //a.printInfo();

    student b;

    student c = a;
    
    //5. operator overloading

    if (b == a)
    {
        cout<<" same "<<endl;
    }
    else{
        cout<<"not same "<<endl;
    }

    return 0;
}


/*
shallow copy: default constructor
if data members of an objects points to a dynamically allocated memory then in shallow(default copy), the pointers of the data member will 
get copied and the location at which they are pointing will not get copied.


deep copy : constructor that we created
above problem is solved by this constructor

*/











