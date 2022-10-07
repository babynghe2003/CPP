#include <bits/stdc++.h>
using namespace std;

int main(){

    int n = 10;

    int *a = new int[n];

    for (int i = 0; i<10; i++){
        *(a+i) = rand()%100;
    }

    for (int i = 0; i<10; i++){
        if (*(a+i) %2 == 1){
            delete (&a+i);
        } 
    }

    for (int i = 0; i<n; i++){
        cout << *(a+i) << " ";
    }
    delete [] a;
    return 0;
}

