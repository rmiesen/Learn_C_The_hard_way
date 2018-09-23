#include <stdio.h>

int main (int argc, char *argv[]) {
                // inherantly biased towards ASCII, but should work for all
                // character encodings where all the letters are grouped
                // together (1) continuously and (2) in such a fashion that
                // the distance between any character pair is the same
        const char lowercase_bit = ('a' - 'A');

        if (argc != 2) {
                printf("ERROR: You need one argument.\n");

                return 1;
        }

        int i = 0;
        for (i = 0; argv[1][i] != '\0'; ++i) {
                char letter = argv[1][i] | lowercase_bit;

                switch (letter) {
                case 'a':
                        printf("%d: 'A'\n", i);
                        break;
                case 'e':
                        printf("%d: 'E'\n", i);
                        break;
                case 'i':
                        printf("%d: 'I'\n", i);
                        break;
                case 'o':
                        printf("%d: 'O'\n", i);
                        break;
                case 'u':
                        printf("%d: 'U'\n", i);
                        break;
                case 'y':
                        if (i > 2) {
                                // it's only sometimes Y
                                printf("%d: 'Y'\n", i);
                        }
                        else {
                                goto notavowel;
                        }
                        break;

                default:
                notavowel:
                        printf("%d: %c is not a vowel.\n", i, letter);
                }
        }

        return 0;
}
