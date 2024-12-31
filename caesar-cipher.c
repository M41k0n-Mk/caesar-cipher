#include <stdio.h>
#include <string.h>

void caesarCipher(char *text, int shift)
{
    for (int i = 0; text[i] != '\0'; i++)
    {
        char c = text[i];
        if (c >= 'a' && c <= 'z')
        {
            text[i] = (c - 'a' + shift) % 26 + 'a';
        }
        else if (c >= 'A' && c <= 'Z')
        {
            text[i] = (c - 'A' + shift) % 26 + 'A';
        }
    }
}

int main()
{
    char text[100];
    int shift;

    printf("Digite o texto: ");
    fgets(text, 100, stdin);
    text[strcspn(text, "\n")] = '\0';

    printf("Digite o deslocamento: ");
    scanf("%d", &shift);

    caesarCipher(text, shift);

    printf("Texto cifrado: %s\n", text);

    return 0;
}