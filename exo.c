//Fullname: Kamila Kusainova
//Group: 3EN04A
#include <stdio.h>
#include <getopt.h>

int main(int argc, char *argv[]){
   int opt;
   if ((opt = getopt(argc, argv,"n:")) !=-1){
	switch (opt){
  		case 'n':
  		for (int i = 2; i < argc; ++i)
  		{
  			printf("%s ", argv[i]);
  		}
  		break;}
   }
   else{
	for (int i = 1; i < argc; ++i){
  			if(i+1 == argc){
  			printf("%s\n", argv[i]);}
  		else{
		printf("%s ", argv[i]);}

  		}}
   return 0;
  
}
