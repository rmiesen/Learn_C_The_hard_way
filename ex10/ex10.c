#include <stdio.h>

int main (int argc, char *argv[]) {
        if (argc != 2) {
                printf("ERROR: You need one argument.\n");

                return 1;
        }

        int i = 0;
        for (i = 0; argv[1][i] != '\0'; ++i) {
                // inherantly biassed towards ASCII, but should work for all
                // character encodings where all the letters are grouped
                // together (1) continuously and (2) in such a fashion that
                // the distance between any character pair is the same
                const char to_lower_bitmask = ~('a' - 'A');
                //LEFT_OFF_HERE: Figure out how to get bitmask to make a character LOWER CASE (currently makes them UPPER CASE)
                printf("bitmask: %d\n", to_lower_bitmask);

                char letter = argv[1][i] & to_lower_bitmask;
                printf("DEBUG: %c converted to %c.\n", argv[1][i], letter);


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
