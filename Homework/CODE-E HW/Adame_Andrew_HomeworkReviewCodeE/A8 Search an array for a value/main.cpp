/* 
 * Purpose:  Searching for multiple occurrence of patterns
 * Note:  cout proceeds to null terminator, cin reads to end of line
 *        for character arrays
 * 
 */

//System Libraries Here
#include <iostream>//cin,cout,getline()
#include <cstring> //strlen()
using namespace std;

//User Libraries Here

//Global Constants Only, No Global Variables
//PI, e, Gravity, or conversions

//Function Prototypes Begins Here
//srch1 utility function Input->start position, Output->position found or not
//srch1 is a simple linear search function, repeat in srchAll till all found
//srch1 Input->sentence, pattern, start position Output-> position found
//Remember arrays start at index/position 0
//srchAll Input->sentence, pattern Output->position array
int  srch1(const char [],const char [],int);//Search for 1 occurrence
void srchAll(const char [],const char [],int []);//Search for all occurrences
void print(const char []);//Print the character arrays
void print(const int []); //Print the array of indexes where the pattern found

//Program Execution Begins Here
int main(int argc, char** argv) {
    //Declare all Variables Here
    const int LINE=81;               //Size of sentence or pattern to find
    char sntnce[LINE],pattern[LINE]; //80 + null terminator
    int match[LINE];                 //Index array where pattern was found
    
    //Input a sentence and a pattern to match
    cout<<"Match a pattern in a sentence."<<endl;
    cout<<"Input a sentence"<<endl;
    cin.getline(sntnce,LINE);
    cout<<"Input a pattern."<<endl;
    cin.getline(pattern,LINE);
    
    //Search for the pattern
    //Input the sentence and pattern, Output the matching positions
    //Remember, indexing starts at 0 for arrays.
    srchAll(sntnce,pattern,match);
    
    //Display the inputs and the Outputs
    cout<<endl<<"The sentence and the pattern"<<endl;
    print(sntnce);
    print(pattern);
    cout<<"The positions where the pattern matched"<<endl;
    print(match);
    
    //Exit
    return 0;
}

//FUNCTION - Search 1 Occurences
int srch1(const char sntnce[], const char pattern[], int index)
{
    int len = strlen(sntnce); 
    int lens = strlen(pattern);
    bool y = 1;
    
    int x = index;
        for(int y = 1; y < lens; y++)
        {       
            x++;
            if(pattern[y]!= sntnce[x])
            {
                y = 0;
                index = 0;
            }
        }
    
    return y;
}

//FUNCTION - Search All Occurences
void srchAll(const char sntnce[], const char pattern[], int match[])
{
    int index = 0;
    int pos = 0;
    int len = strlen(sntnce);
    int lens = strlen(pattern);
    bool check;
    int temp;
    
    do
    {
        check = 0;
        temp = 0;
        for(int x = index; x < len; x++)
        {
            if(pattern[0] == sntnce[x])
            {
                index = x;
                temp = x;
                x = len;

            }
            else
                temp = len;
        }
        
        if(temp < len)
        {
            check = srch1(sntnce, pattern, index);
        }
        
        if (check)
        {
            match[pos]=index;
            ++pos;
        }

        index++;
    }
    while(temp < len);
    
    for(int x=pos; x<81; ++x)
    {
        match[x] = -1;
    }

}

void print(const char sntnce[])
{
    int len = strlen(sntnce);
    for(int x = 0; x < len; x++)
    {
        cout << sntnce[x];
    }
    cout << endl;
}

void print(const int match[])
{
    if(match[0]!=-1)
    {
        for(int x = 0; x < 81; x++)
        {
            if(match[x] > -1)
            cout << match[x] << endl;        
        }
    }
    else
        cout << "None" <<endl;

}