#include <stdio.h>

int main(){
    char add[] = "git add .";
    char commit[]="git commit -m ";
    char CommitGiris[20];
    char push[] = "git push";
    char fetch[] = "git fetch";
    char merge[] = "git merge";
    int a = 1;
    int b;
    while (a == 1)
    {
        printf("Ne tur islem yapmak istiyorsunuz\n\t1-)Github'a Upload\n\t2-)Local guncelleme\n\t3-) Cikis:\n\tSecenek: ");
        scanf("%d",&b);
        if (b==1){
            printf("Lutfen commit yazizinizi giriniz: ");
            fgets(CommitGiris, sizeof(CommitGiris), stdin);  // read string
            system(add);
            system(commit+puts(CommitGiris));
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