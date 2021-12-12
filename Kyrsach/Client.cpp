#include<iostream>
#include<fstream>
#include"Client.h"
using namespace std;

Client::Client() {
	Number = 0;
	person.Name = "";
	person.Surname = "";
	person.Patronomic = "";
	passport.Number = "";
	passport.Series = "";
	address.number_of_flat = "";
	address.number_of_house = "";
	address.Street = "";
	date_birth.Day = "";
	date_birth.Mounth = "";
	date_birth.Year = "";
}

void Client::SetData(Personal_Data p_d, Passport pass, Date_Birth d_b, Address a) {
	person.Name = p_d.Name;
	person.Surname = p_d.Surname;
	person.Patronomic = p_d.Patronomic;
	person.Telephone_number = p_d.Telephone_number;
	passport.Number = pass.Number;
	passport.Series = pass.Series;
	date_birth.Day = d_b.Day;
	date_birth.Mounth = d_b.Mounth;
	date_birth.Year = d_b.Year;
	address.number_of_flat = a.number_of_flat;
	address.number_of_house = a.number_of_house;
	address.Street = a.Street;
}
void Client::AddToFileClientCaclulation(string FileName) {
	ofstream record(FileName, ios::app);
	if (record.is_open()) {
		record << person.Name << " " << person.Surname << " " << person.Patronomic << endl;
	}
}
void Client::AddToFileClientOut(string FileName) {
	ofstream record(FileName, ios::app);
	if (record.is_open()) {
		record << "Ф.И.О: " << person.Name << " " << person.Surname << " " << person.Patronomic << endl;
		record << "Серия и номер паспорта: " << passport.Series << " " << passport.Number << endl;
		record << "Дата рождения: " << date_birth.Day << ' ' << date_birth.Mounth << ' ' << date_birth.Year << endl;
		record << "Адрес: " << address.Street << " " << address.number_of_house << " " << address.number_of_flat << endl;
		record << "Телефонный номер: " << person.Telephone_number << endl;
		record << "==========================\n";
	}
	else cout << "Ошибка";
	record.close();
}
void Client::AddToFileClientIn(string FileName) {
	ofstream record(FileName, ios::app);
	if (record.is_open()) {
		record << person.Name << " " << person.Surname << " " << person.Patronomic << endl;
		record << passport.Series << " " << passport.Number << endl;
		record << date_birth.Day << ' ' << date_birth.Mounth << ' ' << date_birth.Year << endl;
		record << address.Street << " " << address.number_of_house << " " << address.number_of_flat << endl;
		record << person.Telephone_number << endl;
	}
	else cout << "Ошибка";
	record.close();
}
