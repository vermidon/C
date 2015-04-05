/*Hastanede Basit Bir Menü İle Yapılacakları Gösteren Program*/

#include<stdio.h>
int main()

{
	int secim;
	
	printf("\nDiş Hastalıkları İçin     :1\n");
	printf("İç Hastalıkları İçin      :2\n");
	printf("Kalp Hastalıkları İçin    :3\n");
	printf("Ortopedi İçin             :4\n");
	printf("Göz Hastalıkları İçin     :5\n\n");

	tekrar_5 : printf("Hoş Geldiniz Lütfen Gideceğiniz Bölümü Belirtin :");
	scanf("%d",&secim);

	if ( secim == 1 )
	{
		if ( secim >= 1 && secim <= 5 )
		{
			tekrar_1 :
			printf("\nDiş Bakımı İçin              :1\n");
			printf("Diş Beyazlatma İçin          :2\n");
			printf("Tartar İçin                  :3\n");
			printf("Ağız Kokusu Problemleri İçin :4\n");
			printf("Diş Eti Kanaması İçin        :5\n\n");
			
			printf("Lütfen Yaşadığınız Problemi Seçin : ");
			scanf("%d",&secim);
			
			switch ( secim )
				{
				case 1: printf("Diş Bakımı İçin 2.Kat 215-220 Numaralı Odalardan Birine Gidin.\n");          break;
				case 2: printf("Diş Beyazlatma Sadece Pazartesi Günleri Mevcuttur.\n");                      break;
				case 3: printf("Tartar İçin 3.Kat 305 Numaralı Odadan Randevu Alın.\n");                     break;
				case 4: printf("Ağız Kokusu Problemleri İçin 4.Kat 410 Numaralı Odaya Müracaat Edin.\n");    break;
				case 5: printf("Diş Eti Kanaması İçin 5.Kat Melek GÜVEN'e Başvurun.\n");                     break;
				default : printf("\n**********HATA : Lütfen 1-5 Arasında Bir Değer Giriniz!**********\n\n"); goto tekrar_1;
				}
		}
		else {}
	  
	}
	
	else if ( secim == 2 )
	{
		  if ( secim >= 1 && secim <= 6 )
		  {
			tekrar_2 :
			printf("\nMide Rahatsızlıkları İçin      :1\n");
			printf("Karaciğer Rahatsızlıkları İçin :2\n");
			printf("Böbrek Rahatsızlıkları İçin    :3\n");
			printf("Karın Ağrıları İçin            :4\n");
			printf("Bağırsak Rahatsızlıkları İçin  :5\n");
			printf("Solunum Yetmezliği İçin        :6\n\n");
			
			printf("Lütfen Rahatsızlığınızı Seçin : ");
			scanf("%d",&secim);
			
			switch ( secim )
				{
				case 1: printf("Mide Rahatsızlıkları İçin 1. Kat Danışmadan Randevu Alın.\n");                          break;
				case 2: printf("Karaciğer Rahatsızlıkları İçin 1.Kat 110 Numaralı Odaya Gidin.\n");                     break;
				case 3: printf("Böbrek Rahatsızlıkları İçin 1. Kat 140 Numaralı Odaya Gidin.\n");                       break;
				case 4: printf("Karın Ağrıları İçin 3. Kat Genel Cerrahi Bölümüne Başvurun.\n");                        break;
				case 5: printf("Bağırsak Rahatsızlıkları İçin 3. Kat 101 Numaralı Oda Dr. Osman HAMDİ İle Görüşün.\n"); break;
				case 6: printf("Solunum Rahatsızlıkları İçin 2. Kat 230 Numaralı Odaya Başvurun.\n");                   break;
				default : printf("\n**********HATA : Lütfen 1-6 Arasında Bir Değer Giriniz!**********\n\n");            goto tekrar_2;
				}
		  }
		  else {}
	}
	
	else if ( secim == 3 )
	{
		  if ( secim >= 1 && secim <= 6 )
		  {
			tekrar_3 :
			printf("\nKalp Ağrısı İçin                     :1\n");
			printf("Damar Tıkanıklığı İçin               :2\n");
			printf("Kalp Sağlığı İçin                    :3\n");
			printf("Kalp Damarları İçin                  :4\n");
			printf("Kalp Krizi Vakalarını Önelemek İçin  :5\n");
			printf("Gönül Yarası İçin                    :6\n\n");
			
			printf("Lütfen Rahatsızlığınızı Seçin : ");
			scanf("%d",&secim);
			
			switch ( secim )
				{
				case 1: printf("Kalp Ağrısı İçin 4. Kat 410 Numaralı Odaya Gidin.\n");                       break;
				case 2: printf("Damar Tıkanıklığı Sorunları İçin 4. Kat 415 Numaralı Odaya Gidin.\n");       break;
				case 3: printf("Daha Sağlıklı Bir Kalp İçin 4. Kat, Prf. Dr. Banu GÜNAYDIN İle Görüşün.\n"); break;
				case 4: printf("Kalp Damarları Sağlığı İçin 4.Kat 420 Numaralı Odaya Müracaat Edin.\n");     break;
				case 5: printf("Kalp Krizi Vakalarını Önlemek İçin 4. Kat Eğitim Odasına Başvurun.\n");      break;
				case 6: printf("O İşler İçin Müslüm GÜRSES'i Dinleyin.\n");                                  break;
				default : printf("\n**********HATA : Lütfen 1-6 Arasında Bir Değer Giriniz!**********\n\n"); goto tekrar_3;
				}
		  }
		  else {}
	}
	
	else if ( secim == 4 )
	{
		  if ( secim >= 1 && secim <= 4 )
		  {
			tekrar_4 :
			printf("\nKırık Çıkık İçin         :1\n");
			printf("Röntgen İçin             :2\n");
			printf("Estetik Cerrahi İçin     :3\n");
			printf("El Ayak Burkulması İçin  :4\n\n");
			
			printf("Lütfen Rahatsızlığınızı Seçin : ");
			scanf("%d",&secim);
			
			switch ( secim )
				{
				case 1: printf("Kırık Çıkık İçin 5. Kat Teşhis Odasına Gidin.\n");                                break;
				case 2: printf("Kırık ve Çıkık İçin Röntgen Çekmek İçin Zemin Kat 020 Numaralı Odaya Gidin.\n");  break;
				case 3: printf("Estetik Cerrahi Başvurusu İçin 5. Kat Est. Cerrah Hamdi YAMAK İle Görüşürün.\n"); break;
				case 4: printf("Hafif Vakalar İçin 5. Kat 510 Numaralı Odaya Müracaat Ediniz.\n");                break;
				default : printf("\n**********HATA : Lütfen 1-4 Arasında Bir Değer Giriniz!**********\n\n");      goto tekrar_4;
				}
		  }
		  else {}
	}
	
	else if ( secim == 5 )
	{
		printf("\nGöz Hastalıkları İçin İnternetten Randevu Almanız Gerekir.\n\n");
	}
	
	else
	{
		printf("\n**********HATA : Lütfen 1-5 Arasında Bir Değer Giriniz!**********\n\n"); goto tekrar_5;
	}
	
	return 0;
	
}
