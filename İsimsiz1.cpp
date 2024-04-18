#include <stdio.h>
#include <locale.h>
#include <string.h>
#include <stdbool.h>  // bool, true, false i�in ba�l�k dosyas�

void hosgeldin() {
    printf("Bilgi Yar��mas�na Ho� Geldiniz. L�tfen Kurallar� Okuyunuz!"
           "\n***Kurallar�m�z\n[1]Yar��mam�z Puan Sistemlidir.\n[2] Oyun boyu 3 can�n�z vard�r.\n[3]Kullan�c� bilgilerinizi girip oyuna ba�lay�n. Hesab�n�z yoksa yeni hesap a��n�z.");
}

void girisyap(char kullaniciAdi[], int sifre) {
    char giriskullanici[20];
    int girissifre;
    bool kontrol = false;  // bool t�r� i�in kontrol de�i�keni
    printf("\nKullan�c� Ad�:");
    scanf("%s", giriskullanici);
    printf("\n�ifreniz:");
    scanf("%d", &girissifre);
    
    while (kontrol==false) {
        if (strcmp(giriskullanici, kullaniciAdi) == 0 && girissifre == sifre) {
            printf("\nBa�ar�l� Bir �ekilde Giri� Yapt�n�z Oyun Ekran�na Y�nlendiriliyorsunuz...");
            kontrol = true;
        } else {
        printf("\nBa�ar�s�z Giri� L�tfen Tekrar Deneyiniz...\n\n");
        printf("\nKullan�c� Ad�:");
        scanf("%s", &giriskullanici);
        printf("\n�ifreniz:");
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
    printf("\n\n\n[1]Giri� Yap\n[2]Kay�t Ol\nL�tfen Birini Se�iniz: ");
    scanf("%d", &girissecenek);

    switch (girissecenek) {
        case 1: girisyap(kullaniciAdi, sifre); break;
        case 2: kayitol(); break;
        default: printf("L�tfen ge�erli giri� se�ene�ini se�iniz ! ");
    }

    return 0;
}

