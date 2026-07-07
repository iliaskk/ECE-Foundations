    #include <stdio.h>
#include <stdlib.h>

int max(int num1,int num2);

    int main() {
      int num1,num2;
    printf("Choose number A:\n");
    scanf("%d",&num1);
    printf("Choose number B:\n");
    scanf("%d",&num2);
    int apotelesma = max(num1, num2);
    printf("O megaluteros ari8mos einai %d\n",apotelesma);
        return 0;
        }

int max(int num1, int num2) {
    if (num1 > num2) {
       return num1; }

       else {
       return num2; }
    }
