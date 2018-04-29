#include <iostream>

using namespace std;
//declaration of template class
template<class T>
class Math {
private:
    int firstNumber,secondNumber;
public:
    Math() {
    }
    //assigning of value a and b respectively in first number and second number
    //This is the another way of initializing the data
    Math(T a,T b):firstNumber(a),secondNumber(b) {
    }

    void addNumbers();
    void MulNumbers();
};
//If we are declaring class outside we have to write this every time
template<class T>
//It is same as we declare a function outside the class
//Here we have to write template in angular bracket with class
//using scope resolution operator we can define class
void Math<T>::addNumbers(){
cout<<"Addition of two numbers: "<<firstNumber+secondNumber<<endl;
}
template<class T>
void Math<T>::MulNumbers() {
cout<<"Multiplication of numbers: "<<firstNumber*secondNumber<<endl;
}

int main()
{
    //It is same as creating object there is  a slight change
    //We have to specify the data type class is take for template in angular bracket
    Math<int>obj1(10,20);
    //calling function add numbers
    obj1.addNumbers();
    //calling MulNumbers function
    obj1.MulNumbers();
    return 0;
}
