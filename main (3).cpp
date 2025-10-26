/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>
#include <string>
using namespace std;

class SuperKahraman {
public:
	string ad;
	int can;
	int hasar;
	void ozelGuc() {
		hasar =10;
	}
	SuperKahraman() {
		hasar = 50;
		can = 100;
	}
};

int main() {
	SuperKahraman spiderMan;
	spiderMan.ad="spider man";

	SuperKahraman batman;
	batman.ad="batman";

	cout<<"super kahramanlar kapisiyor"<<endl;
	bool savasBittimi=true;
	while(savasBittimi) {
		char karakterSecimi;
		cout<<"hangi super kahraman saldirsin. s/b";
		cin>>karakterSecimi;
		if(karakterSecimi=='s') {
			batman.can-=spiderMan.hasar;
		}
		else if(karakterSecimi== 'b') {
			spiderMan.can-=batman.hasar;
		}
		else {
			cout<<"hatali secim"<<endl;
		}
		cout<<"spiderMan kalan cani: "<<spiderMan.can <<" batman kalan can:"<<batman.can<<endl;
		if(spiderMan.can<=0 || batman.can <=0) {
			savasBittimi=false;
		}
		if(spiderMan.can<0) {
			cout<<"kazanan batman"<<endl;
		}
		else {
			cout<<"kazanan spiderman"<<endl;
		}
	}
	return 0;
}