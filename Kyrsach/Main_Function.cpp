#include<iostream>
#include<fstream>
#include<string>
#include"Client.h"
#include"Vklad.h"
#include"Main_Function.h"
using namespace std;



int QuanityOfObjects(string FileName) {
	ifstream read(FileName);
	int quanity;
	if (read.is_open()) read >> quanity;
	else cout << "Ошибка";
	return quanity;
	read.close();
}

void ReadInformationOfClient(Client* cl, string FileName) {
	ifstream read(FileName);
	int quanity;
	Personal_Data p;
	Passport pas;
	Date_Birth date_b;
	Address a_d;
	int num;
	if (read.is_open()) {
		read >> quanity;
		for (int i = 0; i < quanity; i++) {
			read >> p.Surname >> p.Name >> p.Patronomic;
			read >> pas.Series >> pas.Number;
			read >> date_b.Day >> date_b.Mounth >> date_b.Year;
			read >> a_d.Street >> a_d.number_of_house >> a_d.number_of_flat;
			read >> p.Telephone_number;
			cl[i].SetData(p, pas, date_b, a_d);
		}
	}
	else cout << "Ошибка";
	read.close();
}

void WriteInformationClient(Client* cl, string FileName, int n) {
	ofstream record(FileName, ios::out);
	if (record.is_open()) {
		for (int i = 0; i < n; i++) {
			cl[i].AddToFileClientOut(FileName);
		}
	}
	else cout << "Ошибка, какой-то файл не может быть открыт";
}

void WriteInformationClientInPlus(Client* cl, string FileName, int n) {
	ofstream record(FileName, ios::out);
	if (record.is_open()) {
		record << n << endl;
		for (int i = 0; i < n; i++) {
			cl[i].AddToFileClientIn(FileName);
		}
	}
	else cout << "Ошибка, какой-то файл не может быть открыт";
}

void WriteInformationClientIn(Client* cl, string FileName, int n) {
	ofstream record(FileName, ios::out);
	if (record.is_open()) {
		record << n - 1 << endl;
		for (int i = 0; i < n; i++) {
			cl[i].AddToFileClientIn(FileName);
		}
	}
	else cout << "Ошибка, какой-то файл не может быть открыт";
}



void ReadInformationOfVklad(Vklad* vk, string FileName) {
	ifstream read(FileName);
	int quanity;
	string name;
	string currency;
	string deposit;
	Date_Close date_c;
	Date_Open date_o;
	string procent;
	if (read.is_open()) {
		read >> quanity;
		for (int i = 0; i < quanity; i++) {
			read >> name;
			read >> date_o.Day >> date_o.Mounth >> date_o.Year;
			read >> date_c.Day >> date_c.Mounth >> date_c.Year;
			read >> procent;
			read >> deposit;
			read >> currency;
			vk[i].SetData(procent, deposit, date_c, date_o, name, currency);
		}
	}
	else cout << "Ошибка";
	read.close();
}

void WriteInformationVklad(Vklad* vk, string FileName, int n) {
	ofstream record(FileName, ios::out);
	if (record.is_open()) {
		for (int i = 0; i < n; i++) {
			vk[i].AddToFileVkladOut(FileName);
		}
	}
	else cout << "Ошибка, какой-то файл не может быть открыт";
}

void WriteInformationVkladInPlus(Vklad* vk, string FileName, int n) {
	ofstream record(FileName, ios::out);
	if (record.is_open()) {
		record << n << endl;
		for (int i = 0; i < n; i++) {
			vk[i].AddToFileVkladIn(FileName);
		}
	}
	else cout << "Ошибка, какой-то файл не может быть открыт";
}

void WriteInformationVkladIn(Vklad* vk, string FileName, int n) {
	ofstream record(FileName, ios::out);
	if (record.is_open()) {
		record << n - 1 << endl;
		for (int i = 0; i < n; i++) {
			vk[i].AddToFileVkladIn(FileName);
		}
	}
	else cout << "Ошибка, какой-то файл не может быть открыт";
}