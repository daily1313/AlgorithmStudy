#include <string>
#include <vector>
#include <stack>

using namespace std;

int solution(string A, string B) {
    
    int count = A.size();
    int result = 0;
    
    if(A==B) return 0; 
    
    while(count--)
    {
        
        string str = "";
        char temp = A[A.size()-1];
        
        for(int i=A.size()-1;i>0;i--) 
        {
            A[i] = A[i-1];       
        }
        
        
        A[0] = temp;
        result++;
        
        for(int i=0;i<A.size();i++)
        {
            str += A[i];
        }
        
        if(str == B) return result;
        
        
    }
    
    
    return -1;
}