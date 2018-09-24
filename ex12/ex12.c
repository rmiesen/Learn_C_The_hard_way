#include <stdio.h>

int main(/*@unused@*/ int argc, /*@unused@*/ char *argv[])
{
        int areas[] = { 10, 12, 13, 14, 20 };
        char name[] = "Zed";
        char full_name[] = {
                'Z', 'e', 'd',
                ' ', 'A', '.', ' ',
                'S', 'h', 'a', 'w', '\0'
        };

        // WARNING: On some systems you may have to change the
        // %ld in this code to a %u since it will use unsigned ints

        // I changed %ld to %d since `splint` complained about
        // doing an implicit cast from size_t to long
        //   - rmiesen
        printf("The size of an int: %d\n", (int)sizeof(int));
        printf("The size of areas (int[]): %d\n", (int)sizeof(areas));
        printf("The number of ints in areas: %d\n",
               (int)sizeof(areas) / (int)sizeof(int));
        printf("The first area is %d, the 2nd %d.\n", areas[0], areas[1]);

        printf("The size of a char: %d\n", (int)sizeof(char));
        printf("The size of name (char[]): %d\n", (int)sizeof(name));
        printf("The number of chars: %d\n",
               (int)sizeof(name) / (int)sizeof(char));

        printf("The size of full_name (char[]): %d\n", (int)sizeof(full_name));
        printf("The number of chars: %d\n",
               (int)sizeof(full_name) / (int)sizeof(char));

        printf("name=\"%s\" and full_name=\"%s\"\n", name, full_name);

        return 0;
}
