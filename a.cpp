#ifndef _a_h_
#include "a.h"
#include<cmath>

void Record::setK(double x){
	k=x;
}
void Record::setRa(double x){
	ra=x;
}
void Record::setRb(double x){
	rb=x;
}
double Record::calcE(double x, double y){
	return 1/(1+pow(10,(x-y)/400));
}

int Record::getK(){
	return round(k);
}
int Record::getRa(){
	return round(ra);
}
int Record::getRb(){
	return round(rb);
}

#endif

