#include <iostream>
#include <string>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, m;
        cin >> n >> m;
        string x, s;
        cin >> x >> s;

        string cur = x;
        int ops = 0;
        int found = -1;
        for (int i = 0; i <= 25; ++i) {
            if (cur.find(s) != string::npos) {
                found = ops;
                break;
            }
            cur += cur;
            ++ops;
            if (cur.size() > 100) break; 
        }
        cout << found << endl;
    }
    return 0;
}