//Fullname: Kamila Kusainova
//Group: 3EN04A
#include <stdio.h>
#include <getopt.h>
#include <string.h>

int main(int argc, char *argv[]){
  int opt;
  int option_index;
  static struct option long_options[] =
{
    {"kazakh", no_argument, 0, 'k'},
    {"russian", no_argument, 0, 'r'},
    {"name", required_argument, 0, 'name'},
    {NULL, 0, NULL, 0}
};

  if ((opt = getopt_long(argc, argv, "krn:", long_options, NULL)) != -1)
{
    switch (opt){
     case 'k':
    if ((opt = getopt_long(argc, argv, "n:", long_options, NULL)) != -1){
     printf("salem %s\n",optarg);
    }else {
    printf("salem\n");
    }
     break;
     case 'r':
   if ((opt = getopt_long(argc, argv, "n:", long_options, NULL)) != -1){
     printf("privet %s\n",optarg);
    }else {
    printf("privet\n");
    }
     break;
       }  
  } else {
  if (strcmp(argv[0], "./saysalem")){
       printf("hi\n");
  }else if (strcmp(argv[0], "./sayhi")){
      printf("salem\n");
}
    }
    return 0;
}