#include<stdio.h>
#include<math.h>

int main()
{
    float a,b,n,h,x;
    float y[100],z[100],total[100];
    int i,j;
    printf("===================================\n");
    printf("\tMETODE TITIK TENGAH\n");
    printf("===================================\n\n");
    printf("Masukkan Batas Bawah (a) = ");
    scanf("%f",&a);
    printf("Masukkan Batas Atas (b) = ");
    scanf("%f",&b);
    printf("n = ");
    scanf("%f",&n);
    h=(b-a)/n;
    printf("\nh = %.5f\n",h);
    x = 1;
    total[0]=0;
    for(i=1;i<=n;i++)
    {
        y[i]=a+(x/2*h);
        z[i]=h*(pow(y[i],2));/*(2+cos(2*sqrt(x)));*/
        x=x+2;
        printf("\ny[%d] = %.5f\n",i,y[i]);
        printf("z[%d] = %.5f\n",i,z[i]);
        total[i]=total[i-1]+z[i];
        printf("total[%d] = %.5f\n\n",i,total[i]);
    }
}
