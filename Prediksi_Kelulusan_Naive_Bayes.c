#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>

/*----------------------------------< PEMISAH LUAR >-----------------------------------------*/

//DEKLARASI VOID
void splashscreen();
void menuutama();
void data();
void training();
void probabilitas();
void testing();

/*----------------------------------< PEMISAH LUAR >-----------------------------------------*/

//PEMROSESAN UTAMA
int main(){
	system("color B");	
	splashscreen();
	menuutama();
	return 0;
}

/*----------------------------------< PEMISAH LUAR >-----------------------------------------*/

//SPLASHSCREEN
void splashscreen(){
	printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t      ____________________________________________\n");
	printf("\t\t\t\t\t\t\t     |             STATISTIKA KOMPUTASI           |\n");
	printf("\t\t\t\t\t\t\t     |        -Prediksi Kelulusan Naive Bayes-    |\n");
	printf("\t\t\t\t\t\t\t     |____________________________________________|\n");
	printf("\t\t\t\t\t\t\t     |         Nama : Devan Cakra Mudra Wijaya    |\n");
	printf("\t\t\t\t\t\t\t     |____________________________________________|\n\n");
	printf("\n\t\t\t\t\t\t\t          Tekan [ENTER] untuk memulai program!!!");
	getch();
	system("cls");
}

/*----------------------------------< PEMISAH LUAR >-----------------------------------------*/

//MENU UTAMA
void menuutama(){	
	system("cls");
	int pilihan;
	printf("\n\t __________________________________________");
	printf("\n\t|                 MENU UTAMA               |");    
	printf("\n\t|__________________________________________|"); 
	printf("\n\t|  1. Tampilkan Data Training              |");
	printf("\n\t|  2. Tampilkan Data Probabilitas          |");
	printf("\n\t|  3. Masukkan Data Testing                |");
	printf("\n\t|  4. Keluar                               |");
	printf("\n\t|__________________________________________|");
	printf("\n\t Masukkan pilihan menu = ");
	scanf("%d", &pilihan);
	system("cls");
	
	/*++++++++++++++++++++++++++++++++++++++++[ PEMISAH DALAM ]++++++++++++++++++++++++++++++++++++++++*/
	
	switch(pilihan){
		case 1 :
		{
			system("cls");
			training();
			getch();
			system("cls");
			menuutama();
			break;
		}/*++++++++++++++++++++++++++++++++++++++++[ PEMISAH DALAM ]++++++++++++++++++++++++++++++++++++++++*/
		case 2 :
		{
			system("cls");
			probabilitas();
			getch();
			system("cls");
			menuutama();
			break;
		}/*++++++++++++++++++++++++++++++++++++++++[ PEMISAH DALAM ]++++++++++++++++++++++++++++++++++++++++*/
		case 3 :
		{
			system("cls");
			testing();
			break;
		}/*++++++++++++++++++++++++++++++++++++++++[ PEMISAH DALAM ]++++++++++++++++++++++++++++++++++++++++*/
		case 4 :
		{
			printf("\n\t\t\t\t\t     +=============================================================================+");
			printf("\n\t\t\t\t\t     |  Terimakasih telah menggunakan Aplikasi Prediksi Kelulusan Naive Bayes....  |");
			printf("\n\t\t\t\t\t     +=============================================================================+\n\n\n");
			getch();
			exit(0);
			break;
		}/*++++++++++++++++++++++++++++++++++++++++[ PEMISAH DALAM ]++++++++++++++++++++++++++++++++++++++++*/
		default :
		{
			printf("\n\n[Keterangan] :");
			printf("\n ______________________________________________________ ");
			printf("\n| Pilihan menu tidak ditemukan...                      |");
			printf("\n|______________________________________________________| ");
			getch();
			system("cls");
			menuutama();
			break;	
		}
	}
}

/*----------------------------------< PEMISAH LUAR >-----------------------------------------*/

