#include <stdio.h>

int main() {
   int low=1, high=10, i, flag;
   printf("Prime numbers between %d and %d are: ", low, high);
   while (low < high) {
      flag = 0;
      if (low <= 1) {
         ++low;
         continue;
      }
      for (i = 1; i <= high / 2; ++i) {

         if (high % i == 0) {
            flag = 1;
            break;
         }
      }

      if (flag == 0)
         printf("%d ", low);
      
      ++low;
   }

   return 0;
}
