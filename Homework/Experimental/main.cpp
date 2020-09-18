/* 
 * File:   main.cpp
 * Author: YOUR NAME HERE
 * Created on DATE AND TIME HERE
 * Purpose:  Even, Odd Vectors and Array Columns Even, Odd
 * Note:  Check out content of Sample conditions in Hacker Rank
 * Input size of integer array, then array, output columns of Even, Odd
 * Vectors then Even, Odd 2-D Array
 */

//System Libraries Here
#include <iostream>//cin,cout
#include <vector>  //vectors<>
#include <iomanip> //Format setw(),right
using namespace std;

//User Libraries Here

//Global Constants Only, No Global Variables
//Allowed like PI, e, Gravity, conversions, array dimensions necessary
const int COLMAX=2;//Only 2 columns needed, even and odd

//Function Prototypes Here
void read(vector<int> &, vector<int> &);
void copy(vector<int>, vector<int>,int [][COLMAX]);
void prntVec(vector<int>, vector<int>,int);//int n is the format setw(n)
void prntAry(const int [][COLMAX],int,int,int);

//Program Execution Begins Here
int main(int argc, char** argv) {
    //Declare all Variables Here
    const int ROW=80;           //No more than 80 rows
    int array[ROW][COLMAX];     //Really, just an 80x2 array, even vs. odd
    vector<int> even(0),odd(0); //Declare even,odd vectors
    
    //Input data and place even in one vector odd in the other
    read(even,odd);
    
    //Now output the content of the vectors
    //          setw(10)
    prntVec(even,odd,10);//Input even, odd vectors with setw(10);
    
    //Copy the vectors into the 2 dimensional array
    copy(even,odd,array);
    
    //Now output the content of the array
    //                              setw(10)
    prntAry(array,even.size(),odd.size(),10);//Same format as even/odd vectors
    
    //Exit
    return 0;
}

//FUNCTION - Read Vector
void read(vector<int> &even, vector<int> &odd)
{
    cout << "Input the number of integers to input." << endl;
    cout << "Input each number." <<endl;
    int sizeInput;
    int userInput;
   
    cin >> userInput;
   
    for(int i = 0; i < userInput; i++)
   {
    cin >> sizeInput;
   
    if(sizeInput % 2 == 0)
    {
        even.push_back(sizeInput);
    }
    else
    {
        odd.push_back(sizeInput);
    }
   }

}

void prntVec(vector<int> even, vector<int> odd, int sizes)
{
   cout << "    Vector      Even       Odd" << endl;
   if(even.size() > odd.size())
   {
      for(int i = 0; i < even.size(); i++)
        {
            cout << setw(20) << even.at(i) << setw(sizes);
           
            if(i < odd.size())
            {
                cout << odd.at(i) << endl;
            }
            else
            cout << " " << endl;
        }
   }
   
   else
   {
       for(int i = 0; i < odd.size(); i++)
        {
            if(i < even.size())
            {
                cout << setw(20) << even.at(i) << setw(sizes);
            }
            else
            cout << setw(20) << " " << setw(sizes);
            cout << odd.at(i) << endl;
                   
        }
   }
   
}
   
   
void copy(vector<int> even, vector<int> odd,int arr[][COLMAX])
{
    for(int i = 0; i < even.size(); i++)
    {
        arr[i][COLMAX-1] = even.at(i);
        arr[i][COLMAX] = odd.at(i);
    }
}

void prntAry(const int arr[][COLMAX],int evenSize,int oddSize, int sizes)
{
    cout << "     Array      Even       Odd" << endl;
    for(int i = 0; i < evenSize; i++)
    {
        cout << setw(20);
        cout << arr[i][COLMAX-1];
        cout << setw(10);
        cout << arr[i][COLMAX] << endl;
     }
}