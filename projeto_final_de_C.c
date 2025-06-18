#include <stdio.h>

int main () {

// Candidatos e seus respectivos números:
    
    printf("<< Candidatos >> \n Miku: 39 \n William Afton: 87 \n Esnupi: 67 \n Legoshi: 02 \n Sung Jin-woo: 13 \n Papyrus: 89 \n Sonic: 80\n Ana Lucia: 69 \n\n");
    int voto = 0, ind_vot = 0,miku = 0, willaft = 0, esnupi = 0, legoshi = 0, sungjinwoo = 0, papyrus = 0, sonic = 0, analucia = 0;
    
    while(ind_vot == 0){
        printf("Digite o número do candidato abaixo: \n ");
        scanf("%d",&voto);
    
        if (voto == 39) {
            miku++;
            printf("<< Voto cadastrado >> \n");
        }
        else if (voto == 87) {
            willaft++;
            printf("<< Voto cadastrado >> \n");
        }
        else if (voto == 67) {
            esnupi++;
            printf("<< Voto cadastrado >> \n");
        }
        else if (voto == 02) {
            legoshi++;
            printf("<< Voto cadastrado >> \n");
        }
        else if (voto == 13) {
            sungjinwoo++;
            printf("<< Voto cadastrado >> \n");
        }
        else if (voto == 89) {
            papyrus++;
            printf("<< Voto cadastrado >> \n");
        }
        else if (voto == 80) {
            sonic++;
            printf("<< Voto cadastrado >> \n");
        }
        else if (voto == 69) {
            analucia++;
            printf("<< Voto cadastrado >> \n");
        }

    else {
        printf ("* Número inválido, por favor tente novamente");
    }
        
    }
    return 0;
}
