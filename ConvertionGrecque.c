#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "ConvertionGrecque.h"

void ConvertionGrecque(int Nombre){ 
    char tab[10];
    sprintf(tab,"%d",Nombre);
        
    if(tab[0]=='0'){
        printf("erreur Nombre = 0");
    }else{
        switch(strlen(tab)){
            case(4):   
                Milliers(tab[0]);
                Centaines(tab[1]);
                Dizaines(tab[2]);
                Unites(tab[3]);
                break;
            case(3):
                Centaines(tab[0]);
                Dizaines(tab[1]);
                Unites(tab[2]);
                break;
            case(2):
                Dizaines(tab[0]);
                Unites(tab[1]);
                break;
            case(1):
                Unites(tab[0]);
                break;
            default:
                printf("erroné, votre entrez est superieur a 9999 ou inferieur à 1");
                break;
        }
    }
    printf("\n");
}

void Unites(char Unites){
    switch(Unites){
        case('9'):
            printf("θ");
            break;
        case('8'):
            printf("η");
            break;
        case('7'):
            printf("ζ");
            break;
        case('6'):
            printf("ϛ");
            break;
        case('5'):
            printf("ε");
            break;
        case('4'):
            printf("δ");
            break;
        case('3'):
            printf("γ");
            break;
        case('2'):
            printf("β");
            break;
        case('1'):
            printf("α");
            break;
        default:
            break;
    }
}

void Dizaines(char c){ 
    switch(c){
        case ('9') :
            printf("ϟ");
            break;
        case '8' :
            printf("π");
            break;
        case '7' :
            printf("o");
            break;
        case '6' :
            printf("ξ");
            break;
        case '5' :
            printf("ν");
            break;
        case '4' :
            printf("μ");
            break;
        case '3' :
            printf("λ");
            break;
        case '2' :
            printf("κ");
            break;
        case '1' :
            printf("ι");
            break;
    }
}

void Centaines(char c){
    switch(c){
        case '9' :
            printf("ϡ");
            break;        
        case '8' :
            printf("ω");
            break;            
        case '7' :
            printf("ψ");
            break;            
        case '6' :
            printf("χ");
            break;            
        case '5' :
            printf("φ");
            break;            
        case '4' :
            printf("υ");
            break;        
        case '3' :
            printf("τ");
            break;        
        case '2' :
            printf("σ");
            break;            
        case '1' :
            printf("ρ");
            break;      
    }
}

void Milliers(char c){
    switch(c){
        case '9' :
            printf("𝚯");
            break;
        case '8' :
            printf("H");
            break;
        case '7' :
            printf("Z");
            break;
        case '6' :
            printf("Ϛ");
            break;
        case '5' :
            printf("E");
            break;
        case '4' :
            printf("Δ");
            break;
        case '3' :
            printf("Γ");
            break;
        case '2' :
            printf("B");
            break;
        case '1' :
            printf("A");
            break;
    }   
}