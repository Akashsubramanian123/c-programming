#include <stdio.h>
#include <string.h>
  int main() 
{
        char punctuation[] = { '.', '?', '!', ':', ';',
                                        '-', '(', ')', '[', ']',
                                        ',', '"', '/'};

        char input[256]="Surya,jk!", output[256];
        int i, j, k, ch, flag;
        i = j = k = flag = 0;
        input[strlen(input) - 1] = '\0';
        while (input[i] != '\0') 
		{
                flag = 0;
                ch = input[i];
                for (j = 0; j < 13; j++) {
                        if (ch == punctuation[j]) {
                                flag = 1;
                                break;
                        }
                }
                if (!flag) {
                        output[k++] = input[i];
                }
                i++;
        }
        output[k] = '\0';
        printf("Resultant String: %s\n", output);
        return 0;
}
