#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("Dies ist ein Testprogramm zur Summenschleife\n");
    int eingabe,summe;
    printf("Geben sie einen Wert ein\n");
    summe=0;
    eingabe=0;
    scanf("%i",&summe);
    if (summe<0){printf("Sie haben einen Wert im Negativen bereich eingegeben\n Das Programm wir beendet");}

    else{
            while (summe<2001){
            printf("Ihr aktueller Wert ist %i\n",summe);
            printf("Geben sie eine zahl mit der sie addieren wollen\n");
            scanf("%i",&eingabe);
            if (eingabe<0){printf("Sie haben einen Wert im Negativen bereich eingegeben\n das Programm wird beendet");break;}
            summe=summe+eingabe;
            }
            if(summe>2000){printf("Sie haben eine Zahl von ueber 2000 erreicht\n Das Programm wird beendet");}
        }
}
