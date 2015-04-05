/*Öğrencinin Not Ortalamasını Hesaplayan Program*/

#include<stdio.h>
int main()

{
	int vize,final;
	char isim[10],soyisim[15];
	float ortalama;

	printf("Öğrencinin Adını ve Soyadını Giriniz = ");
	scanf("%s%s",&isim,&soyisim);

	printf("%s %s Öğrencisinin Vize Notunu Giriniz = ",isim,soyisim);
	scanf("%d",&vize);

	printf("%s %s Öğrencinin Final Notunu Giriniz = ",isim,soyisim);
	scanf("%d",&final);

	ortalama = (float)( vize * 0.4 ) + (float)( final * 0.6 );

	if ( vize > 100 ) {
		printf("HATA\t%s %s Öğrencisi İçin Lütfen Geçerli Bir \"VİZE\" Not Değeri Giriniz!\n",isim,soyisim);
	}

	else if ( final > 100 ) {
		printf("HATA\t%s %s Öğrencisi İçin Lütfen Geçerli Bir \"FİNAL\" Not Değeri Giriniz!\n",isim,soyisim);
	}

	else if ( ortalama > 0 && ortalama <= 35 ) {
		printf("%s %s Öğrencisinin Not Ortalaması = %.0f :: 'FF'\n",isim,soyisim,ortalama);
	}

	else if ( ortalama > 35 && ortalama <= 54 ) {
		printf("%s %s Öğrencisinin Not Ortalaması = %.0f :: 'EE'\n",isim,soyisim,ortalama);
	}

	else if ( ortalama > 54 && ortalama <= 64 ) {
		printf("%s %s Öğrencisinin Not Ortalaması = %.0f :: 'DD'\n",isim,soyisim,ortalama);
	}

	else if( ortalama > 64 && ortalama <= 74 ) {
		printf("%s %s Öğrencisinin Not Ortalaması = %.0f :: 'CC'\n",isim,soyisim,ortalama);
	}

	else if( ortalama > 74 && ortalama <= 84 ) {
		printf("%s %s Öğrencisinin Not Ortalaması = %.0f :: 'BB'\n",isim,soyisim,ortalama);
	}

	else  {
		if ( ortalama > 84 &&  ortalama <= 100 ) {
			printf("%s %s Öğrencisinin Not Ortalaması = %.0f :: 'AA'\n",isim,soyisim,ortalama);
		}
	}
}
