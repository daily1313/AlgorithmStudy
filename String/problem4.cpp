#include <iostream>
#include <string>
#include <vector>

using namespace std;


int main()
{
    string word;
    getline(cin,word);
    for(int i=0;i<word.size();i++)
    {
        if(word[i]>='A' && word[i]<='Z')
        {
            word[i] = 'A' + 'Z' - word[i];
        } 
        if(word[i]>='a' && word[i]<= 'z')
        {
            word[i] = 'a' + 'z' - word[i];
        }
    }
    cout<<word;
    
}