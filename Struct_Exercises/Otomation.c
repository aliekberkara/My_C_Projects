#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// KOD HER ZAMAN MAIN FONKSIYONUNDAN ÇALISMAYA BASLADIGI ICIN MAIN FONKSIYONUNDAN YORUMLAMAYA BASLA.

int number;                // Kaç kayıt alınacağını tutuyor. [GLOBAL DEGISKEN]

typedef struct 
{
    char nickname[10];     // Lakap Struct Yapısı
}nick;

typedef struct
{
    char name[10];
    char surname[10];
    int age;              // Kişiler Struct Yapısı
    nick nickname;
}persons;

void createNickname(nick *n)    
{
    scanf("%s", n->nickname);       
}

void createPerson(int i, persons *p) // Birinci parametre kişinin sıra numarasını (örneğin 1. Kişi), İkinci parametre ise addPerson fonksiyonundaki for döngüsünde parametre olarak gönderilen adresin işaret ettiği değeri gösterir.
{
    printf("\t%d. Person's Name: ", i);
    scanf("%s", p->name);       // p adındaki struct yapısındaki isim değişkenine kişi adını atar. Karakter Dizilerinde '%s' ifadesi olan scanf() fonksiyonlarında '&' işareti kullanılmaz.
    printf("\t%d. Person's Surname: ", i);
    scanf("%s", p->surname);
    printf("\t%d. Person's Age: ", i);
    scanf("%d", &p->age);       // p adındaki struct yapısındaki isim değişkenine kişi yaşını atar. Karakter dizileri dışındaki scanf() fonksiyonlarda adresi göstermek için '&' işareti kullanılır.
    printf("\t%d. Person's Nickname: ", i);
    createNickname(&p->nickname);       // Lakap Oluştur Fonksiyonunda ikinci parametre olarak p adındaki struct yapısında tanımlanan lakap adlı değişkenin adresini gönderir. Lakap Oluştur Fonksiyonu Çalışır.
    printf("-------------------------\n");   
}

void printPerson(persons p)
{
    printf("\tName: %s\n", p.name);
    printf("\tSurname: %s\n", p.surname);
    printf("\tAge: %d\n", p.age);
    printf("\tNickname: %s\n", p.nickname.nickname);  // p adındaki struct yapısında bulunan lakap adlı struct yapısının içindeki lakap adını işaret eder. Şöyleki p.nickname ifadesi (persons struct yapısındaki nickname ifadesini gösterir.) nickname.nickname ifadesi (nick struct yapısındaki nickname ifadesini gösterir.)
}

void addPerson()
{
    printf("How many users will you register?\n");
    scanf("%d", &number);   // Kayıt Sayısı Alınıyor. '&' işareti değişken adresini gösterir. Kullanıcıdan girilen değer bu adrese yazılır.
    persons registers[number];     //Kayıt sayısına göre (kişiler) struct veri tipinde bir dizi oluşturuluyor. Örneğin yukarıda girilen kayıt sayısı 2 ise 2 kişilik bir kayıt dizisi oluşturulur.
    int i;
    for (i = 1; i <= number; i++)
    {
        printf("Person %d: \n", i);     //For Döngüsü ile 2 kişinin kişi bilgileri alınır.
        createPerson(i, &registers[i-1]);   // Kişi Oluştur Fonksiyonunda ikinci parametre olarak kayıt dizisinde gösterilen değerin adresini gönderir. Kişi Oluştur Fonksiyonu Çalışır.
    }

    for (i = 1; i <= number; i++)
    {
        printf("%d. Person: \n", i);
        printPerson(registers[i-1]);  // For Döngüsü ile kişi bilgileri ekrana basılır.
        printf("-------------------------\n"); 
    }
}

int main(int argc, char const *argv[])
{
    addPerson();  //Kayıt Ekleme Fonksiyonu [addPerson Fonksiyonu Çalışır.]
    return 0;
}


// HATIRLATMA!!!

// Pointer olan struct yapılarında bir değeri işaret etmek için '->' işareti, Normal Struct yapılarında ise '.' işareti kullanılır.
// orneğin pointer olarak tanımlanan *p adındaki persons struct yapısında p->name iken,
// normal olarak tanımlanan p struct yapısında p.name olarak işaret edilir.