#include <iostream>
#include <string>
#include <stack>
#include <vector>

using namespace std;

string isBalanced(string s){
//    int start = 0; int end = s.length()-1;
//    while( start < end ){
//        if( s[start] != s[end] ){
//            return "NO";
//        }
//        start++;
//        end--;
//    }
//    return "YES"; 
// Palindrome throwback
stack <char> st;
for(auto i:s){
    if( i =='{' || i=='[' || i=='(')
    st.push(i);
    else {
        if(st.empty())
            return "NO";
            
        if( (i == '}' && st.top() == '{') ||
            (i == ']' && st.top() == '[') ||
            (i == ')' && st.top() == '('))
          st.pop();  //we found a closing pair, pop
        else 
            return "NO"; //different pairs, 
        }
    }
if(st.empty())
    return"YES";
else 
    return "NO";
}
int main(){
    vector <string> result;
    int n; string s;
    cin>>n;
    
    for(int i=0; i<n; i++){
    cin>>s;
    result.push_back(isBalanced(s));
    }
    
    for(auto i : result)
        cout<<i<<endl;
    
    
return 0;
}
