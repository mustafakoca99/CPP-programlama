#include <stdio.h>
int main()
{
int sayi;
printf("dereceyi gir: ",sayi);
scanf("%d",&sayi);
if(sayi<0)
{
	printf("soguk",sayi);
}
//ve işareti kullanılacak dikkat edilmesi gereken yer 
else if(sayi>0 || sayi<15)
{
	printf("ilik",sayi);
}
else
{
	printf("sicak",sayi);
}
}
