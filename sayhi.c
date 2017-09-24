//Fullname: Kamila Kusainova
//Group: 3EN04
#include <stdio.h>
#include <stdlib.h>
#include <getopt.h>

int main(int argc, char *argv[]){
  int opt;
  char name[20];
  fgets(name,20,stdin);
  
  if((opt = getopt(argc, argv,"krname")) !=-1){
  	switch (opt){
  		case 'k':
		printf("Salem\n"); 
  		break;
  		case 'r':
  		printf("Privet\n"); 
  		break;
  		case 'name':
  		fgets(name, 100, stdin);
  		printf("Privet %s\n",name );
  			}
  }else {
// printf("%lf\n%lf\n",s, c);
  }
  return 0;
}