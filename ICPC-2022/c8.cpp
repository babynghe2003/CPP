#include <bits/stdc++.h>
using namespace std;

double d(int x1, int y1, int x2, int y2){
    return sqrt((x1-x2)*(x1-x2)+(y1-y2)*(y1-y2));
}

int main(){

    int xA,yA,xB,yB,xP,yP,xQ,yQ;

    cin >> xA >> yA >> xB >> yB >> xP >> yP;

    double  dPA=d(xA,yA,xP,yP), 
            dPB=d(xB,yB,xP,yP),
            dAB=d(xB,yB,xA,yA);

    if (dPA*dPA+dAB*dAB>dPB*dPB && dPB*dPB+dAB*dAB>dPA*dPA){
        double p = (dPA+dPB+dAB)/2.;
        double S = sqrt(p*(p-dPA)*(p-dPB)*(p-dAB))/dAB;
        cout << round(S*100)/100.;
    }else {
        cout << dPA<dPB?xA+" "+yA:xB+" "+yB;
    }



    return 0;
}

