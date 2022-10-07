#include <bits/stdc++.h>

using namespace std;
void inversePermutation(int arr[], int size) {
  for (int i = 0; i < size; i++) {
    for (int j = 0; j < size; j++) {
      if (arr[j] == i + 1) {
        cout << j + 1 << " ";
        break;
      }
    }
  }
}
int main() {
	ios::sync_with_stdio(false);
   int q;
   cin >> q;
   while (q--){
        
   }
   return 0;
}