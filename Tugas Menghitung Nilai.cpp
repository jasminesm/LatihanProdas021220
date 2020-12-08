#include<iostream>
#include<sstream>
using namespace std;

	int ukuran_array,array,kategori;
	string tentukanKategori(int nilai){
	string kategori;
		
	if(nilai >= 90 && nilai <= 100){
		kategori = "A";
	}
	else if(nilai >= 80 && nilai < 90){
		kategori = "B";
	}
	else if(nilai >= 70 && nilai < 80){
		kategori = "C";
	}
	else if(nilai >= 60 && nilai < 70){
		kategori = "D";
	}
	else if(nilai >= 50 && nilai < 60){
		kategori = "E";
	}
	else if(nilai < 50){
		kategori = "Tidak Lulus";
	}
	
		return kategori;
	}
	

