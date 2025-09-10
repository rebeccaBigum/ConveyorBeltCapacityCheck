
#include <stdio.h>
int coneyer(){
int motorer;
float pakkevaegt;
float motorcapasitet=5.6;

        printf("Hvor mange motorer er der? input helt tal \n");
        scanf("%d", &motorer);
        
        printf("Hvor mange kg vejer pakkerne tilsammen? input tal \n");
        scanf("%f", &pakkevaegt);
        float maxkapacitet = motorcapasitet * motorer;
        if(pakkevaegt<=maxkapacitet){
            printf("Conveyer kan godt baere det \n");
        }else{
            printf("Conveyer kan ikke baere det \n");
        }

    
}

int main() {
    coneyer();
}