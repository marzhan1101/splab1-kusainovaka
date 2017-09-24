//Fullname: Kamila Kusainova
//Group: 3EN04
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <getopt.h>

int main(int argc, char *argv[]){
  double x ;
  int opt;
  scanf("%lf",&x);
  double c = cos(x);
  double s = sin(x);
  if((opt = getopt(argc, argv,"sc")) !=-1){
  	switch (opt){
  		case 'c':
  		printf("%lf\n", c); 
  		break;
  		case 's':
  		printf("%lf\n", s); 
  		break;	}
  }
  else {
printf("%lf\n%lf\n",s, c);
  }
  return 0;
}