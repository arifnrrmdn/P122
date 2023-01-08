#include<stdio.h>
#include<conio.h>
//deklarasi struct
struct tgl_lahir
{
 int tanggal;
 int bulan;
 int tahun;
} tgl;

struct data_karyawan
{
 char nama[20];
 char alamat[50];
 struct tgl_lahir tgl;
} karyawan;

main()
{
 clrscr();
 printf("Nama karyawan 		= ");
 gets(karyawan.nama); fflush(stdin);
 printf("Alamat			= ");
 gets(karyawan.alamat); fflush(stdin);
 printf("Tanggal lahir		= ");
 scanf("%d",&karyawan.tgl.tanggal);
 printf("Bulan lahir		= ");
 scanf("%d",&karyawan.tgl.bulan);
 printf("Tahun lahir		= ");
 scanf("%d",&karyawan.tgl.tahun);

 getch();
 return 0;
}