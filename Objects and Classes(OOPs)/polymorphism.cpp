#include <iostream>
using namespace std;
#include <iostream>
using namespace std;
class B
{
public:
    int a;
    int b;

public:
//Compile time overloading function
    int add()
    {
        return a + b;
    }
    void operator + (B (&obj))
    {
        int value1 = this->a;
        int value2 = obj.a;
        cout << "output : " << value2-value1 << endl;
    }
    void operator()(){
        cout<<"I am bracket: "<<this->a;
    }
};
//Runtime polymorphism  
class Animal{
    public :
     void speak(){
        cout<<"speaking "<<endl;

     }
};
class dog: public Animal{
    public:
    void speak(){
       cout<<"Barking "<<endl;
    }
};
int main()
{
    dog ob1;
    ob1.speak();

//    B obj1, obj2;
//    obj1.a=4;
//    obj2.a=7;
//    obj1+obj2;\
//    obj1();
    return 0;
}
