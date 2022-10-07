#include<bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0); 
    string in;
    cin >> in;
    stack<char> st;
    string out="";
    for(char c : in){
        if(c == '(') st.push(c);
        else if(c == ')'){
            while(st.size() and st.top() != '(') out+=st.top(),st.pop();
            st.pop();
        }
            
        else if((c>='0' and c<='9') or (c>='a' and c<='z')) out+=c;
        else st.push(c);
    }  
    while(st.size()) out+=st.top(),st.pop();
    
    cout << out;
    return 0;
}