// clang-format off
#include <iostream>
#include <string>
#include <math.h>
#include <vector>
using namespace std;

#define el   '\n'


long long fact(int n) {
    long long ans = 1;
    for (long long i = 1; i <= n; i++)
        ans *= i;
    return ans;
}

long long perm(string str) {
    size_t length = str.length();
    vector <int> freq(26, 0);
    for (int i = 0; i < length; i++) {
        freq[str[i] - 'a']++;
    }
    long long f = 1;
    for (int i = 0; i < 26; i++)
        f *= fact(freq[i]);
    return fact((long long)length) / f;
}

int32_t main() {

    	int test;
    	cin >> test;
    	
    	for(int t = 0; t < test; t++) {
            string s;
            cin >> s;
            int n = s.length();
            
            long long res = perm(s);
            cout << res << "\n";
        }

}
