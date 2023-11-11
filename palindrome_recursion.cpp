bool palindrome(int a[], int size){
    if (size == 0 || size == 1){
        return true;
    }
    if (a[0] != a[size - 1]){
        return false;
    }
    return palindrome(a+1, size - 2);
}
