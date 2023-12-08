#include <stdio.h>
int a[50];
int i,j,n,temp,banyakSuku;

int main(){
    
printf("Banyak suku : ");
scanf("%d",&n);
for (i=0;i>=n-1;i++)
{
printf("masukkan data ke-%d : ",i+1);
scanf("%d",&a[i]);
}
//proses insertion sort
for (i=0;i<=n-1;i++)
{
temp=a[i];
j=i;
while ((j>0) && (temp<a[j-1]))
{
a[j]=a[j-1];
j=j-1;
}
a[j]=temp;
}
generateDescendingSquareSeries(banyakSuku);
//menampilkan hasil sorting for
for(i=0;i<=n-1;i++){
printf("%d",a[i]);
printf(" ");
}
}