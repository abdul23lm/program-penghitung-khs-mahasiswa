/*===Tugas UAS Membuat Program Penghitung Kartu Hasil Studi Mahasiswa===

     Nama       	: Abdul Latif Munjiat
     NPM        	: 1610631170004
     Semester   	: 2'A (Genap) Angkatan 2016
     Prodi      	: Teknik Informatika
     Fakultas   :	 Ilmu Komputer
      	Universitas Singaperbangsa Karawang */



#include <stdio.h>
#include <conio.h>

main(){
  struct{
   char MK[10];
   float SKS;
  float nilai_akhir;
  float skor;
      float NAS;
 }nilai[10];
 printf("=======================================================================================================================\n");
    printf ("\n\t\t\t\tSelamat datang di Program Penghitung Kartu Hasil Studi Mahasiswa\n");
    printf ("\t\t\t\t\t  Program By Abdul Latif Munjiat (1610631170004)\n\n");
    printf ("\t\t\t\tKelas 2'A 2016 | Studi Teknik Informatika | Fakultas Ilmu Komputer\n");
    printf ("\t\t\t\t\t     Universitas Singaperbangsa Karawang\n");
     printf("=======================================================================================================================\n\n");
 struct{
   float SKS;
  float NAS;
  float IP;
 }total;

 int i, n;

 //jumlah matakuliah
 printf("Masukkan jumlah mata kuliah : "); scanf("%d", &n);

 //input atribut KHS sesuai dengan jumlah matakuliah
 for(i=1; i<=n; i++){
   printf("Mata Kuliah ke-%d\n", i);
  printf("Nama matakuliah : "); scanf("%s", nilai[i].MK);
       printf("Jumlah SKS      : "); scanf("%f", &nilai[i].SKS);
  printf("Nilai akhir     : "); scanf("%f", &nilai[i].nilai_akhir);
      printf("\n");
 }


 printf("\n");
   printf("                       KARTU HASIL STUDY\n");
 printf("---------------------------------------------------------------\n");
   printf("No    Matakuliah      SKS     Nilai Akhir     Skor     SKS*Skor\n");
 printf("---------------------------------------------------------------\n");


   for(i=1; i<=n; i++){
   if(nilai[i].nilai_akhir>=85 && nilai[i].nilai_akhir<=100){
          nilai[i].skor = 4;
  }
          else if(nilai[i].nilai_akhir>=70 && nilai[i].nilai_akhir<=84.99){
             nilai[i].skor = 3;
   }
             else if(nilai[i].nilai_akhir>=55 && nilai[i].nilai_akhir<=69.99){
                nilai[i].skor = 2;
    }
                else if(nilai[i].nilai_akhir>=40 && nilai[i].nilai_akhir<=54.99){
                   nilai[i].skor = 1;
     }
                   else if(nilai[i].nilai_akhir>=0 && nilai[i].nilai_akhir<=39.99){
                      nilai[i].skor = 0;
      }
                         else{
                            nilai[i].skor = 0;
        }

      nilai[i].NAS = nilai[i].SKS*nilai[i].skor;
   printf("%2d %15s %5.0f %11.0f %12.1f %10.1f\n", i, nilai[i].MK, nilai[i].SKS, nilai[i].nilai_akhir, nilai[i].skor, nilai[i].NAS);


  total.SKS = total.SKS+nilai[i].SKS;
      total.NAS = total.NAS+nilai[i].NAS;

 }
   printf("---------------------------------------------------------------\n");
   printf("Total Skor =                                            %0.2f\n", total.NAS);
   printf("Total SKS  =                                            %0.2f\n", total.SKS);


   //mengitung ip
   total.IP = total.NAS/total.SKS;
   printf("IP         =                                            %0.2f\n", total.IP);
   printf("---------------------------------------------------------------\n");

   getch();
}
