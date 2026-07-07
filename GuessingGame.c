#include <stdio.h>
#include <stdlib.h>

int main() {

int secretNumber = 5;
int guess;

printf("Guess the secret Number:");
scanf("%d",&guess);

while (guess != secretNumber) {
    printf("Secret number not found!Please try again:");
    scanf("%d",&guess); }

if (guess == secretNumber) {
    printf("Correct!You found the secret number.");

 }
 return 0;
}

