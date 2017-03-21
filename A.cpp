#include<iostream>
#include<fstream>
#include "a.h"
using namespace std;

int main(void) {
	ifstream input("file.in", ios::in);
	ofstream output("file.out", ios::out);
	Record record;

	double a, b, c;
	double winner;
	double Ea, Eb;
	input>>a>>b>>c;
	record.setK(a);
	record.setRa(b);
	record.setRb(c);

	output<<record.getRa()<<" "<<record.getRb()<<endl;

	while(input>>winner){
		Ea = record.calcE(record.getRb(), record.getRa());
		Eb = record.calcE(record.getRa(), record.getRb());

		double temp;
		if(winner!=0.5){
			temp=record.getRa() + record.getK()*(winner-Ea);
			record.setRa(temp);
			temp=record.getRb() + record.getK()*(!winner-Eb);
			record.setRb(temp);
		}
		else{
			temp=record.getRa() + record.getK()*(0.5-Ea);
			record.setRa(temp);
			temp=record.getRb() + record.getK()*(0.5-Eb);
			record.setRb(temp);
		}

		output<<record.getRa()<<" "<<record.getRb()<<endl;
	}


	return 0;
}
