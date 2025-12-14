#include <iostream>
#include <vector>
#include <string>
#include <cmath>
#include <fstream>
using namespace std;




bool check(string key, string answer);
bool simpleQuestion(vector<string> vocabList,vector<string> answersheet);
vector<int> sort(vector<int> vec);






int main(){
    /*
    1. ask user for what part they wanted to be tested on
    2.options include: grammar, vocab, and story
    3.

    the priority is to have file pull figured out
    
    
    
    
    */
    return 0;
}



bool check(string key, string answer)
{
    if(key==answer)
    {
        return true;
    }else
    {
        return false;
    }
}




bool simpleQuestion(vector<string> vocabList,vector<string> answersheet)
{
    string answer;
    for(int i=0;i<vocabList.size();i++)
    {
        cout<<vocabList[i]<<": ";
        cin>>answer;
        if(check(answersheet[i],answer)==true)
        {
            return true;
        }
        else
        {
            return false;
        }
        
    }
}



vector<int> sort(vector<int> vec)
{
    for(int i;i<vec.size();i++)
    {
        int First_check_value = vec[i];
        for(int j;j<vec.size();j++)
        {
            
        }
    }
}
