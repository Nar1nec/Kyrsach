#include<iostream>
#include<fstream>
#include<string>
#include<Windows.h>
#include"Main_Function.h"
using namespace std;

//struct Personal_Data{
//	string Name,
//		Surname,
//		Patronomic,
//		Telephone_number;
//};
//
//struct Address {
//	string Street,
//		number_of_house,
//		number_of_flat;
//};
//
//struct Passport {
//	string Number,
//		Series;
//};
//
//struct Date_Open {
//	string Day,
//		Mounth,
//		Year;
//};
//
//struct Date_Close {
//	string Day,
//		Mounth,
//		Year;
//};
//
//struct Date_Birth {
//	string Day,
//		Mounth,
//		Year;
//};
//
//class Client {
//private:
//	int Number;
//	Personal_Data person;
//	Passport passport;
//	Date_Birth date_birth;
//	Address address;
//public:
//	Client() {
//		Number = 0;
//		person.Name = "";
//		person.Surname = "";
//		person.Patronomic = "";
//		passport.Number = "";
//		passport.Series = "";
//		address.number_of_flat = "";
//		address.number_of_house = "";
//		address.Street = "";
//		date_birth.Day = "";
//		date_birth.Mounth = "";
//		date_birth.Year = "";
//	};
//	~Client() {};
//
//	void SetData(Personal_Data p_d, Passport pass, Date_Birth d_b, Address a) {
//		person.Name = p_d.Name;
//		person.Surname = p_d.Surname;
//		person.Patronomic = p_d.Patronomic;
//		person.Telephone_number = p_d.Telephone_number;
//		passport.Number = pass.Number;
//		passport.Series = pass.Series;
//		date_birth.Day = d_b.Day;
//		date_birth.Mounth = d_b.Mounth;
//		date_birth.Year = d_b.Year;
//		address.number_of_flat = a.number_of_flat;
//		address.number_of_house = a.number_of_house;
//		address.Street = a.Street;
//	}
//	void AddToFileClientCaclulation(string FileName) {
//		ofstream record(FileName, ios::app);
//		if (record.is_open()) {
//			record << person.Name << " " << person.Surname << " " << person.Patronomic << endl;
//		}
//	}
//	void AddToFileClientOut(string FileName) {
//		ofstream record(FileName, ios::app);
//		if (record.is_open()) {
//			record << "Ф.И.О: " << person.Name << " " << person.Surname << " " << person.Patronomic << endl;
//			record << "Серия и номер паспорта: " << passport.Series << " " << passport.Number << endl;
//			record << "Дата рождения: " << date_birth.Day << ' ' << date_birth.Mounth << ' ' << date_birth.Year << endl;
//			record << "Адрес: " << address.Street << " " << address.number_of_house << " " << address.number_of_flat << endl;
//			record << "Телефонный номер: " << person.Telephone_number<<endl;
//			record << "==========================\n";
//		}
//		else cout << "Ошибка";
//		record.close();
//	}
//	void AddToFileClientIn(string FileName) {
//		ofstream record(FileName, ios::app);
//		if (record.is_open()) {
//			record << person.Name << " " << person.Surname << " " << person.Patronomic << endl;
//			record << passport.Series << " " << passport.Number << endl;
//			record << date_birth.Day << ' ' << date_birth.Mounth << ' ' << date_birth.Year << endl;
//			record << address.Street << " " << address.number_of_house << " " << address.number_of_flat << endl;
//			record << person.Telephone_number << endl;
//		}
//		else cout << "Ошибка";
//		record.close();
//	}
//};
//
//class Vklad {
//private:
//	string Procent;
//	string deposit_status;
//	double sum;
//	Date_Close date_close;
//	Date_Open date_open;
//	string Name;
//	string Currency;
//
//public:
//	Vklad() {
//		Procent = "";
//		date_open.Day = "";
//		date_open.Mounth = "";
//		date_open.Year = "";
//		date_close.Day = "";
//		date_close.Mounth = "";
//		date_close.Year = "";
//		deposit_status = "";
//		Name = "";
//		sum = 0.0;
//	};
//	Vklad(string proc,string d_s,Date_Open d_o, string name, Date_Close d_c,string cur) {
//		Procent = proc;
//		date_open.Day = d_o.Day;
//		date_open.Mounth = d_o.Mounth;
//		date_open.Year = d_o.Year;
//		date_close.Day = d_c.Day;
//		date_close.Mounth = d_c.Mounth;
//		date_close.Year = d_c.Year;
//		deposit_status = d_s;
//		Name = name;
//		Currency = cur;
//		sum = ((stoi(d_s) * stod(proc)) / 100) + stoi(d_s);
//	};
//	~Vklad() {};
//
//	void AddToFileVkladCaclulation(string FileName) {
//		ofstream record(FileName, ios::app);
//		if (record.is_open()) {
//			record << "Дата открытия: " << date_open.Day << " " << date_open.Mounth << " " << date_open.Year << endl;
//			record << "Дата закрытия: " << date_close.Day << " " << date_close.Mounth << " " << date_close.Year << endl;
//			record << "Процентная ставка: " << Procent << endl;
//			record << "Сумма вклада: " << deposit_status << endl;
//			record << "Сумма на конец срока: " <<(stoi(deposit_status)*stod(Procent)/100)+stoi(deposit_status)<< endl;
//			record << "==========================\n";
//		}
//	}
//	void SetData(string proc, string deposit, Date_Close d_c, Date_Open d_o, string name, string cur) {
//		Name = name;
//		date_open.Day = d_o.Day;
//		date_open.Mounth = d_o.Mounth;
//		date_open.Year = d_o.Year;
//		date_close.Day = d_c.Day;
//		date_close.Mounth = d_c.Mounth;
//		date_close.Year = d_c.Year;
//		Procent = proc;
//		deposit_status = deposit;
//		Currency = cur;
//	}
//	void AddToFileVkladOut(string FileName) {
//		ofstream record(FileName, ios::app);
//		if (record.is_open()) {
//			record << "Наименование вклада: " << Name << endl;
//			record << "Дата открытия: " << date_open.Day << " " << date_open.Mounth << " " << date_open.Year << endl;
//			record << "Дата закрытия: " << date_close.Day << " " << date_close.Mounth << " " << date_close.Year << endl;
//			record << "Процентная ставка: " << Procent << endl;
//			record << "Сумма вклада: " << deposit_status << endl;
//			record << "Валюта: " << Currency << endl;
//			record << "==========================\n";
//		}
//		else cout << "Ошибка";
//		record.close();
//	}
//	void AddToFileVkladIn(string FileName) {
//		ofstream record(FileName, ios::app);
//		if (record.is_open()) {
//			record << Name << endl;
//			record << date_open.Day << " " << date_open.Mounth << " " << date_open.Year << endl;
//			record << date_close.Day << " " << date_close.Mounth << " " << date_close.Year << endl;
//			record << Procent << endl;
//			record << deposit_status << endl;
//			record << Currency << endl;
//		}
//		else cout << "Ошибка";
//		record.close();
//	}
//
//
//};
//
//int point;
//
//void Menu() {
//	cout << "Здравствуйте, выберите 1 из представленных пунктов: " << endl;
//	cout << "<0> Выйти из меню" << endl;
//	cout << "<1> Просмотр клиентов" << endl;
//	cout << "<2> Просмотр вкладов клиентов" << endl;
//	cout << "<3> Добавить клиента" << endl;
//	cout << "<4> Удалить клиента" << endl;
//	cout << "<5> Добавить вклад" << endl;
//	cout << "<6> Удалить вклад" << endl;
//	cout << "<7> Рассчитать сумму вклада на конец срока" << endl;
//	cin >> point;
//	system("cls");
//}
//
//int QuanityOfObjects(string FileName) {
//	ifstream read(FileName);
//	int quanity;
//	if (read.is_open()) read >> quanity;
//	else cout << "Ошибка";
//	return quanity;
//	read.close();
//}
//
//void ReadInformationOfClient(Client *cl,string FileName) {
//	ifstream read(FileName);
//	int quanity;
//	Personal_Data p;
//	Passport pas;
//	Date_Birth date_b;
//	Address a_d;
//	int num;
//	if (read.is_open()) {
//		read >> quanity;
//		for (int i = 0; i < quanity; i++) {
//			read >> p.Surname >> p.Name >> p.Patronomic;
//			read >> pas.Series >> pas.Number;
//			read >> date_b.Day >> date_b.Mounth >> date_b.Year;
//			read >> a_d.Street >> a_d.number_of_house >> a_d.number_of_flat;
//			read >> p.Telephone_number;
//			cl[i].SetData(p, pas, date_b, a_d);
//		}
//	}
//	else cout << "Ошибка";
//	read.close();
//}
//
//void WriteInformationClient(Client* cl, string FileName, int n) {
//	ofstream record(FileName,ios::out);
//	if (record.is_open()) {
//		for (int i = 0; i < n; i++) {
//			cl[i].AddToFileClientOut(FileName);
//		}
//	}
//	else cout << "Ошибка, какой-то файл не может быть открыт";
//}
//
//void WriteInformationClientInPlus(Client* cl, string FileName, int n) {
//	ofstream record(FileName, ios::out);
//	if (record.is_open()) {
//		record << n << endl;
//		for (int i = 0; i < n; i++) {
//			cl[i].AddToFileClientIn (FileName);
//		}
//	}
//	else cout << "Ошибка, какой-то файл не может быть открыт";
//}
//
//void WriteInformationClientIn(Client* cl, string FileName, int n) {
//	ofstream record(FileName, ios::out);
//	if (record.is_open()) {
//		record << n - 1 << endl;
//		for (int i = 0; i < n; i++) {
//			cl[i].AddToFileClientIn(FileName);
//		}
//	}
//	else cout << "Ошибка, какой-то файл не может быть открыт";
//}
//
//
//
//void ReadInformationOfVklad(Vklad* vk, string FileName) {
//	ifstream read(FileName);
//	int quanity;
//	string name;
//	string currency;
//	string deposit;
//	Date_Close date_c;
//	Date_Open date_o;
//	string procent;
//	if (read.is_open()) {
//		read >> quanity;
//		for (int i = 0; i < quanity; i++) {
//			read >> name;
//			read >> date_o.Day >> date_o.Mounth >> date_o.Year;
//			read >> date_c.Day >> date_c.Mounth >> date_c.Year;
//			read >> procent;
//			read >> deposit;
//			read >> currency;
//			vk[i].SetData(procent, deposit, date_c, date_o, name, currency);
//		}
//	}
//	else cout << "Ошибка";
//	read.close();
//}
//
//void WriteInformationVklad(Vklad* vk, string FileName, int n) {
//	ofstream record(FileName, ios::out);
//	if (record.is_open()) {
//		for (int i = 0; i < n; i++) {
//			vk[i].AddToFileVkladOut(FileName);
//		}
//	}
//	else cout << "Ошибка, какой-то файл не может быть открыт";
//}
//
//void WriteInformationVkladInPlus(Vklad* vk, string FileName, int n) {
//	ofstream record(FileName, ios::out);
//	if (record.is_open()) {
//		record << n << endl;
//		for (int i = 0; i < n; i++) {
//			vk[i].AddToFileVkladIn(FileName);
//		}
//	}
//	else cout << "Ошибка, какой-то файл не может быть открыт";
//}
//
//void WriteInformationVkladIn(Vklad* vk, string FileName, int n) {
//	ofstream record(FileName, ios::out);
//	if (record.is_open()) {
//		record << n - 1 << endl;
//		for (int i = 0; i < n; i++) {
//			vk[i].AddToFileVkladIn(FileName);
//		}
//	}
//	else cout << "Ошибка, какой-то файл не может быть открыт";
//}
int point;
void Menu() {
	cout << "Здравствуйте, выберите 1 из представленных пунктов: " << endl;
	cout << "<0> Выйти из меню" << endl;
	cout << "<1> Просмотр клиентов" << endl;
	cout << "<2> Просмотр вкладов клиентов" << endl;
	cout << "<3> Добавить клиента" << endl;
	cout << "<4> Удалить клиента" << endl;
	cout << "<5> Добавить вклад" << endl;
	cout << "<6> Удалить вклад" << endl;
	cout << "<7> Рассчитать сумму вклада на конец срока" << endl;
	cin >> point;
	system("cls");
}

