#include <iostream>
#include <random>
#include <stdlib.h>

int main(){
	
  int i;
	
  float delta = 1.0;
	
  float sigma = 1.0;
	
  float propuesta = 0.0;
	
  float alpha = 0.0;
	
  float lista = drand48();

	float r = 0.0;
  


    for (i =1; i< 10000; i++) {
		propuesta = lista + (drand48() - 0.5) *delta;
		r = exp((-0.5*propuesta*propuesta)/(sigma*sigma)) / exp ((-0.5*lista*lista)/(sigma*sigma));
		alpha = drand48();
		if(alpha<r){
			std::cout << i << " " << propuesta << std::endl;
		}
		else{
			std::cout << i << " " << lista << std::endl;
		}
	}
	return 0;
	}
		