//DATA TRAINING
void training(){
	int i;		
	system("cls");
	printf("\n+==========================================================================================================================================================================+");
	printf("|                                                                                DATA TRAINING                                                                             |");
	printf("+==========================================================================================================================================================================+");
	
	printf("\n\n+====+==============+===============+================+====================+");
	printf("\n| JK |   PERILAKU   |     RAPORT    |       UAS      |     KETERANGAN     |");
	printf("\n+====+==============+===============+================+====================+");
	printf("\n|  L |     BAIK     |     TINGGI    |      SEDANG    |        LULUS       |");
	printf("\n|  L |     BAIK     |     TINGGI    |      SEDANG    |        LULUS       |");
	printf("\n|  L |     BAIK     |     TINGGI    |      SEDANG    |        LULUS       |");
	printf("\n|  L |     CUKUP    |     TINGGI    |      KURANG    |     TIDAK LULUS    |");
	printf("\n|  P |     BAIK     |     TINGGI    |      SEDANG    |        LULUS       |");
	printf("\n|  L |     BAIK     |     TINGGI    |      SEDANG    |        LULUS       |");
	printf("\n|  P |     BAIK     |     TINGGI    |      SEDANG    |        LULUS       |");
	printf("\n|  L |     BAIK     |     TINGGI    |      SEDANG    |        LULUS       |");
	printf("\n|  L |     CUKUP    |     TINGGI    |      KURANG    |     TIDAK LULUS    |");
	printf("\n|  L |     BAIK     |     TINGGI    |      SEDANG    |        LULUS       |");
	printf("\n|  P |     BAIK     |     TINGGI    |      SEDANG    |        LULUS       |");
	printf("\n|  L |     BAIK     |     TINGGI    |      SEDANG    |        LULUS       |");
	printf("\n|  P |     BAIK     |     TINGGI    |      SEDANG    |        LULUS       |");
	printf("\n|  P |     BAIK     |     TINGGI    |      SEDANG    |        LULUS       |");
	printf("\n|  L |     BAIK     |     TINGGI    |      SEDANG    |        LULUS       |");
	printf("\n|  P |     BAIK     |     TINGGI    |      SEDANG    |        LULUS       |");
	printf("\n|  P |     BAIK     |     TINGGI    |      SEDANG    |        LULUS       |");
	printf("\n|  L |     BAIK     |     TINGGI    |      SEDANG    |        LULUS       |");
	printf("\n|  L |     BAIK     |     TINGGI    |      SEDANG    |        LULUS       |");
	printf("\n|  L |     BAIK     |     TINGGI    |      SEDANG    |        LULUS       |");
	printf("\n|  P |     BAIK     |     TINGGI    |      SEDANG    |        LULUS       |");
	printf("\n|  P |     BAIK     |     TINGGI    |      SEDANG    |        LULUS       |");
	printf("\n|  L |     BAIK     |     TINGGI    |      SEDANG    |        LULUS       |");
	printf("\n|  P |     BAIK     |     TINGGI    |      SEDANG    |        LULUS       |");
	printf("\n|  L |     BAIK     |     TINGGI    |      SEDANG    |        LULUS       |");	
	printf("\n+====+==============+===============+================+====================+");
	
	printf("\n\n[Keterangan] :");
	printf("\n ____________________________________________________ ");
	printf("\n| Data training berhasil ditampilkan.....            |");
	printf("\n|____________________________________________________|");
}
		
/*----------------------------------< PEMISAH LUAR >-----------------------------------------*/

//VARIABEL GLOBAL
float jumlahlulus=0;
float jumlahtidaklulus=0;
float jumlahdata=0;
float jumlahjk[2][2]={{0,0},{0,0}};
float perilaku[2][2]={{0,0},{0,0}};
float raport[1][2]={0,0};
float uas[2][2]={{0,0},{0,0}};
int n=1;

/*----------------------------------< PEMISAH LUAR >-----------------------------------------*/

