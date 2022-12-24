#include<bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    long long x1,y1,x2,y2;
    long long xCr,yCr;
    long long x0,y0;
    long long res1,res2;
    long long r,l,mid;

    cin >> x0 >> y0;

    //find x1 y1
    xCr = x0; yCr = y0;
    //find x1
     r = x0, l = -2e9;
     mid = (r + l)/2;
    do{
        mid = (l+r)/2;
        cout << "find " << mid << " " << yCr << endl;
        cin >> res1;
        if (res1 == 0){
            l = mid+1;
        }else{
            x1 = mid;
            r = mid-1;
        }
    }while(l<=r);


    //find y1
     r = y0, l = -2e9;
     mid = (r + l)/2;
    do{
        mid = (l+r)/2;
        cout << "find " << x0 << " " << mid << endl;

        cin >> res1;
    
        if (res1 == 0){
            l = mid+1;
            
        }else{
            y1 = mid;
            r = mid-1;
        }
    }while(l<=r);

    // find x2 y2;
    xCr = x0; yCr = y0;
    //find x2
     r = 2e9, l = x0;

    do{
        mid = (l+r)/2;
        cout << "find " << mid << " " << yCr << endl;
        cin >> res1;
        
        if (res1 == 0){
            r = mid-1;
        }else{
            x2 = mid;
            l = mid+1;
        }
    }while(l<=r);


    //find y2
     r = 2e9, l = y0;
     mid = (r + l)/2;
    do{
            mid = (l+r)/2;
        cout << "find " << xCr << " " << mid << endl;

        cin >> res1;

        if (res1 == 0){
            r = mid-1;
        }else{
            y2 = mid;
            l = mid+1;
        }
    }while(l<=r);

    cout << "answer " << x1 << " " << y1 << " " << x2 << " " << y2 << endl;
    return 0;
}
