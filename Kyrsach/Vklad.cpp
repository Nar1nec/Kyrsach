#include<iostream>
#include<string>
#include<fstream>
#include"Vklad.h"
using namespace std;

Vklad::Vklad() {
	Procent = "";
	date_open.Day = "";
	date_open.Mounth = "";
	date_open.Year = "";
	date_close.Day = "";
	date_close.Mounth = "";
	date_close.Year = "";
	deposit_status = "";
	Name = "";
	sum = 0.0;
}
Vklad::Vklad(string proc, string d_s, Date_Open d_o, string name, Date_Close d_c, string cur) {
	Procent = proc;
	date_open.Day = d_o.Day;
	date_open.Mounth = d_o.Mounth;
	date_open.Year = d_o.Year;
	date_close.Day = d_c.Day;
	date_close.Mounth = d_c.Mounth;
	date_close.Year = d_c.Year;
	deposit_status = d_s;
	Name = name;
	Currency = cur;
}


void Vklad::AddToFileVkladCaclulation(string FileName) {
	ofstream record(FileName, ios::app);
	if (record.is_open()) {
		record << "Дата открытия: " << date_open.Day << " " << date_open.Mounth << " " << date_open.Year << endl;
		record << "Дата закрытия: " << date_close.Day << " " << date_close.Mounth << " " << date_close.Year << endl;
		record << "Процентная ставка: " << Procent << endl;
		record << "Сумма вклада: " << deposit_status << endl;
		record << "Сумма на конец срока: " << (stoi(deposit_status) * stod(Procent) / 100) + stoi(deposit_status) << endl;
		record << "==========================\n";
	}
}
void Vklad::SetData(string proc, string deposit, Date_Close d_c, Date_Open d_o, string name, string cur) {
	Name = name;
	date_open.Day = d_o.Day;
	date_open.Mounth = d_o.Mounth;
	date_open.Year = d_o.Year;
	date_close.Day = d_c.Day;
	date_close.Mounth = d_c.Mounth;
	date_close.Year = d_c.Year;
	Procent = proc;
	deposit_status = deposit;
	Currency = cur;
}
void Vklad::AddToFileVkladOut(string FileName) {
	ofstream record(FileName, ios::app);
	if (record.is_open()) {
		record << "Наименование вклада: " << Name << endl;
		record << "Дата открытия: " << date_open.Day << " " << date_open.Mounth << " " << date_open.Year << endl;
		record << "Дата закрытия: " << date_close.Day << " " << date_close.Mounth << " " << date_close.Year << endl;
		record << "Процентная ставка: " << Procent << endl;
		record << "Сумма вклада: " << deposit_status << endl;
		record << "Валюта: " << Currency << endl;
		record << "==========================\n";
	}
	else cout << "Ошибка";
	record.close();
}
void Vklad::AddToFileVkladIn(string FileName) {
	ofstream record(FileName, ios::app);
	if (record.is_open()) {
		record << Name << endl;
		record << date_open.Day << " " << date_open.Mounth << " " << date_open.Year << endl;
		record << date_close.Day << " " << date_close.Mounth << " " << date_close.Year << endl;
		record << Procent << endl;
		record << deposit_status << endl;
		record << Currency << endl;
	}
	else cout << "Ошибка";
	record.close();
}