#include <stdio.h>

int get_int(){
int szam;
scanf("%d",&szam);
return szam;

}

int main(){
printf("Adjon meg egy egesz szamot!\n");
int szam=get_int();
printf("\n");
printf("A megadott szam: %d\n",szam);


return 0;

}