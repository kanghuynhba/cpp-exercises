// N = 5, S = 19
// A = [8, 10, 7, 11, 12, 5, 6]
// A_sorted = [5, 6, 7, 8, 10, 11, 12]
// giả sử i cố định là 7, tức a[i] = 12, j lớn nhất là 3 sao cho mà a[i] + a[j] <= S = 19
// j < i
// ví dụ i = 1 --> j = 0 --> ans = 0
// i = 2 --> j = 1 --> ans += j --> ans = 1
// i = 3 --> j = 2 --> ans += j --> ans = 3
// i = 4 --> j = 3 --> ans += j --> ans = 6
// i = 5 --> j = 4 --> ans += j --> ans = 10
// i = 6 --> j = 4 --> ans += j --> ans = 14
// i = 7 --> j = 4 --> ans += j --> ans = 17
// số cặp a[i] + a[j] <= S
 
#include <bits/stdc++.h>
 
using namespace std;
 
int a[100005];
 
int main() {
    int N, S;
    cin >> N >> S;
    for (int i = 1; i <= N; i++) {
        cin >> a[i];
    }
    sort(a + 1, a + N + 1);
 
    int j = 0;
    long long ans = 0;
    // 10^5 * (10^5 - 1) / 2;
    for (int i = 1; i <= N; ++i) {
        while (j + 1 < i && a[j + 1] + a[i] <= S) {
            j++;
        }
        while (j > 0 && a[i] + a[j] > S) {
            j--;
        }
        // a[i] + a[j] <= S va j max nhat
        ans += j;
    }
    cout << ans;
}