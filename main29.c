#include <stdio.h>
#include<stdlib.h>
                 /*Bir Dizinin En Küçük Elemanýný Veren Fonksiyon Kodu*/
     //Eleman sayýsýna N diyelim
   int enkucukeleman(int dizi[], int n) 
   {
   int mineleman = dizi[0]; //Bir kere çalýþýr
   int i;
    for (i = 1; i < n; i++) { //i=1 1 kere çalýþýr,i<n eleman sayýsý kadar çalýþýr,i++ eleman sayýsýnýn 1 eksiði kadar çalýþýr.
        if (dizi[i] < mineleman) { //N-1 kere çalýþýr
            mineleman = dizi[i];
        }
    }
    return mineleman; // 1 kere çalýþýr
   }                 //T(N)=4N

  int main() 
  {
    int dizi[] = {3, 7, 2, 8, 1, 9, 4, 6, 5};
    int n = sizeof(dizi) / sizeof(dizi[0]);
    int enkucuk = enkucukeleman(dizi, n);
    printf(" Dizinin En kucuk elemani: %d\n", enkucuk);
    return 0;
  }

