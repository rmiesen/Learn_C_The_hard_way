#include <stdio.h>
#include <ctype.h>

// forward declarations
int can_print_it(char ch);
void print_letters(char arg[]);

void print_arguments(int argc, char *argv[])
{
        int i = 0;

        for (i = 0; i < argc; ++i){
                print_letters(argv[i]);
        }
}

void print_letters(char arg[])
{
        int i = 0;

        for (i = 0; arg[i] != '\0'; ++i) {
                char ch = arg[i];

                if (can_print_it(ch)) {
                        printf("%c == 0x%x\n", ch, (int)ch);
                }
        }
}

int can_print_it(char ch) {
        return isalpha(ch) || isblank(ch);
}

//TODO: Merge in splint target options from ex13
int main(int argc, char *argv[])
{
        print_arguments(argc, argv);

        return 0;
}
