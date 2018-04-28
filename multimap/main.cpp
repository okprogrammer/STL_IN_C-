#include <iostream>
#include<map>
using namespace std;

int main()
{
    //multimap used for assigning multiple value with same key
    multimap<string,float> Student;
    //creating it pointer iterator to operate over the multimap
    multimap<string,float>::iterator it;

    Student.insert(make_pair("Peter",4.0));
    //here we are using peter as same key to assigning element 4.0 and 3.5
    Student.insert(make_pair("John",1.0));
    Student.insert(make_pair("Peter",3.5));

    for(it=Student.begin();it!=Student.end();it++)
    {
        cout<<it->second<<": "<<it->first<<endl;
    }
    return 0;
}