void data(){
	int i,j;
	if(i<n){
		char konten[25][5][25]={{"L","BAIK","TINGGI","SEDANG","LULUS"},{"L","BAIK","TINGGI","SEDANG","LULUS"},{"L","BAIK","TINGGI","SEDANG","LULUS"},
								{"L","CUKUP","TINGGI","KURANG","TIDAK LULUS"},{"P","BAIK","TINGGI","SEDANG","LULUS"},{"L","BAIK","TINGGI","SEDANG","LULUS"},
								{"P","BAIK","TINGGI","SEDANG","LULUS"},{"L","BAIK","TINGGI","SEDANG","LULUS"},{"L","CUKUP","TINGGI","KURANG","TIDAK LULUS"},
								{"L","BAIK","TINGGI","SEDANG","LULUS"},{"P","BAIK","TINGGI","SEDANG","LULUS"},{"L","BAIK","TINGGI","SEDANG","LULUS"},
								{"P","BAIK","TINGGI","SEDANG","LULUS"},{"P","BAIK","TINGGI","SEDANG","LULUS"},{"L","BAIK","TINGGI","SEDANG","LULUS"},
								{"P","BAIK","TINGGI","SEDANG","LULUS"},{"P","BAIK","TINGGI","SEDANG","LULUS"},{"L","BAIK","TINGGI","SEDANG","LULUS"},
								{"L","BAIK","TINGGI","SEDANG","LULUS"},{"L","BAIK","TINGGI","SEDANG","LULUS"},{"P","BAIK","TINGGI","SEDANG","LULUS"},
								{"P","BAIK","TINGGI","SEDANG","LULUS"},{"L","BAIK","TINGGI","SEDANG","LULUS"},{"P","BAIK","TINGGI","SEDANG","LULUS"},
								{"L","BAIK","TINGGI","SEDANG","LULUS"}};
		char kriteriaa[5][25]={"JK","PERILAKU","RAPORT","UAS","KETERANGAN"};
		char kelkriteria[6][5][25]={{"L","P"},{"BAIK","CUKUP"},{"TINGGI"},{"SEDANG","KURANG"},{"LULUS","TIDAK LULUS"}};
		for(i=0;i<25;i++){
			jumlahdata++;
			for(j=0;j<5;j++){
				if(strncmp(konten[i][j],kelkriteria[0][0],24)==0 && strncmp(konten[i][4],kelkriteria[4][0],24)==0){
					jumlahjk[0][0]++;
				}
				else if(strncmp(konten[i][j],kelkriteria[0][0],24)==0 && strncmp(konten[i][4],kelkriteria[4][1],24)==0){
					jumlahjk[0][1]++;
				}
				/*++++++++++++++++++++++++++++++++++++++++[ PEMISAH DALAM ]++++++++++++++++++++++++++++++++++++++++*/
				if(strncmp(konten[i][j],kelkriteria[0][1],24)==0 && strncmp(konten[i][4],kelkriteria[4][0],24)==0){
					jumlahjk[1][0]++;
				}
				else if(strncmp(konten[i][j],kelkriteria[0][1],24)==0 && strncmp(konten[i][4],kelkriteria[4][1],24)==0){
					jumlahjk[1][1]++;
				}
				/*++++++++++++++++++++++++++++++++++++++++[ PEMISAH DALAM ]++++++++++++++++++++++++++++++++++++++++*/
				if(strncmp(konten[i][j],kelkriteria[1][0],24)==0 && strncmp(konten[i][4],kelkriteria[4][0],24)==0){
					perilaku[0][0]++;
				}
				else if(strncmp(konten[i][j],kelkriteria[1][0],24)==0 && strncmp(konten[i][4],kelkriteria[4][1],24)==0){
					perilaku[0][1]++;
				}
				/*++++++++++++++++++++++++++++++++++++++++[ PEMISAH DALAM ]++++++++++++++++++++++++++++++++++++++++*/
				if(strncmp(konten[i][j],kelkriteria[1][1],24)==0 && strncmp(konten[i][4],kelkriteria[4][0],24)==0){
					perilaku[1][0]++;
				}
				else if(strncmp(konten[i][j],kelkriteria[1][1],24)==0 && strncmp(konten[i][4],kelkriteria[4][1],24)==0){
					perilaku[1][1]++;
				}
				/*++++++++++++++++++++++++++++++++++++++++[ PEMISAH DALAM ]++++++++++++++++++++++++++++++++++++++++*/
				if(strncmp(konten[i][j],kelkriteria[2][0],24)==0 && strncmp(konten[i][4],kelkriteria[4][0],24)==0){
					raport[0][0]++;
				}
				else if(strncmp(konten[i][j],kelkriteria[2][1],24)==0 && strncmp(konten[i][4],kelkriteria[4][1],24)==0){
					raport[0][1]++;
				}
				/*++++++++++++++++++++++++++++++++++++++++[ PEMISAH DALAM ]++++++++++++++++++++++++++++++++++++++++*/
				if(strncmp(konten[i][j],kelkriteria[3][0],24)==0 && strncmp(konten[i][4],kelkriteria[4][0],24)==0){
					uas[0][0]++;
				}
				else if(strncmp(konten[i][j],kelkriteria[3][0],24)==0 && strncmp(konten[i][4],kelkriteria[4][1],24)==0){
					uas[0][1]++;
				}
				/*++++++++++++++++++++++++++++++++++++++++[ PEMISAH DALAM ]++++++++++++++++++++++++++++++++++++++++*/
				if(strncmp(konten[i][j],kelkriteria[3][1],24)==0 && strncmp(konten[i][4],kelkriteria[4][0],24)==0){
					uas[1][0]++;
				}
				else if(strncmp(konten[i][j],kelkriteria[3][1],24)==0 && strncmp(konten[i][4],kelkriteria[4][1],24)==0){
					uas[1][1]++;
				}			
				/*++++++++++++++++++++++++++++++++++++++++[ PEMISAH DALAM ]++++++++++++++++++++++++++++++++++++++++*/
				if(strncmp(konten[i][j],kelkriteria[4][0],24)==0){
					jumlahlulus++;
				}
				else if(strncmp(konten[i][j],kelkriteria[4][1],24)==0){
					jumlahtidaklulus++;
				}			
			}
		}
		n--;
	}
}

