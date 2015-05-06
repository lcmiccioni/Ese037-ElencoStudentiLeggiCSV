#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_STRLEN 30
#define MAX_FNAMELEN 255

struct s_studente{
    char nome[MAX_STRLEN+1];
    char cognome[MAX_STRLEN+1];
    int eta;
    char classe[MAX_STRLEN+1];
};

typedef struct s_studente studente;

int main(int argc, char** argv) {
    studente alunno;
    FILE *inputFile;
    char fName[MAX_FNAMELEN+1];
    int i;
    
    printf("Inserisci il nome del file da cui leggere i dati: ");
    scanf("%s", &fName);
    
    inputFile = fopen(fName, "r");
    if(inputFile) {
        fscanf(inputFile, "%s\n", fName);
        i=0;
        fscanf(inputFile, "%[^;];%[^;];%d;%s\n", alunno.nome, alunno.cognome, &(alunno.eta), alunno.classe);
        while(!feof(inputFile)) {
            i++;
            printf("\nStudente %d\n", i);
            printf("Nome: %s\n", alunno.nome);
            printf("Congome: %s\n", alunno.cognome);
            printf("Eta': %d\n", alunno.eta);
            printf("Classe: %s\n", alunno.classe);
            fscanf(inputFile, "%[^;];%[^;];%d;%[^;\n]\n", alunno.nome, alunno.cognome, &(alunno.eta), alunno.classe);
        }
    }else {
        printf("Impossibile aprire il file");
    }
    fclose(fName);
    
    return (EXIT_SUCCESS);
}

