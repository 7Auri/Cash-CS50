#include <cs50.h>
#include <stdio.h>
#include <math.h>
int main(void)
{

float sayi = get_float("Para Miktarı Giriniz\n");
do{
if(sayi<0){
    sayi = get_float("Lütfen Doğru Bir Tutar Giriniz\n");
}
}while(sayi<0);

    int kurus = round(sayi * 100); 
    int sayac = 0; 
    
    while (kurus >= 25) 
    {
        kurus = kurus - 25;
        sayac++;
    }
  while (kurus >= 10) 
    {
        kurus = kurus - 10;
        sayac++;
    }
      while (kurus >= 5) 
    {
        kurus = kurus - 5;
        sayac++;
    }
  while (kurus >= 1) 
    {
        kurus = kurus - 1;
        sayac++;
    }
    printf("%i",sayac);
        printf("\n");
    
}