/*----------------------------------< PEMISAH LUAR >-----------------------------------------*/

void probabilitas(){
	data();
	printf("\n+==========================================================================================================================================================================+");
	printf("|                                                                               PROBABILITAS                                                                               |");
	printf("+==========================================================================================================================================================================+");
	printf("\n\n<------------------------------------------------------------------->");
	printf("\n PERHITUNGAN VARIABEL YANG LULUS");
	printf("\n<------------------------------------------------------------------->");
	printf("\n\nP(Ket=Lulus)			= %1.f / %1.f	= %f",jumlahlulus,jumlahdata,jumlahlulus/jumlahdata);
	printf("\nP(JK=Laki-Laki|Ket=Lulus)	= %1.f / %1.f	= %f",jumlahjk[0][0],jumlahlulus,jumlahjk[0][0]/jumlahlulus);
	printf("\nP(JK=Perempuan|Ket=Lulus)	= %1.f / %1.f	= %f",jumlahjk[1][0],jumlahlulus,jumlahjk[1][0]/jumlahlulus);
	printf("\nP(Perilaku=BAIK|Ket=Lulus)	= %1.f / %1.f	= %f",perilaku[0][0],jumlahlulus,perilaku[0][0]/jumlahlulus);
	printf("\nP(Perilaku=CUKUP|Ket=Lulus)	= %1.f / %1.f	= %f",perilaku[1][0],jumlahlulus,perilaku[1][0]/jumlahlulus);
	printf("\nP(Rata Raport=TINGGI|Ket=Lulus)	= %1.f / %1.f	= %f",raport[0][0],jumlahlulus,raport[0][0]/jumlahlulus);
	printf("\nP(Rata UAS=SEDANG|Ket=Lulus)	= %1.f / %1.f	= %f",uas[0][0],jumlahlulus,uas[0][0]/jumlahlulus);
	printf("\nP(Rata UAS=KURANG|Ket=Lulus)	= %1.f / %1.f	= %f",uas[1][0],jumlahlulus,uas[1][0]/jumlahlulus);
	/*++++++++++++++++++++++++++++++++++++++++[ PEMISAH DALAM ]++++++++++++++++++++++++++++++++++++++++*/
	printf("\n\n\n<------------------------------------------------------------------->");
	printf("\n PERHITUNGAN VARIABEL YANG TIDAK LULUS");
	printf("\n<------------------------------------------------------------------->");
	printf("\n\nP(Ket=Tidak Lulus)			= %1.f / %1.f	= %f",jumlahtidaklulus,jumlahdata,jumlahtidaklulus/jumlahdata);
	printf("\nP(JK=Laki-Laki|Ket=Tidak Lulus)		= %1.f / %1.f		= %f",jumlahjk[0][1],jumlahtidaklulus,jumlahjk[0][1]/jumlahtidaklulus);
	printf("\nP(JK=Perempuan|Ket=Tidak Lulus)		= %1.f / %1.f		= %f",jumlahjk[1][1],jumlahtidaklulus,jumlahjk[1][1]/jumlahtidaklulus);
	printf("\nP(Perilaku=BAIK|Ket=Tidak Lulus)	= %1.f / %1.f		= %f",perilaku[0][1],jumlahtidaklulus,perilaku[0][1]/jumlahtidaklulus);
	printf("\nP(Perilaku=CUKUP|Ket=Tidak Lulus)	= %1.f / %1.f		= %f",perilaku[1][1],jumlahtidaklulus,perilaku[1][1]/jumlahtidaklulus);
	printf("\nP(Rata Raport=TINGGI|Ket=Tidak Lulus)	= %1.f / %1.f		= %f",raport[0][1],jumlahtidaklulus,raport[0][1]/jumlahtidaklulus);
	printf("\nP(Rata UAS=SEDANG|Ket=Tidak Lulus)	= %1.f / %1.f		= %f",uas[0][1],jumlahtidaklulus,uas[0][1]/jumlahtidaklulus);
	printf("\nP(Rata UAS=KURANG|Ket=Tidak Lulus)	= %1.f / %1.f		= %f",uas[1][1],jumlahtidaklulus,uas[1][1]/jumlahtidaklulus);
	/*++++++++++++++++++++++++++++++++++++++++[ PEMISAH DALAM ]++++++++++++++++++++++++++++++++++++++++*/
	printf("\n\n\n[Keterangan] :");
	printf("\n ____________________________________________________ ");
	printf("\n| Probabilitas berhasil ditampilkan.....             |");
	printf("\n|____________________________________________________|");
}

