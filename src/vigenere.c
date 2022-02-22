#include <stdio.h>
#include <string.h>

int main(int argc, char *argv[])
{
    if (argc != 3 && argc != 4)
    {
        printf("Usage: vigenere \"key\" \"text to encode\" [v](verbose, optional).\nAlternative usage: vigenere \"key\" \"$( < input_text_file )\" > output_text_file\nMade by Lucas Lavratti - 2022.\n");
        return (-1);
    }
    else
    {

        char key[strlen(argv[1])];
        char out[strlen(argv[2])];
        char aux;
        int key_len;
        int i;
        int j;
        int verbose = 0;

        if (argc == 4)
        {
            if (argv[3][0] == 'v' || argv[3][0] == 'V')
            {
                verbose = 1;
            }
        }

        if (verbose == 1)
        {
            printf("RAW Key:\"%s\"\n", argv[1]);
        }
        i = 0;
        while (argv[1][i] != '\0')
        {
            aux = argv[1][i];
            if (aux >= 'a' && aux <= 'z')
            {
                aux -= 32;
            }
            if (aux >= 'A' && aux <= 'Z')
            {
                key[i] = aux;
            }
            else
            {
                printf("Key shoud match [A-z]");
                return (-1);
            }
            i++;
        }
        key_len = i;
        key[i] = '\0';
        if (verbose == 1)
        {
            printf("OUT Key:\"%s\"\n", key);
            printf("RAW Msg:\"%s\"\n", argv[2]);
        }
        i = 0;
        j = 0;
        while (argv[2][i] != '\0')
        {
            aux = argv[2][i];
            if (aux >= 'a' && aux <= 'z')
            {
                aux -= 32;
            }
            if (aux >= 'A' && aux <= 'Z')
            {
                out[i] = ((aux - 'A') + (key[j % key_len] - 'A')) % 26 + 'A';
                j++;
            }
            else
            {
                out[i] = aux;
            }
            i++;
        }
        out[i] = '\0';
        if (verbose == 1)
        {
            printf("OUT Msg:\"%s\"\n", out);
        }
        else
        {
            printf("%s\0", out);
        }
    }
    return (0);
}
