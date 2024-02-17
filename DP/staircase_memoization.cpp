// got incorrect output for large testcases which is probably due to space issue
#include<bits/stdc++.h>
#include<vector>
using namespace std;

int staircase_helper(int n, vector<int> &memo){
    if (n < 0) {
        return 0; 
    }
    if (n == 0){
        return 1;
    }
    if (memo[n] != -1){
        return memo[n];
    }

    memo[n] = staircase_helper(n -1, memo) + staircase_helper(n -2, memo) + staircase_helper(n -3, memo);

    return memo[n];
}

int staircase(int n){
    vector<int> memo(n + 1, -1);
    return staircase_helper(n, memo);
}

int main()
{
    int t;
    cin >> t;
    vector<int> query(t);
    for(int i = 0; i < t; i++){
        int x;
        cin >> x;
        query[i] = x;
    }
    for(int i = 0; i < t; i++){
        cout << staircase(query[i]) << endl;
    }
    return 0;
}