/*----------------------------------< PEMISAH LUAR >-----------------------------------------*/

void testing(){
	data();
	system("cls");
	printf("\n+==========================================================================================================================================================================+");
	printf("|                                                                                DATA TESTING                                                                              |");
	printf("+==========================================================================================================================================================================+");
	int i,j,k,l,jeniskelamin,k_perilaku,k_raport,k_uas;
	float lulus,tidaklulus;
	/*++++++++++++++++++++++++++++++++++++++++[ PEMISAH DALAM ]++++++++++++++++++++++++++++++++++++++++*/
	printf("\n\n Masukkan Jenis Kelamin (0.Laki-Laki/1.Perempuan)	: ");scanf("%d",&jeniskelamin);fflush(stdin);
	if(jeniskelamin==0 || jeniskelamin==1){
		goto lanjut_perilaku;
	}
	else{
		printf("\n\n[Keterangan] :");
		printf("\n ____________________________________________________ ");
		printf("\n| Pilihan tidak tersedia, silahkan ulangi lagi...    |");
		printf("\n|____________________________________________________|");
		getch();
		testing();
	}
	/*++++++++++++++++++++++++++++++++++++++++[ PEMISAH DALAM ]++++++++++++++++++++++++++++++++++++++++*/
	lanjut_perilaku :
	printf(" Masukkan Kategori Perilaku (0.Baik/1.Cukup)		: ");scanf("%d",&k_perilaku);fflush(stdin);
	if(k_perilaku==0 || k_perilaku==1){
		goto lanjut_raport;
	}
	else{
		printf("\n\n[Keterangan] :");
		printf("\n ____________________________________________________ ");
		printf("\n| Pilihan tidak tersedia, silahkan ulangi lagi...    |");
		printf("\n|____________________________________________________|");
		getch();
		testing();
	}
	/*++++++++++++++++++++++++++++++++++++++++[ PEMISAH DALAM ]++++++++++++++++++++++++++++++++++++++++*/
	lanjut_raport :
	printf(" Masukkan Kategori Rata Raport (0.Tinggi)		: ");scanf("%d",&k_raport);fflush(stdin);
	if(k_raport==0){
		goto lanjut_uas;
	}
	else{
		printf("\n\n[Keterangan] :");
		printf("\n ____________________________________________________ ");
		printf("\n| Pilihan tidak tersedia, silahkan ulangi lagi...    |");
		printf("\n|____________________________________________________|");
		getch();
		testing();
	}
	/*++++++++++++++++++++++++++++++++++++++++[ PEMISAH DALAM ]++++++++++++++++++++++++++++++++++++++++*/
	lanjut_uas :
	printf(" Masukkan Kategori Rata UAS (0.Sedang/1.Kurang)		: ");scanf("%d",&k_uas);fflush(stdin);
	if(k_uas==0 || k_uas==1){
		goto lanjut_hasil;
	}
	else{
		printf("\n\n[Keterangan] :");
		printf("\n ____________________________________________________ ");
		printf("\n| Pilihan tidak tersedia, silahkan ulangi lagi...    |");
		printf("\n|____________________________________________________|");
		getch();
		testing();
	}
	/*++++++++++++++++++++++++++++++++++++++++[ PEMISAH DALAM ]++++++++++++++++++++++++++++++++++++++++*/
	lanjut_hasil:							
	for(i=0;i<2;i++){
		if(jeniskelamin==i){
			for(j=0;j<2;j++){
				if(k_perilaku==j){
					for(k=0;k<1;k++){
						if(k_raport==k){
							for(l=0;l<2;l++){
								if(k_uas==l){						
									lulus=0;
									lulus=((((jumlahjk[i][0])*(perilaku[j][0])*(raport[k][0])*(uas[l][0]))/(pow(jumlahlulus,4))));
									printf("\n\n\n<------------------------------------------------------------------->");
									printf("\n Hasil Perhitungan Kali Probabilitas :");
									printf("\n<------------------------------------------------------------------->");
									printf("\n >> Probabilitas Lulus 		= %f",lulus);	
									
									tidaklulus=0;
									tidaklulus=((((jumlahjk[i][1])*(perilaku[j][1])*(raport[k][1])*(uas[l][1]))/(pow(jumlahtidaklulus,4))));
									printf("\n >> Probabilitas Tidak Lulus	= %f",tidaklulus);
									
									printf("\n\n\n<------------------------------------------------------------------->");
									printf("\n Hasil Prediksi :");
									printf("\n<------------------------------------------------------------------->");
									if(tidaklulus<lulus){
										printf("\n >> Ditetapkan [LULUS] Dengan Probabilitas = %f",lulus);
										break;
									}
									else{
										printf("\n >> Ditetapkan [TIDAK LULUS] Dengan Probabilitas = %f",tidaklulus);
										break;
									}
								}
							}
						}
					}
				}
			}
		}
	}
	/*++++++++++++++++++++++++++++++++++++++++[ PEMISAH DALAM ]++++++++++++++++++++++++++++++++++++++++*/
	printf("\n\n\n[Keterangan] :");
	printf("\n ____________________________________________________ ");
	printf("\n| Data testing berhasil diujikan.....                |");
	printf("\n|____________________________________________________|");
	getch();
	system("cls");
	menuutama();
}
//Copyright (C) Prediksi Kelulusan Naive Bayes by Devan All Rights Reserved
