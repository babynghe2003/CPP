// for loop in map
for (auto const& [key, val] : symbolTable)
{
    std::cout << key        // string (key)
              << ':'  
              << val        // string's value
              << std::endl;
}
// sort save index
    sort(A,A+n,[](vla a,vla b){
        return a.value<b.value;
    });
// queude have top max
priority_queue<int> a, b;
// DSU
void make_set(int v) {
    parent[v] = v;
    rank[v] = 0; // Gốc của cây có độ cao là 0
}

void union_sets(int a, int b) {
    a = find_set(a);
    b = find_set(b);
    if (a != b) {
        if (rank[a] < rank[b]) swap(a, b); // Đặt biến a là gốc của cây có độ cao lớn hơn
        parent[b] = a;
        if (rank[a] == rank[b]) rank[a]++; // Nếu như hai cây có cùng một độ cao, độ cao của cây mới sau khi gộp sẽ tăng 1
    } 
}

int find_set(int v) {
    return v == parent[v] ? v : parent[v] = find_set(parent[v]);
}

// power_module & multi_module
long long multiply_modulo(long long A, long long B, long long M)
{
    if (B == 0)
        return 0;

    long long T = multiply_modulo(A, B / 2, M) % M;

    if (B & 1)
        return ((T + T) % M + A % M) % M;
    else
        return (T + T) % M;
}

long long power_modulo(long long A, long long B, long long M)  
{
    if (B == 0)
        return 1LL;

    int half = power_modulo(A, B / 2LL, M) % M;
    half = multiply_modulo(half, half, M);

    if (B & 1)
        return multiply_modulo(half, A, M);
    else
        return half;
}