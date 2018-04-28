#include <iostream>
#include<vector>
using namespace std;
//implementation of 2d vector
int main()
{
    //the second argument in the vector tells about the value that should be initialized in the vector
    //Here we are passing the vector in a vector as a value argument
    vector< vector<int> >grid(3,vector<int>(4,7));
    for(int row=0;row<grid.size();row++)
    {
        //Here grid[row].size means the size of each row so that we can print all element of row
        for(int col=0;col<grid[row].size();col++)
        {
            cout<<grid[row][col]<<flush;
        }
        cout<<endl;
    }
    return 0;
}
