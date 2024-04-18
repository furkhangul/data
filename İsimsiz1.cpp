#include <stdio.h>
#include <locale.h>
#include <string.h>
#include <stdbool.h>  // bool, true, false için baþlýk dosyasý

void hosgeldin() {
    printf("Bilgi Yarýþmasýna Hoþ Geldiniz. Lütfen Kurallarý Okuyunuz!"
           "\n***Kurallarýmýz\n[1]Yarýþmamýz Puan Sistemlidir.\n[2] Oyun boyu 3 canýnýz vardýr.\n[3]Kullanýcý bilgilerinizi girip oyuna baþlayýn. Hesabýnýz yoksa yeni hesap açýnýz.");
}

void girisyap(char kullaniciAdi[], int sifre) {
    char giriskullanici[20];
    int girissifre;
    bool kontrol = false;  // bool türü için kontrol deðiþkeni
    printf("\nKullanýcý Adý:");
    scanf("%s", giriskullanici);
    printf("\nÞifreniz:");
    scanf("%d", &girissifre);
    
    while (kontrol==false) {
        if (strcmp(giriskullanici, kullaniciAdi) == 0 && girissifre == sifre) {
            printf("\nBaþarýlý Bir Þekilde Giriþ Yaptýnýz Oyun Ekranýna Yönlendiriliyorsunuz...");
            kontrol = true;
        } else {
        printf("\nBaþarýsýz Giriþ Lütfen Tekrar Deneyiniz...\n\n");
        printf("\nKullanýcý Adý:");
        scanf("%s", &giriskullanici);
        printf("\nÞifreniz:");
        scanf("%d", &girissifre);
        }
    }
}

void kayitol() {
    // Implement kayitol function if needed
}

int main() {
    char kullaniciAdi[20] = "furkan";
    int sifre = 123;

    int girissecenek;
    setlocale(LC_ALL, "Turkish");
    hosgeldin();
    printf("\n\n\n[1]Giriþ Yap\n[2]Kayýt Ol\nLütfen Birini Seçiniz: ");
    scanf("%d", &girissecenek);

    switch (girissecenek) {
        case 1: girisyap(kullaniciAdi, sifre); break;
        case 2: kayitol(); break;
        default: printf("Lütfen geçerli giriþ seçeneðini seçiniz ! ");
    }

    return 0;
}

