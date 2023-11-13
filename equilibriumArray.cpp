// Time Complexity O(n)
// Space Complexity O(1)
int findEquilibriumIndex(int *arr, int n)
{
    if (n < 3){
        return -1;
    }

    int Lsum = 0, Rsum = 0;
    for (int i = 1; i < n; i++) Rsum += arr[i];

    int i = 0;

    while (i < n - 1){
        if (Lsum == Rsum) return i;
        else {
            Lsum += arr[i];
            Rsum -= arr[i+1];
            i++;
        }
    }
    return -1;
}
