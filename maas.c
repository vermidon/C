/*Çalışanların Aylık Maaşını ve Primlerini Hesaplayan Program. 
Kadın ve Erkeklerin Çıkardığı Ürünlerin Prim Değerleri Farklıdır.*/

#include<stdio.h>
int main()

{
	char x,isim[10],soyisim[15];
	int saat,ucret,urun,prim,net_maas,toplam;

	printf("Lütfen Cinsiyenizi Seçiniz [E-e/K-k] : ");
	scanf("%c",&x);

	//Çalışan Erkek İse Aşağıdaki "if" Bloğu Çalışacak
	if ( x == 'E' || x == 'e' ) {
		printf("Lütfen Adınızı ve Soyadınızı Giriniz : ");
		scanf("%s%s",&isim,&soyisim);
		
		printf("Lütfen Bu Ay Kaç Saat Çalıştığınızı Giriniz : ");
		scanf("%d",&saat);
		printf("Lütfen Saat Başı Çalıştığınız Ücreti Giriniz : ");
		scanf("%d",&ucret);
		net_maas = saat * ucret; //Çalışanın Net Üvreti Belirlenir.
		printf("\nBu Ayki Net Maaşınız : %d TL\n\n",net_maas);
		
		printf("Lütfen 1 Ay İçinde Ekstradan Ne Kadar Ürün Çıkardığınızı Giriniz : ");
                scanf("%d",&urun);

		if ( urun > 0 && urun <= 10 ) {
			prim = 5 * urun;
			printf("Bu Ayki Priminiz : %d TL\n",prim);
		}

		else if ( urun > 10 && urun <= 20 ) {
			prim = 10 * urun;
                	printf("Bu Ayki Priminiz : %d TL\n",prim);
		}
		
		else if ( urun > 20 && urun <= 30 ) {
			prim = 15 * urun;
			printf("Bu Ayki Priminiz : %d TL\n",prim);
		}

		/*Sisteme Negatif Bir Sayı Girildiğinde veya 
		1 ile 30 Arasında Bir Değer Girilmediğinde Aşaıdaki "else" Bloğu Çalışarak Programın 
		"HATA" Mesajı Vererek Kapanmasını Sağlayacaktır.
		Ayrıca  Net Maaşıda Toplam Maaş Olarak Gösterecektir.*/
		else {
			printf("\nHATA : 1-30 Arasında Bir Değer Giriniz!\n\n");
		}

		toplam = net_maas + prim; //Çalışanın Toplam Ücreti Belirlenir.
		printf("\nSayın %s %s Bu Ayki Toplam Maaşınız : %d TL\n\n",isim,soyisim,toplam);
	}

	//Çalışan Kadın İse Aşağıdaki "else if" Bloğu Çalışacak.
	else if ( x == 'K' || x == 'k' ) {
		printf("Lütfen Adınızı ve Soyadınızı Giriniz : ");
                scanf("%s%s",&isim,&soyisim);
                printf("Lütfen Bu Ay Kaç Saat Çalıştığınızı Giriniz : ");
                scanf("%d",&saat);
                printf("Lütfen Saat Başı Çalıştığınız Ücreti Giriniz : ");
                scanf("%d",&ucret);
                net_maas = saat * ucret; //Çalışanın Net Ücreti Belirlenir.
                printf("\nBu Ayki Net Maaşınız : %d TL\n\n",net_maas);
                printf("Lütfen 1 Ay İçinde Ekstradan Ne Kadar Ürün Çıkardığınızı Giriniz : ");
                scanf("%d",&urun);

                if ( urun > 0 && urun <= 10 ) {
                        prim = 10 * urun;
                        printf("Bu Ayki Priminiz : %d TL\n",prim);
                }
                
                else if ( urun > 10 && urun <= 20 ) {       
                        prim = 20 * urun;
                        printf("Bu Ayki Priminiz : %d TL\n",prim);
                }
                
                else if ( urun > 20 && urun <= 30 ) {       
                        prim = 30 * urun;
                        printf("Bu Ayki Priminiz : %d TL\n",prim);
                }
                
                /*Sisteme Negatif Bir Sayı Girildiğinde veya 
		1 ile 30 Arasında Bir Değer Girilmediğinde Aşaıdaki "else" Bloğu Çalışarak Programın 
		"HATA" Mesajı Vererek Kapanmasını Sağlayacaktır.
		Ayrıca  Net Maaşıda Toplam Maaş Olarak Gösterecektir.*/
                else {
                        printf("\nHATA : 1-30 Arasında Bir Değer Giriniz!\n\n");
                }
                
                toplam = net_maas + prim; //Çalışanın Toplam Ücreti Belirlenir.
                printf("\nSayın %s %s Bu Ayki Toplam Maaşınız : %d TL\n\n",isim,soyisim,toplam);
	}

	else {
		printf("\nHATA : Lütfen Cinseyetinizi Seçiniz!\n\n");
	}
}