#include <bits/stdc++.h>
#include <string>
using namespace std;

void dectohex()
{ 
    // ios_base::sync_with_stdio(0); 
    // cin.tie(0); 
    // cout.tie(0);
    //10 sang 16
    int n,c;
    cout << " nhap so he 10" << endl;
    cin >> n;
    string hex="";
    while (n>=1){
        c = n % 16;
        n = n / 16;
        switch (c)
        {
        case 10:
            hex = 'A' + hex;
            break;
        case 11:
            hex = 'B' + hex;
            break;
        case 12:
            hex = 'C' + hex;
            break;
        case 13:
            hex = 'D' + hex;
            break;
        case 14:
            hex = 'E' + hex;
            break;
        case 15:
            hex = 'F' + hex;
            break;
        default:
            hex = to_string(c) + hex;
            break;
        }
    }

    cout << hex << endl;
    system("pause");
}
void HexToDec()
{
    string S;
    int dec=0 , c=1 , d=1;
    cout << "nhap co so 16" << endl;
    cin >> S;
    for (int i = S.length() - 1; i >= 0; i--){
        switch (S[i])
        {
        case 'A':
            c=10;
            break;
        case 'B':
            c=11;
            break;
        case 'C':
            c=12;
            break;
        case 'D':
            c=13;
            break;
        case 'E':
            c=14;
            break;
        case 'F':
            c=15;
            break;  
        
        default:
            c = (int)S[i] - 48;
            break;
        }

        dec += c*d;
        d *= 16;

    }
    cout << dec;
    system("pause");
}
int main(int argc, char const *argv[])
{   cout << (string)"23";
    //HexToDec();
     system("pause");
    return 0;
}

