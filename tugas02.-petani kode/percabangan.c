#include <stdio.h>
int main (){
    int x;
    float tinggi,berat,BMI;

    printf ("\npilih jenis kelamin");
    printf ("\n1.pria");
    printf ("\n2. wanita\n");
    scanf ("%d", &x);

     switch (x){
        case 1:
        printf ("masukkan tinggi badan (m): ");
        scanf ("%f, &tinggi");
        printf ("masukkan berat badan (kg): ");
        scanf ("%f", &berat);

        BMI = berat/(tinggi*tinggi);

        if(BMI>=17 && BMI<=23){
            printf ("berat badan ideal ideal untul pria");
        }
        else printf ("berat badan ideal");
        break;

        case 2:
        printf ("\nmasukan tinggi badan (m): ");
        scanf("%f", &tinggi);
        printf ("masukkan berat badan (kg): ");
        scanf ("%f", &berat);

        BMI = berat /(tinggi*tinggi);

        if (BMI>=18 && BMI<=25){
            printf ("berat badan ideal untuk wanita");
        }
        else printf ("badan tidak ideal");
        break;

        default:
        printf ("salah input angka");
        break;
        
     }
}