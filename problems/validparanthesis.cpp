#include<iostream>
#include<stack>
using namespace std;
bool isValid(string s){
    stack<char> st;
    for(char ch:s){
        if(ch=='('||ch=='['||ch=='{'){
            st.push(ch);
        }
      else{
        if(st.empty()){
            return false;
        }
        char topElement=st.top();
        st.pop();
      
     if((ch==')'&&topElement!='(')||
   (ch==']'&&topElement!='[')||
   (ch=='}'&&topElement!='{')){
    return false;
}
        }
}
return st.empty();
}
int main(){
    string s1 = "{[()]}";
    string s2 = "([)]";
    string s3 = "(()";

    cout << isValid(s1) << endl;
    cout << isValid(s2) << endl;  
    cout << isValid(s3) << endl;  

}