#include <iostream>
#include<tuple>
using namespace std;

int main()
{
    //tuple is used to create multiple pair objects
    tuple<string,int,int>t1;

    t1=make_tuple("Rahul",15,30);
    //getting first object in tuple t1
    cout<<get<0>(t1)<<endl;
    //getting second object in tuple t2
    cout<<get<1>(t1)<<endl;
    //getting third object in tuple t3;
    cout<<get<2>(t1)<<endl;
    return 0;
}