int main() {
	
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	string InputClient = "InputClient.txt", InputVklad = "InputVklad.txt";
	string OutClient = "OutClient.txt", OutVklad = "OutVklad.txt";
	string Calculation = "Calculation.txt";

	int number_of_objects = QuanityOfObjects(InputClient);
 
	Menu();

	while (point != 0) {
		//Просмотр клиентов
		if (point == 1) {
			int quanity_1 = QuanityOfObjects(InputClient);
			Client* client_1 = new Client[quanity_1];
			ReadInformationOfClient(client_1, InputClient);
			WriteInformationClient(client_1, OutClient, quanity_1);
			system("Pause");
			system("cls");
			Menu();
			system("cls");
		}
		//Просмотр вкладов клиентов
		if (point == 2) {
			int quanity_1 = QuanityOfObjects(InputVklad);
			Vklad* vklad_1 = new Vklad[quanity_1];
			ReadInformationOfVklad(vklad_1, InputVklad);
			WriteInformationVklad(vklad_1, OutVklad, quanity_1);
			system("Pause");
			system("cls");
			Menu();
			system("cls");
		}
		//Добавить клиента
		if (point == 3) {
			Personal_Data P_D;
			Date_Birth D_B;
			Address A;
			Passport P;
			Client* client_2 = new Client[number_of_objects + 1];
			ReadInformationOfClient(client_2, InputClient);

			cout << "Ф.И.О.: " << endl; cin >> P_D.Surname >> P_D.Name >> P_D.Patronomic;
			cout << "Серия и номер паспорта: " << endl; cin >> P.Series >> P.Number;
			cout << "Дата рождения: " << endl; cin >> D_B.Day >> D_B.Mounth >> D_B.Year;
			cout << "Адрес: " << endl; cin >> A.Street >> A.number_of_flat >> A.number_of_house;
			cout << "Телефонный номер: " << endl; cin >> P_D.Telephone_number;

			client_2[number_of_objects].SetData(P_D, P, D_B, A);
			WriteInformationClientInPlus(client_2, InputClient, number_of_objects + 1);
			number_of_objects = QuanityOfObjects(InputClient);
			Client* client = new Client[number_of_objects];
			ReadInformationOfClient(client, InputClient);

			system("pause");
			system("cls");
			Menu();
		}
		//Удалить клиента
		if (point == 4) {
			int number;
			cout << "Введите номер клиента, которого вы хотите удалить: "; cin >> number;
			number_of_objects = QuanityOfObjects(InputClient);
			Personal_Data P_D;
			P_D.Name = "";
			P_D.Surname = "";
			P_D.Patronomic = "";
			P_D.Telephone_number = "";
			Date_Birth D_B;
			D_B.Day = "";
			D_B.Mounth = "";
			D_B.Year = "";
			Address A;
			A.number_of_flat = "";
			A.number_of_house = "";
			A.Street = "";
			Passport P;
			P.Number = "";
			P.Series = "";	

			Client* client_2 = new Client[number_of_objects];
			ReadInformationOfClient(client_2, InputClient);
			client_2[number - 1].SetData(P_D, P, D_B, A);
			WriteInformationClientIn(client_2, InputClient, number_of_objects);

			number_of_objects = QuanityOfObjects(InputClient);
			client_2 = new Client[number_of_objects];
			ReadInformationOfClient(client_2, InputClient);

			system("pause");
			system("cls");
			Menu();
		}
		//Добавить вклад
		if (point == 5) {
			int number_of_objects_vklad = QuanityOfObjects(InputVklad);
			string procent;
			string deposit;
			Date_Close D_C;
			Date_Open D_O;
			string Name;
			string Currency;
			Vklad* vklad_2 = new Vklad[number_of_objects_vklad + 1];
			ReadInformationOfVklad(vklad_2, InputVklad);

			cout << "Наименование вклада( накопительный, отпуск, сберегательный): " << endl; cin >> Name;
			cout << "Дата открытия: " << endl; cin>>D_O.Day>>D_O.Mounth>>D_O.Year;
			cout << "Дата закрытия: " << endl; cin >> D_C.Day >> D_C.Mounth >> D_C.Year;
			cout << "Процентная ставка: " << endl; cin >> procent;
			cout << "Сумма вклада: " << endl; cin >> deposit;
			cout << "Валюта: " << endl; cin >> Currency;

			vklad_2[number_of_objects_vklad].SetData(procent, deposit, D_C, D_O, Name, Currency);
			WriteInformationVkladInPlus(vklad_2, InputVklad, number_of_objects_vklad + 1);
			number_of_objects_vklad = QuanityOfObjects(InputVklad);
			Vklad* vklad = new Vklad[number_of_objects_vklad];
			ReadInformationOfVklad(vklad, InputVklad);

			system("pause");
			system("cls");
			Menu();
		}
		//удаление вклада
		if (point == 6) {
			int number;
			cout << "Введите номер вклада, которого вы хотите удалить: "; cin >> number;
			number_of_objects = QuanityOfObjects(InputVklad);
			string procent = "";
			string deposit = "";
			Date_Close D_C;
			D_C.Day = "";
			D_C.Mounth = "";
			D_C.Year = "";
			Date_Open D_O;
			D_O.Day = "";
			D_O.Mounth = "";
			D_O.Year = "";
			string Name = "";
			string Currency = "";

			Vklad* vklad_3 = new Vklad[number_of_objects];
			ReadInformationOfVklad(vklad_3, InputVklad);
			vklad_3[number - 1].SetData(procent, deposit, D_C, D_O, Name, Currency);
			WriteInformationVkladIn(vklad_3, InputVklad, number_of_objects);

			number_of_objects = QuanityOfObjects(InputVklad);
			vklad_3 = new Vklad[number_of_objects];
			ReadInformationOfVklad(vklad_3, InputVklad);

			system("pause");
			system("cls");
			Menu();
		}
		//Рассчитать сумму вклада с процентной ставкой
		if (point == 7) {
			int number;
			int quanity_1 = QuanityOfObjects(InputClient);
			Client* client_7 = new Client[quanity_1];
			ReadInformationOfClient(client_7, InputClient);
			WriteInformationClient(client_7, OutClient, quanity_1);
			Vklad* vklad_7 = new Vklad[quanity_1];
			ReadInformationOfVklad(vklad_7, InputVklad);
			WriteInformationVklad(vklad_7, OutVklad, quanity_1);
			cout << "Введите номер вкладчика: "; cin >> number;
			client_7[number].AddToFileClientCaclulation(Calculation);
			vklad_7[number].AddToFileVkladCaclulation(Calculation);
			system("Pause");
			system("cls");
			Menu();
			system("cls");
		}
	}
}