#include<bits/stdc++.h>
using namespace std;

//run time polymorphism

//1.function overloading
class fOverload{
    public:
     void fun(){
         cout<<"I am a function with no arguments"<<endl;
     }
     void fun(int x){
         cout<<" I am a function with integers as argument"<<endl;
     }
     void fun(double x){
         cout<<"I am a function with double as argument "<<endl;
     }
    
};

//2. operator ovrloading
class Complex{
    private:
    int real, imag;
    public:

    Complex(int r= 0, int i =0){
        real = r;
        imag = i;
    }

    Complex operator + (Complex const &objt){
        Complex result;
        result.imag = imag + objt.imag;
        result.real = real + objt.imag;
        return result;
    }

    void display(){
        cout<< real <<" + i"<<imag<<endl;
    }
};

class base{
    public:
    virtual void print(){
        cout<<"this is the base class display function"<<endl;
    }
    void display(){
        cout<<" this is the base class's display";
    }
};

class derived: public base{
    public:
    void print(){
        cout<<" this is derived class's print function "<< endl;
    }
    void display(){
        cout<<" this is the derived class's display function "<<endl;
    }
};


int main(){

    //1.
    // fOverload obj;
    // obj.fun();
    // obj.fun(4);
    // obj.fun(3.21);
    // return 0;

    //2.
    // Complex c1(1,2);
    // Complex c2(3,4);
    // Complex c3 = c1+c2;
    // c3.display();
    // return 0;

    base *baseptr;
    derived d;
    baseptr = &d;

    baseptr -> print();
    baseptr ->display();

    return 0;

}