#include <stdio.h>

int main()
{
    //deklarasi variable
    int bulan, i;

    /**
     * for loop pertama untuk bulan 1 - 7
     * for loop dibagi menjadi dua karena 
     * bulan 7 dan 8 sama 31 satu hari dan 
     * bulan 9, 10, 11, 12. berkebalikan 
     * 30 dan 31 harinya 
     */
    for (i = 1; i <= 7; i++)
    {
        //karena februari berbeda maka dibuatkan if sendiri
        if (i == 2)
        {
            bulan = 28;
        }

        /**
         * if untuk bulan 1 - 7 jika bulan genap maka 
         * jumlah harinya 30, dan jika ganjil jumlah harinya 31
         * untuk mengetahui ganjil dan genap bulan, dilakukan operasi mod
         * jika hasil dari mod bulan 0 genap, jika mod bulan 1 ganjil
         */

        if (i != 2 && i % 2 == 0)
        {
            bulan = 30;
        }
        else if (i != 2 && i % 2 == 1)
        {
            bulan = 31;
        }
        //mencetak bulan 1 - 7 beserta jumlah hari
        printf("Jumlah hari pada bulan ke-%d adalah : %d\n", i, bulan);
    }

    //forloop kedua untuk bulan 8 - 12
    for (i = 8; i <= 12; i++)
    {
        /**
         * karena untuk bulan 8 sama dengan bulan 7, 31 hari, 
         * maka kondisi mod dari bulan di balik, sehingga bulan 
         * genap 31 hari dan bulan ganjil 30 hari
         */
        if (i % 2 == 0)
        {
            bulan = 31;
        }
        else if (i != 2 && i % 2 == 1)
        {
            bulan = 30;
        }
        //mencetak bulan 1 - 7 beserta jumlah hari
        printf("Jumlah hari pada bulan ke-%d adalah : %d\n", i, bulan);
    }

    return 0;
}