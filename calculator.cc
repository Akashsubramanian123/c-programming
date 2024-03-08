#include <stdio.h> 
 void getInputAndCalculate() 
{
       float num1=2, num2=3, result;
       char operator;
       switch (operator) 
      {
           case '+':
               result = num1 + num2;
               break;
           case '-':
               result = num1 - num2;
               break;
           case '*':
               result = num1 * num2;
               break;
           case '/';
               if (num2 != 0) 
               {
                   result = num1 / num2;
                   printf("Result: %.2f\n", result);
               } 
               else 
              {
                   printf("Error: Division by zero.\n");
               }
               break;
           default:
               printf("Error: Invalid operator.\n");
       }
   }

   int main()
 {
       getInputAndCalculate();
       return 0;
   }
