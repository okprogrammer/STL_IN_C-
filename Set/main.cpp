#include <iostream>
#include<set>
//#include<iterator>

using namespace std;

class Test {
private:
    string name;
    int id;
public:
    Test(int id, string name):id(id),name(name){
    }

    void print() const{
    cout<<id<<": "<<name<<endl;
    }
   //this will return the unique object
    bool operator<(const Test &other) const{
    return name<other.name;
    }
};
int main()
{
    //set provide us unique element in the increasing order
    set<int> numberSet;
    //inserting value in the set
    numberSet.insert(1);
    numberSet.insert(2);
    numberSet.insert(2);
    numberSet.insert(11);
    numberSet.insert(12);
    numberSet.insert(5);
    numberSet.insert(6);
    numberSet.insert(6);
    numberSet.insert(8);
    set<int>::iterator it;
    for(it=numberSet.begin();it!=numberSet.end();it++){
        cout<<*it<<endl;
    }
    set<int>::iterator itFind=numberSet.find(6);
    if(itFind != numberSet.end())
    {
        cout<<"Found: "<<*itFind<<endl;
    }

    if(numberSet.count(6)){
        cout<<"Number Found."<<endl;
    }
    //creating a class set
    set<Test> tests;

    tests.insert(Test(10,"Mike"));
    tests.insert(Test(20,"Jackson"));
    tests.insert(Test(25,"Jackson"));
    tests.insert(Test(30,"Twetia"));
    for(set<Test>::iterator it=tests.begin();it!=tests.end();it++){
        it->print();
    }
    return 0;
}
