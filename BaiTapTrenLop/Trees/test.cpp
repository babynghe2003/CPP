#include<bits/stdc++.h>
using namespace std;
struct Node {
    int data;
    Node *left, *right;
    Node(int data) {
        this->data = data;
        left = right = NULL;
    }
};
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    
    Node *root = new Node(1);
    root->left = new Node();

    return 0;
}
