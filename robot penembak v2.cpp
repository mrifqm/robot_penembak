// NAMA		:Muhammad Rifqi Ma'ruf
// NRP		:5025221060
// Jurusan	:Teknik Informatika

#include <iostream>
#include <cmath>
using namespace std;

const int g = 10;
const int teta = 45;
float vtan;
int v0,x,loss;

void mencari_v0(){
	if (v0>=1 && v0<=10){
		v0=v0-1;
		loss = 1;
	}
		else if (v0>10 && v0 <=20){
		v0=v0-3;
		loss=3;
		}
		else if (v0>20 && v0 <=30){
			v0=v0-5;
			loss=5;
			}
}
int main(){

	cin>> v0;
	mencari_v0();
		x = v0 * v0 * sin(90*3.1415/180)/10;
		vtan = sqrt(x*10/sin(2*45*3.1415/180))+loss;
	cout<<x<<" "<<vtan<<endl;
	return 0;
}

