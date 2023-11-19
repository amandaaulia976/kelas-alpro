#include<stdio.h>
#include<math.h>
#define PI 3.14159

void hitungkelilinglingkaran(double radius, double *k){
    *k = 2 * PI * radius;
}
void main(void){
    int R;
    double keliling;
    
    printf("masukkan nilai jari-jari lingkaran: ");
    scanf("%lf", &R);
    hitungkelilinglingkaran(R, &keliling);
    printf("keliling lingkaran dengan jari-jari %lf: %lf\n", R, keliling);

    return 0;
}