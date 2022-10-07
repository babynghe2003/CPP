#include <iostream>

using namespace std;


int main(int argc, char** argv) {
	 	string st;
	 	cin >> st;
        
        int d=0, c=st.length()-1, g=(d+c)/2;
        if (st[c]=='0') cout << (c+1);
        else{
        while (d<=c){
            g=(d+c)/2;
            if (st[g]=='1') c=g-1;
            else if (st[g+1]=='0') d=g+1;
            else {
                cout << (g+1); 
                break; 
            }
        }
    }
    
	return 0;
}
