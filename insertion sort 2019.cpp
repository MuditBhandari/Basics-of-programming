#include <stdio.h>
void insertion_sort(int * ,int,int ); 
int main()
{
  int n,k, array[1000], c; 
  printf("Enter number of elements\n");
  scanf("%d %d", &n,&k); 
  printf("Enter %d integers\n", n); 
  for (c = 0; c < n; c++)
    scanf("%d", &array[c]); 
insertion_sort(array,n,k);
  printf("Sorted list in ascending order:\n"); 
  for (c = 0; c <= n - 1; c++) {
    printf("%d\n", array[c]);
  }
  return 0;
}
void insertion_sort(int *array,int n,int k)
{
int c,d,t; 
  for (c = 1 ; c <= n - 1; c++) 
  {
    d = c; 
    while ( d > 0 && array[d-1] > array[d]) 
	{
      t          = array[d];
      array[d]   = array[d-1];
      array[d-1] = t; 
      d--;
    
    
  } 
  
}
}

