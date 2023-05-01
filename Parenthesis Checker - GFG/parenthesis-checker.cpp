//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution
{
    public:
    //Function to check if brackets are balanced or not.
    bool ispar(string x)
    {
        // Your code here
        stack<char>st;
        
        for(int i=0;i<x.length();i++){
            char ch = x[i];
            //if open bracket, then push to stack 
            
            if(ch=='('|| ch=='{'||ch=='['){
                st.push(ch);
            }
            
            //if close bracket, check stack top and then pop
            else{
                if(!st.empty()){
                    char top = st.top();
                if((ch==')' && top =='(') || (ch=='}' && top =='{')|| (ch==']' && top =='[')){
                    st.pop();
                }
                else{
                    return false;
                }
                }
                else{
                    return false;
                }
                
            }
        }
        if(st.size() == 0) return true;
        return false;
    }

};

//{ Driver Code Starts.

int main()
{
   int t;
   string a;
   cin>>t;
   while(t--)
   {
       cin>>a;
       Solution obj;
       if(obj.ispar(a))
        cout<<"balanced"<<endl;
       else
        cout<<"not balanced"<<endl;
   }
}
// } Driver Code Ends