#include<stdio.h>
int median(int *x, int size);
int mode(int *x, int size);
int main(){
    int i, n;

    printf("\nEnter the number of elements\n");
    scanf("%d",&n);

    int a[n];

    printf("Enter the set of numbers\n");

    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
printf("\nMedian = %d", median(a, n));
mode(a,n);
return 0;
}
