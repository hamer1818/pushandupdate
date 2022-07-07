#include <stdio.h>
#include <string.h>
#include <conio.h>

int main(){
    char add[] = "git add .";
    char commit[]="git commit -m " ;
    char commit2[50];
    char push[] = "git push";
    char fetch[] = "git fetch";
    char merge[] = "git merge";
    int a = 1;
    int b;
    char plus[] = "\"";
    while (a == 1)
    {
        printf("Ne tur islem yapmak istiyorsunuz\n\t1-)Github'a Upload\n\t2-)Local guncelleme\n\t3-) Cikis:\n\tSecenek: ");
        scanf("%d",&b);
        
        if (b==1){
            system(add);
            
            for (int i = 0; i < 1; i++)
            {
                printf("Commit yazinisini giriniz: \nornek: \"commit yazisi\"\tyani tirnak icerisine yaziniz ve bosluk birakmayiniz: ");
                scanf("%s",commit2);
            }
            system("pause");
            strcat(commit,commit2);
            system(commit);
            system(push);
            system("pause");
            system("cls");
        }else if(b==2){
            system(fetch);
            system(merge);
            system("pause");
            system("cls");
        }else if(b==3){
            printf("Cikis yapiliyor....");
            a=0;
        }else{
            printf("yanlis giris yaptiniz!!!");
            system("pause");
            system("cls");
        }
    }
    
}