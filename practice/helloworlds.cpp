#include<iostream>
using namespace std;
int main(){
    float thuong, a, b, tong, hieu, tich;
    cout<<"Nhap a= ";
    cin>>a;
    cout<<"Nhap b= ";
    cin>>b;
    tong=a+b;
    hieu=a-b;
    tich=a*b;
    thuong=a/b;
    cout<<"Tong: "<<a<<"+"<<b<<"="<<tong<<endl;
    cout<<"Hieu: "<<a<<"-"<<b<<"="<<hieu<<" va "<<b<<"-"<<a<<"="<<-hieu<<endl;
    cout<<"Tich: "<<a<<""<<b<<"="<<tich<<endl;
    cout<<"Thuong: "<<a<<"/"<<b<<"="<<thuong<<" va "<<b<<"/"<<a<<"="<<1/thuong<<endl;
    system("pause");
    return 0;
}