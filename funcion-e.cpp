#include<stdio.h>
#include<conio.h>

template <class TIPOD>
TIPOD maximo(TIPOD dat1, TIPOD dat2, TIPOD dat3);

int main(){
	
	char dat1='e';
	char dat2='f';
	char dat3='a';
	
	printf("El maximo valor es: %c ", maximo(dat1,dat2,dat3));
	
	return 0;
}

template <class TIPOD>
TIPOD maximo(TIPOD dat1, TIPOD dat2, TIPOD dat3){
	
	TIPOD max;
	
	if((dat1 > dat2) && (dat1 > dat3)){
		max = dat1;
	}
	else{
		 if((dat2>dat1) && (dat2>dat3)){
			max = dat2;
		}
		else{
			max = dat3;
		}
	}
	return max;
}
