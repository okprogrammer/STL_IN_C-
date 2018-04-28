#include <iostream>
#include<list>
using namespace std;

int main()
{
    list<int> numbers;//creating a list numbers

    numbers.push_back(1);//pushing end of the list
    numbers.push_back(2);
    numbers.push_back(3);
    numbers.push_front(0);//pushing at start of list

    list<int>::iterator it=numbers.begin();//assigning the begin address
    it++;
    numbers.insert(it,100);//inserting 100 at second position
    cout<<"Element: "<<*it<<endl;

    list<int>::iterator eraseit=numbers.begin();
    eraseit++;
    numbers.erase(eraseit);//erasing second element
    cout<<"Element: "<<*eraseit<<endl;

    for(list<int>::iterator it=numbers.begin();it!=numbers.end();)
    {
       if(*it==2)
       {
           numbers.insert(it,1234);//inserting where element is 2
       }
       if(*it==1){
        it=numbers.erase(it);//removing element 1
       }
       else{
        it++;
       }
    }
    for(list<int>::iterator it=numbers.begin();it!=numbers.end();it++)//printing the all the element in the list
    {
        cout<<*it<<endl;
    }
    numbers.sort();
    cout<<"list after sorting!\n"<<endl;
    for(list<int>::iterator it=numbers.begin();it!=numbers.end();it++)

    {
        cout<<*it<<endl;
    }
    numbers.reverse();
    cout<<"list after reversing!"<<endl;
    for(list<int>::iterator it=numbers.begin();it!=numbers.end();it++)

    {
        cout<<*it<<endl;
    }
    return 0;
}
