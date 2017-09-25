//Fullname: Kamila Kusainova
//Group: 3EN04A

#include <stdio.h>
#include <string.h>
#include <stdio.h>
#include <unistd.h>
#include <fcntl.h>

 int main(int argc, char **argv)
{
  int array[5];
    int i, j, num, temp;
 int c;
FILE *file;
file = fopen("text.txt", "r");
if (file) {
    while ((c = getc(file)) != EOF)

    //   for (i = 0; i < num; i++)
    // {
    //     for (j = 0; j < (num - i - 1); j++)
    //     {
    //         if (array[j] > array[j + 1])
    //         {
    //             temp = array[j];
    //             array[j] = array[j + 1];
    //             array[j + 1] = temp;
    //         }
    //     }
    // }
        putchar(c);
    fclose(file);
}
}
 