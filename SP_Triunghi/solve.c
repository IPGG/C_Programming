#include <stdio.h>
#include <math.h>

int main()
{
    float a, b, c;
    scanf ("%f%f%f", &a, &b, &c);
    float P = 0, S = 0;
    P = a + b + c;
    S = sqrt(P/2 * (P/2 - a) * (P/2 - b) * (P/2 - c));
    printf (" Perimetrul este %0.4f\n", P);
    printf (" Aria calculata cu Heron este %0.4f\n", S);
    return 0;
}