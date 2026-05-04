#include <stdio.h>
#include <stdlib.h>

int main()
{
    // The Line below must *NOT* be changed or test will fail!
    srand(1);
    
    // Your code goes here
    int diceThrows[100];
    int ones = 0, twos = 0, threes = 0, fours = 0, fives = 0, sixes = 0;
    int sum = 0;
    float average = 0.0;

    for(int i = 0; i < 100; i++) {
        int throw = rand() % 6 + 1;
        switch(throw) {
            case 1:
                ones++;
                break;
            case 2:
                twos++;
                break;
            case 3:
                threes++;
                break;
            case 4:
                fours++;
                break;
            case 5:
                fives++;
                break;
            case 6:
                sixes++;
                break;
        }
        sum += throw;
        diceThrows[i] = throw;
    }

    average = sum / 100.0;

    printf("%d\n", ones);
    printf("%d\n", twos);
    printf("%d\n", threes);
    printf("%d\n", fours);
    printf("%d\n", fives);
    printf("%d\n", sixes);

    printf("%d\n", sum);
    printf("%.1f\n", average);

    return 0;
}
