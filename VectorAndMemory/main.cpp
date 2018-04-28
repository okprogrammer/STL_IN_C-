#include <iostream>
#include<vector>
using namespace std;

int main()
{
    vector<double> numbers(0);//assigning zero element

    cout<<"Size: "<<numbers.size()<<endl;//it returns the number of element present in the vector

    int capacity=numbers.capacity();
    cout<<"Capacity: "<<capacity<<endl;//capacity is dynamic it always increases the double the size of previous capacity

    for(int i=0;i<10000;i++)
    {
        if(numbers.capacity()!=capacity){
            capacity=numbers.capacity();
            cout<<"Capacity: "<<capacity<<endl;
        }
        numbers.push_back(i);
    }

    numbers.reserve(10000);//only affect capacity don't size.It doesn't initialize the vector
    cout<<numbers[2]<<endl;
    cout<<"Size: "<<numbers.size()<<endl;
    cout<<"Capacity: "<<numbers.capacity()<<endl;
    return 0;
}
