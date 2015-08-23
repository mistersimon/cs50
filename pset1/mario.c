/**
 * mario.c
 *
 * Simon Lee
 * silee001@gmail.com
 *
 * Prints pyramids for Mario
 *
 */

#include <cs50.h>
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    // Height of pyramid
    int height = 0;

    // String of bricks
    char bricks[25] = "##";

    do
    {
        printf("Height: ");
        height = GetInt();
    }
    while (!(height >= 0 && height <= 23));

    // Build the pyramid top to bottom
    for (int i = 0; i < height; i++)
    {
        printf("%*s\n", height + 1, bricks);

        // Concatenate on extra brick
        sprintf(bricks, "%s%s", bricks, "#");
    }

    return 0;
}
