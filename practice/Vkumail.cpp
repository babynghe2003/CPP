#include <iostream>
#include <string>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	string str;
	cin >> str;
	if (str.length()<=20){
	char c=32; 
	int i=0;
	while (i< str.length()){
		while (str[i] == c){
			str.erase(i,1); 
		}
		i++;
	} 
	cout << str << "@vku.udn.vn";
  	} else
	  {
  		cout << "N";
	  }
	return 0;
}
