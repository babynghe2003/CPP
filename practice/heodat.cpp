#include <iostream>
#include <set>
using namespace std;

void maximize(int &x, int v) { if (x < v) x = v; }
int readInt() { int x; cin >> x; return x; }
const int LIM = 1e6;

int BIT[LIM + 1] = {};
void update(int p, int v) {
    for (; p < LIM; p++)
        maximize(BIT[p], v);
}

int getMax(int p) {
    int res = 0;
    for (; p > 0; p--)
        maximize(res, BIT[p]);

    return res;
}

int main()
{
    int res = 0;
    for (int n = readInt(); n--; ) {
        set<int, greater<int>> S;
        for (int m = readInt(); m--; S.insert(readInt()));
        for (int x : S) {
            update(x, getMax(x) + x);
            maximize(res, BIT[x]);
        }
        cout << res << endl;
    }

    cout << res;
    system("pause");
    return 0;
}