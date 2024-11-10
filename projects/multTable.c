#include <stdio.h>

int main()
{
    int in;
    printf("enter your number: ");
    scanf("%i", &in);
    int range;
    printf("enter your range: ");
    scanf("%i", &range);

    for (int i = 1; i < range + 1; i++)
    {
        int out = in * i;
        printf("%i x %i = %i\n", in, i, out);
    }
    return 0;
}