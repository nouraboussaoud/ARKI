#include <stdio.h>
#include <string.h>
#include"bv.h"

int main()
{
    bv p1= {"1234","500",10,"h23","tunis"},p2= {"1235","200",5,"h25","gabes"},p3;
    int x=ajouter("bv.txt", p1);
    
    if(x==1)
        printf("\najout de bv avec succés");
    else printf("\nechec ajout");
        
    x=modifier("bv.txt",1,p2 );

    if(x==1)
        printf("\nModification de bv avec succés");
    else printf("\nechec Modification");
    x=supprimer("bv.txt",1 );
    if(x==1)
        printf("\nSuppression de bv avec succés");
    else printf("\nechec Suppression");
    p3=chercher("bv.txt",3 );
    if(p3.id==-1)
        printf("introuvable");
    return 0;
}
