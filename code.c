#include <stdio.h>
int isprime(int num)
{
    if (num < 2)
        return 0;
    for (int z= 2; z * z <= num; z++)
	{
        if (num % z == 0)
            return 0;
    }
    return 1;
}
int main() {
    int input;
    while (1) {
        printf("Please enter a number ranging between 2 and 100: ");
        scanf("%d", &input);
        if (input >= 2 && input <= 100) {
            int result = isprime(input);
            if (result == 1)
                printf("The number you entered is a prime number.\n");
            else
                printf("The number you entered is not a prime but a composite number.\n");
            break;
        } else {
            printf("Number Out of range,  Press 1 to Try again: ");
            int retry;
            scanf("%d", &retry);
            if (retry != 1)
               break;
        }
    }
    printf("Thank you");
    return 0;
}


// name: Shehbaz khan
// father name: Ubaidullah
// roll no: 54
