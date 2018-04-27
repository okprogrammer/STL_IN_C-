#include <iostream>
#include<vector>
using namespace std;

int main()
{
    vector<string> strings;//declaration "in angular brackets we declare data type"

    strings.push_back("one");
    strings.push_back("two");
    strings.push_back("Three");

    for(int i=0;i<strings.size();i++){
        cout<<strings[i]<<endl;
    }
     cout<<"Printing through iterator"<<endl;
    for(vector<string>::iterator it=strings.begin();it!=strings.end();it++){
        cout<<*it<<endl;
    }

    vector<string>::iterator it = strings.begin();
    it+=2;
    cout<<*it<<endl;
    return 0;
}
