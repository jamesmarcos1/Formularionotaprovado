#include <stdio.h>

int main(){

    float nota1, nota2, nota3, med;
    char turno;

    //Turno//

    printf("Digite o turno: \n");
    scanf("%c", &turno);

    //Notas//

    printf("Insira sua nota do seu primeiro trimestre \n");
    scanf("%f", &nota1);

    printf("Insira sua nota do seu segundo trimestre \n");
    scanf("%f", &nota2);

    printf("Insira sua nota do seu terceiro trimestre \n");
    scanf("%f", &nota3);

    med = (nota1 + nota2 + nota3)/3;

    if (med >= 7 && med <=8)
    {
        med = med + 1;
    } else if (med > 8)
    {
        med = 10;
    }

    printf("Media: %.2f.\n", med);
    printf("Aluno do turno: %c\n", turno);

    if(med >= 0 && med <= 10){
        if (med >= 7)
        {
            printf("Aprovado\n");
        }
        else{
            if (med < 7)
            {
                printf("Reprovado\n");
            }
            
        }
        
    }

    //Turno//

    if( turno == 'm'){
        printf("Matutino\n");
    }
else if ( turno == 'n')
{
    printf("Noturno\n");
}
else
{
    printf("Turno Invalido");
}

 return 0;   
}