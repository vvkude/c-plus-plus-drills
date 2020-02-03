// Chapter 3 Stroustrup drill to demonsrate double and float precision
#include <stdio.h>
#include <math.h>

// Calculate roots of quadratic equation using doubles
void double_roots(double a, double b, double c) {
	double d = b*b - 4.0*a*c;
	double sqrt_d = sqrt(d);
	double r1 = (-b + sqrt_d) / (2.0*a);
	double root1 = (-b + sqrt_d) / (2.0*a);
	double root2 = (-b -sqrt_d) / (2.0*a);
	printf("%.5f\t%.5f\n", root1, root2);
}

// Calculate roots of quadratic equation using floats
void float_roots(float a, float b, float c) {
	float d = b*b - 4.0f*a*c;
	float sqrt_d = sqrtf(d);
	float root1 = (-b + sqrt_d) / (2.0f*a);
	float root2 = (-b - sqrt_d) / (2.0f*a);
	printf("%.5f\t%.5f\n", root1, root2);
}

// Should consider allowing user input
int main() {
	float fa = 1.0f;
	float fb = -4.0000000f;
	float fc = 3.9999999f;
	double da = 1.0;
    double db = -4.0000000;
    double dc = 3.9999999;

    printf("Roots of the quadratic equation x2 - 4.0000000 x + 3.9999999 = 0 are : \n");
    printf("\nFor float values: \n");
    float_roots(fa, fb, fc);

    printf("\nFor double values: \n");
    double_roots(da, db, dc);
    return 0;
}