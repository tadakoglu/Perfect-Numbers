#include <stdio.h>
#include <conio.h>
void mukemmelsayilar(int aralik1, int aralik2);
void main()
{
	printf("Birinci sayiyi	gir :");
	int aralik1,aralik2,sum,miktar;
	aralik1=aralik2 = 0;
	scanf("%d", &aralik1);
	printf("Ýkinci sayiyi gir :");
	scanf("%d", &aralik2);
int i,n;
miktar =0;
printf("Mukemmel sayilar\n");
for(n=aralik1+1; n<aralik2; n++)
{
sum = 0;
for(i=1; i<n; i++)
if(n%i == 0)
sum = sum + i;
if (sum == n) {
printf("%d ",n);
miktar++;
}
}
printf("\nToplam mukemmel sayi : %d", miktar);
getch();
}
