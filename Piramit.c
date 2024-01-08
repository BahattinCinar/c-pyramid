/*Piramit*/

#include <stdio.h>
#include <math.h>
#include <string.h>

int main()
{
      int a;

      for(;;){

            printf("Hangi islemi yapmak istiyorsunuz numarasini giriniz. Cikis icin 0 giriniz: ");
            scanf("%d",&a);


            if (a == 0){
                  break;
            }

            else if(a == 1){
                  for(;;){
                        int e, k, i, j, type;
                        printf("Piramit Olusturma Sistemi \n");

                        printf("Cikis Yapmak icin 0 giriniz : ");
                        scanf("%d",&e);

                        if (e == 0) {
                              break;
                        }

                        else {

                              printf("Piramit kac katli olsun? : "); 
                              scanf("%d",&k);

                              if (k == 0){
                              
                                    printf("0 Katli piramit mi olur lutfen kat numarasi girin \n");
                                    scanf("%d",&k);
                              }

                              else{

                                    printf("Piramit ne sekilde olsun? \n(Rakam = 1, yildiz = 2, Ben belirliyicem = 3) : "); scanf("%d",&type);

                                    if (type == 1){
                                          
                                          for(i = 0; i <= k; i++){
                                                for(j = 1; j <= i; j++){
                                                      printf("%d ",i);
                                                }
                                    
                                                printf("\n");
                                          }
                                    }
                                    else if(type == 2){
                                          for(i = 0; i <= k; i++){
                                                for(j = 1; j <= i; j++){
                                                      printf("* ");
                                                }
                                    
                                                printf("\n");
                                          }
                                    }

                                    else if(type == 3){
                                          char a[2];
                                          printf("Ne sekilde yazilmasini istiyorsunuz ? :");
                                          scanf("%2s",&a);
                                          for(i = 0; i <= k; i++){
                                                for(j = 1; j <= i; j++){
                                                      printf("%s",a);
                                                }
                                    
                                                printf("\n");
                                          }
                                    }
                              }
                        }
                  }
            }

            else if(a == 2){
                  for(;;){
                        int islem, e = 1;
                        printf("hesap makinesi sistemi \n");

                        printf("Cikis Yapmak icin 0 giriniz : ");
                        scanf("%d",&e);

                        if (e == 0) {
                              break;
                        }
                  
                        else {
                              int toplamSayi = 0 ,nsayi, sayi, i;

                              printf("Hangi islemi yapmak istiyorsunuz? \n(Toplama = 1 Cikartma = 2 Carpma = 3 Bolme = 4) : ");
                              scanf("%d", &islem);

                              if (islem == 1){
                                    
                                    printf("Kac sayi topluyucaksiniz? :");
                                    scanf("%d", &nsayi);
                                    
                              }

                              else if (islem == 2){

                                    printf("Kac sayi cikaricaksiniz? :");
                                    scanf("%d", &nsayi);

                              }

                              else if (islem == 3){
                                    
                                    printf("Kac sayi carpacaksiniz ? :");
                                    scanf("%d", &nsayi);
                              
                              }

                              else if (islem == 4){
                                    printf("Kac sayi boleceksiniz ? :");
                                    scanf("%d", &nsayi);
                              }

                              else {
                                    printf("%d diye bir islem numarasi bulunmamaktadir lutfen tekrar giriniz. \n(Toplama = 1 Cikartma = 2 Carpma = 3 Bolme = 4) : ");
                                    scanf("%d", &islem);
                              }

                              for (i = 1; i <=nsayi; i++)
                                    {
                                          printf("%d . sayiyi giriniz : ", i);
                                          scanf("%d", &sayi);

                                          if(islem == 1 || i == 1){
                                                toplamSayi = toplamSayi + sayi;
                                          }

                                          else if(islem == 2){
                                                toplamSayi = toplamSayi - sayi;
                                          }     

                                          else if( islem == 3){
                                                toplamSayi = toplamSayi * sayi;
                                          }

                                          else {
                                                toplamSayi = toplamSayi / sayi;
                                          }
                                    }
                              printf("Sonucunuz : %d \n", toplamSayi);
                        }
                  }
            }

            else if(a == 3){
                   
            }         
      }
      return 0;
}
