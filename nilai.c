#include <stdio.h>

// deklarasi fungsi perhitungan untuk menghitung nilai gabungan uts dan uas
char perhitungan(int nilaiuts, int nilaiuas);

int main()
{
    // deklarasi variable uts dan uas
    int uts, uas;

    /**
     * mengambil nilai uts dan uas yang di input dengan keyboard
     * kemundian memasukannya kedalam variablenya masing masing
     */

    printf("Masukan Nilai UTS : ");
    scanf("%d", &uts);
    printf("\nMasukan UAS : ");
    scanf("%d", &uas);

    /**
     * memanggil fungsi perhitungan dengan parameter uts dan uas
     * kemudian memasukannya kedalam variabel nilai
     */
    char nilai = perhitungan(uts, uas);

    /**
     * kondisi if ini berguna untuk mengecek apakah nilai yang
     * dimasukan user bernilai negatif, jika bernilai negatif
     * grade tidak akan cetak dan akan muncul peringatan.
     *
     * pengecekan apakah nilai bernilai negatif dilakukan pada
     * fungsi perhitungan, fungsi akan mereturn 'M' jika nilai
     * negatif
     */
    if (nilai == 'M')
    {
        printf("Pastikan Nilai yang Dimasukan Tidak Negatif\n");
    }
    else
    {
        printf("\nNilai Akhir : Grade %c \n", nilai);
    }

    return 0;
}

/**
 * fungsi perhitungan, pada fungsi ini nilai uts dan uas 
 * akan dibuat nilai rata - ratanya, kemudian nilai tersebut 
 * akan dibuat range nya, grade A > 90, grade B 80 - 90,
 * grade C 70 - 80, grade D < 70. 
 * 
 * selain itu terdapat juga nilai M untuk menandakan apakah
 * nilai yang diinput bernilai negatif atau tidak
 */
char perhitungan(int nilaiuts, int nilaiuas)
{
    char nilaiAkhir;
    int nilaiTemp = (nilaiuts + nilaiuas) * 0.5;

    if (nilaiTemp >= 90)
    {
        nilaiAkhir = 'A';
    }
    else if (nilaiTemp >= 80 && nilaiTemp < 90)
    {
        nilaiAkhir = 'B';
    }
    else if (nilaiTemp >= 70 && nilaiTemp < 80)
    {
        nilaiAkhir = 'C';
    }
    else if (nilaiTemp > 0 && nilaiTemp < 70)
    {
        nilaiAkhir = 'D';
    }
    else if (nilaiTemp < 0)
    {
        nilaiAkhir = 'M';
    }

    return nilaiAkhir;
}