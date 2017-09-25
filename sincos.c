//Fullname: Kamila Kusainova
//Group: 3EN04A
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <getopt.h>

int main(int argc, char *argv[]){
  int opt;
  double c = cos(atof(argv[1]));
  double s = sin(atof(argv[1]));

  if((opt = getopt(argc, argv,"sc")) !=-1){
  	switch (opt){
  		case 'c':
       c = cos(atof(argv[2]));
      printf("%lf\n", c); 
  		break;
  		case 's':
      s = sin(atof(argv[2]));
      printf("%lf\n", s); 
  		break;	
    }
      } 
       else {
      printf("%lf\n%lf\n",c, s);
      }
  return 1;
}