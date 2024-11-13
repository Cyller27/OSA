#include <stdio.h>
#include <ctype.h> // Para usar a função toupper()

int main()
{
    // Declaração das variáveis
    char nome[30];
    char letradoalfabeto;
    char primeiraletradonome;

    // Informar letra do alfabeto
    printf("Digite uma letra do alfabeto: ");
    scanf(" %c", &letradoalfabeto);

    // Converter a letra para maiúscula, caso seja minúscula
    letradoalfabeto = toupper(letradoalfabeto);

    switch(letradoalfabeto) {
    case 'A':
    case 'B':
    case 'C':
    case 'D':
    case 'E':
    case 'F':
    case 'G':
    case 'H':
    case 'I':
    case 'J':
    case 'K':
    case 'L':
    case 'M':
    case 'N':
    case 'O':
    case 'P':
    case 'Q':
    case 'R':
    case 'S':
    case 'T':
    case 'U':
    case 'V':
    case 'W':
    case 'X':
    case 'Y':
    case 'Z':
        // Informar nome com a respectiva letra
        printf("Digite um nome com a letra %c: ", letradoalfabeto);
        break;

    default:
        // Saída caso nenhuma letra for reconhecida
        printf("Letra não reconhecida\n");
        return 0;
    }

    // Ler o nome inserido
    scanf(" %s", nome);

    // Converter a 1° letra do nome e transformar lá em maiúsculas
    primeiraletradonome = toupper(nome[0]);

    // Verificar se a primeira letra do nome corresponde à letra fornecida
    if (primeiraletradonome == letradoalfabeto) {
        printf("Nome informado: %s\n", nome);
    } else {
        printf("O nome não começa com a letra %c\n", letradoalfabeto);
    }

    return 0;
}