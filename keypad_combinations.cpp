#include <iostream>
#include <string>
using namespace std;

string getString(int n){
    if (n == 2) return "abc";
    else if (n == 3) return "def";
    else if (n == 4) return "ghi";
    else if (n == 5) return "jkl";
    else if (n == 6) return "mno";
    else if (n == 7) return "pqrs";
    else if (n == 8) return "tuv";
    else if (n == 9) return "wxyz";
}


void helper(int num, string output){
    if (num == 0 || num == 1) {
      cout << output << endl;
      return;
    }

    int digit = num % 10;
    string option = getString(digit);

    for (int i = 0; i < option.length(); i++){
        helper(num/10, option[i]+output);
    }
}

void printKeypad(int num){
    helper(num, "");
}
