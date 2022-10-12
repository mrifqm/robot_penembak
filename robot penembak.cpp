// NAMA		:Muhammad Rifqi Ma'ruf
// NRP		:5025221060
// Jurusan	:Teknik Informatika

#include <iostream>
#include <cmath>
using namespace std;

int g = 10;
int teta = 45;
float vtan;
int v0,x,loss;

void mencari_v0(){
	if (v0>=1 && v0<=10){
		v0=v0-1;
	}
		else if (v0>10 && v0 <=20){
			v0=v0-3;
		}
			else if (v0>20 && v0 <=30){
			v0=v0-5;
			}
}
void speed_dgn_loss(){
	if (v0 >= 1 && v0 <= 10){
		loss = 1;
	}
	else if (v0 >10 && v0 <=20){
		loss = 3;
	}
	else if (v0 >20 && v0 <=30){
		loss = 5;
	}
}

int main(){
	cin>> v0;
	mencari_v0();
		x = v0 * v0 * sin(2*teta*3.14/180)/g;
		x = ceil(x);
	speed_dgn_loss();
		vtan = sqrt(x*10/sin(2*teta*3.14/180))+loss;
	cout<<x<<" "<<vtan<<endl;
	return 0;
}



