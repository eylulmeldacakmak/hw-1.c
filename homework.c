#include <stdio.h>
int main() {
    for (int j = 0; j < 101; j+=2)
    printf(%d, j);

    for (int i =0 ; i < 101; i++)
        if (i % 2 == 0)
         printf(i);

    for (int i=0 ; i < 101 ;)
        if (i % 2 != 0)
        continue;
        printf(i);

    for (int i = 0; i < 101; i++)
        if (i % 2 != 0)
        printf(i);

    int number = 0;
    while (number <= 100; number+=2)
    printf(number);

    int number = 0;
    while (1);
        if (number % 2 == 0)
            printf(number);
        number++;
        if (number==101)
        break;
    
    int number = 0;
    printf("Number : %d\n",number);
    while(number<=100)
        if (number % 2 != 0)
        printf(number);
    number++;

    for (int i=1; i<10;)
        if (i<= 5)
        continue;
    printf(i);

    for (int i=1; i<4;)
        for(int j=1; j<4;)
            for(int z=1; z<4;)
                printf(i, j, z);

    int how_much = scanf("How much money is in your bank account?");
    int real_estate = scanf("How many houses do you have in Kotekli?");
    int car = scanf("Do you have a car?");

    int threshold_money = 100000;
    int threshold_house = 5;
    if (how_much > threshold_money && real_estate > threshold_house)
        if (car==1) {
            printf("You don't have to work all day.");
            } else {
            printf("You should buy a car.");
            }
    return 0;
}