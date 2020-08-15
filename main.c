#include <stdio.h>
int main(void)
{
	float R,H,ANS;
	printf("Enter R ");
	scanf("%f", &R);
	printf("Enter H ");
	scanf("%f", &H);
	ANS = (2*3.14*R)*H+2*(3.14*R*R);
	printf("ANS%0.2f",ANS);
}
