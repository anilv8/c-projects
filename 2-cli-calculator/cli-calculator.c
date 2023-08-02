#include <stdio.h>
#include <math.h>

int main(void){
    float answer, number_one, number_two;
    char operate;
    printf("Enter the calculation expression:\n");
    scanf("%f %c %f", &number_one, &operate, &number_two);
    switch(operate){
        case '+': answer = number_one + number_two;
            break;
        case '-': answer = number_one - number_two;
            break;
        case '*': answer = number_one * number_two;
            break;
        case '/': answer = number_one / number_two;
            break;
    }
    printf("The answer is: %.9g\n", answer);
    return 0;
}
