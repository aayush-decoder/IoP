#include <stdio.h>

enum Colors {
    RED = 0xFF0000,
    GREEN = 0x00FF00,
    BLUE = 0x0000FF,
    YELLOW = 0xFFFF00,
    WHITE = 0xFFFFFF 
};


int main() {

    int input;
    printf("Enter a color code (1: RED, 2: GREEN, 3: BLUE, 4: YELLOW, 5: WHITE): ");
    scanf("%d", &input);

    enum Colors myColor;

    switch (input)
    {
    case 1:
        myColor = RED;
        break;
    case 2:
        myColor = GREEN;
        break;
    case 3:
        myColor = BLUE;
        break;
    case 4:
        myColor = YELLOW;
        break;
    case 5:
        myColor = WHITE;
        break;
    default:
        printf("Please enter a valid number");
        break;
    }

    printf("%x which is equivalent to %d in decimal", myColor, myColor);

    return 0;
}