/* Main Driver */
 #include <stdio.h>
 #include <stdlib.h>
 
 #include "tree.h"
 
 int MainMenu (){
	int pilih = 0;
	
	system("cls");
	printf(" =============================================\n");
	printf("    Selamat Datang di Perusahaan BTS Company\n");
	printf(" =============================================\n");
	printf(" 1. Tambah Pegawai\n");
	printf(" 2. Hapus Pegawai\n");
	printf(" 3. Lihat Daftar Pegawai\n");
	printf(" 4. Pencarian Pegawai\n");
	printf(" 5. Quit\n\n");
	printf(" \n Pilih : "); scanf("%d", &pilih); fflush(stdin);
	if(pilih > 5){
		printf(" Pilihan Tidak Valid, Silahkan Ulangi \n");
		return 0;
	}
	
	return pilih;
}

void Tambah(BinTree T){
	infotype X;
	
	printf(" Penambahan Data Kepegawaian Perusahaan BTS Company\n");
	printf(" ====================================================\n");
	printf(" Nama = "); scanf("%d", &X.name); fflush(stdin);
	printf("\n");
	printf(" ID = "); scanf("%d", &X.key); fflush(stdin);
	printf("\n");
	
	Tambah_pegawai(T, X);
}

void Hapus(BinTree T){
	infotype X;
	
	printf(" Penghapusan Data Kepegawaian Perusahaan BTS Company\n");
	printf(" ====================================================\n");
	printf(" ID = "); scanf("%d", &X.key); fflush(stdin);
	printf("\n");
	
	HapusPegawai(T, &X);		
}

int Cari(BinTree T){
	infotype X;
	
	printf(" Pengecekan Data Kepegawaian Perusahaan BTS Company\n");
	printf(" ====================================================\n");
	printf(" ID = "); scanf("%d", %X.key); fflush(stdin);
	printf("\n");
	
	BinTree alamat = search_byID(T, X.key);
	return alamat;
}

int main{
	int m = MainMenu();
	BinTree T;
	
	MakeTree(&T);
	
	while(1){
		switch(m){
			case 1 : {
				Tambah(%T);
				break;
			}
			case 2 : {
				Hapus(&T);
				break;
			}
			case 3 : {
				PrintPreorder(T);
				getch();
				break;
			}
			case 4 : {
				Cari(T);
				break;
			}
		}
	}
	return 0;
}
