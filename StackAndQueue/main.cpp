#include <iostream>
#include<stack>
#include<queue>
using namespace std;

class Test {
private:
    string name;
public:
    Test(string name):
        name(name) {
        }
    ~Test(){
    //cout<<"Object is destroyed"<<endl;
    }
    void print(){
    cout<<name<<endl;
    }
};
int main()
{
   //LIFO-Last in first out
   stack<Test> testStack;

   testStack.push(Test("Mike"));
   testStack.push(Test("John"));
   testStack.push(Test("Sue"));
   cout<<endl;

   /*
   *This is invalid code! object is destroyed
   Test &test1=testStack.top();
   testStack.pop();
   test1.print();//Reference refers to destroyed objects
   */
  //seeing the top of stack object and assigning into the test1 object
   Test test1=testStack.top();
   //calling the print method in class Test
   test1.print();
   //removing the top of the stack elememnt by pop method
   //testStack.pop();
   //Test test2=testStack.top();
   //calling the print method in class Test
   //test2.print();
   while(testStack.size()>0){
    Test &test=testStack.top();
    test.print();
    testStack.pop();
   }
   cout<<endl;
   //FIFO
   queue<Test> testQueue;

   testQueue.push(Test("Mike"));
   testQueue.push(Test("John"));
   testQueue.push(Test("Sue"));

   while(testQueue.size()>0){
    Test &test=testQueue.front();
    test.print();
    testQueue.pop();
   }
   cout<<endl;
    return 0;

}
