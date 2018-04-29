#include <iostream>
#include<map>
#include<vector>
using namespace std;

int main()
{
    //we can nest any type of template library into one another
    // here we nesting vector in map
    map<string, vector<int> > scores;
    //putting the value for particular key in map using vector
    scores["Mike"].push_back(10);
    scores["Mike"].push_back(20);
    scores["Vicky"].push_back(25);
    scores["Rahul"].push_back(15);
  // printing the key for the map
    for(map<string,vector<int>>::iterator it=scores.begin();it!=scores.end();it++)
    {
        string name=it->first;
        vector<int> scoreList = it->second;
        cout<<name<<": "<<flush;
       //printing the element to the corresponding the key
        for(int i=0;i<scoreList.size();i++){
            cout<<scoreList[i]<<" "<<flush;
        }
        cout<<endl;
    }
    return 0;
}
