#include <stdio.h>
#include<stdlib.h>
                 /*Bir Dizinin En K���k Eleman�n� Veren Fonksiyon Kodu*/
     //Eleman say�s�na N diyelim
   int enkucukeleman(int dizi[], int n) 
   {
   int mineleman = dizi[0]; //Bir kere �al���r
   int i;
    for (i = 1; i < n; i++) { //i=1 1 kere �al���r,i<n eleman say�s� kadar �al���r,i++ eleman say�s�n�n 1 eksi�i kadar �al���r.
        if (dizi[i] < mineleman) { //N-1 kere �al���r
            mineleman = dizi[i];
        }
    }
    return mineleman; // 1 kere �al���r
   }                 //T(N)=4N

  int main() 
  {
    int dizi[] = {3, 7, 2, 8, 1, 9, 4, 6, 5};
    int n = sizeof(dizi) / sizeof(dizi[0]);
    int enkucuk = enkucukeleman(dizi, n);
    printf(" Dizinin En kucuk elemani: %d\n", enkucuk);
    return 0;
  }

