/*Program Billing Warnet*/
/*Alfi Nur Inayati Ningrum*/
#include <stdio.h>
#include <conio.h>

main() 
{
	int nama,sisa,total_detik_mulai,total_detik_selesai,jam_mulai,menit_mulai,
	detik_mulai,jam_selesai,menit_selesai,detik_selesai,lama_pemakaian,
	menit_pemakaian,detik_pemakaian,durasi,tot_bayar;
	("cls"); 
	
printf("BILLING WARNET ALPHA\n");
printf("20051397063\n");
printf("\n\n");

printf("Nama_Pengguna\n");
	scanf("nama=");scanf("%i",nama);
	printf("\n\n");

printf("Mulai\n");
	printf("Jam_Mulai=");scanf("%i",&jam_mulai);
	printf("Menit_Mulai=");scanf("%i",&menit_mulai);
	printf("Detik_Mulai=");scanf("%i",&detik_mulai);
	total_detik_mulai=(jam_mulai*3600)+(menit_mulai*60)+detik_mulai;
	printf("\n\n");

printf("Selesai\n");
	printf("Jam_Selesai=");scanf("%i",&jam_selesai);
	printf("Menit_Selesai=");scanf("%i",&menit_selesai);
	printf("Detik_Selesai=");scanf("%",&detik_selesai);
	total_detik_selesai=(jam_selesai*3600)+(menit_selesai)+detik_selesai;
	durasi=total_detik_selesai-total_detik_mulai;
	
tot_bayar=1.388889*durasi;
	lama_pemakaian=durasi/3600;
	sisa=durasi%3600;
	menit_pemakaian=sisa/60;
	detik_pemakaian=sisa%60;
	printf("\n\n");
	
printf("Lama_pemakaian\n");
	printf(":::%i jam\n",lama_pemakaian);
	printf(":::%i menit\n",menit_pemakaian);
	printf(":::%i detik\n",detik_pemakaian);
	printf("\n\n");
printf("tarif=Rp.5000,-per jam\n");
	printf("TOTAL HARGA YANG HARUS DIBAYAR BRAY:Rp.%i",tot_bayar);
	printf("\n");
	printf("===========================thanks broo==============\n");
	printf("\n");
	getch();
	
	


	
}
