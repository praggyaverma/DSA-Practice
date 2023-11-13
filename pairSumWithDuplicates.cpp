// Optimised approach



// Brute force approach
int pairSum(int *arr, int n, int num)
{
	sort(arr, arr + n);
     int i = 0, j = n - 1;
     int dupcount = 0, count = 0;

     while (i < j){
          if (arr[i] + arr[j] == num){
               count++;
               i++;
               j--; 
          } 
          else if (arr[i] + arr[j] < num){
               i++;
          } else {
               j--;
          }
     }
     return count;
}
