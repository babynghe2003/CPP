#include <bits/stdc++.h>
using namespace std;

int main(){

    int n = 10;

    int a[n];

    int* temp = a;

    for (int i = 0; i<10; i++){
        *(temp+i) = rand()%100;
    }

    for (int i = 0; i<10; i++){
        cout << a[i] << " ";
    }

    return 0;
}

