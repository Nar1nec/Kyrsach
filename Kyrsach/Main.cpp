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
//			record << "�.�.�: " << person.Name << " " << person.Surname << " " << person.Patronomic << endl;
//			record << "����� � ����� ��������: " << passport.Series << " " << passport.Number << endl;
//			record << "���� ��������: " << date_birth.Day << ' ' << date_birth.Mounth << ' ' << date_birth.Year << endl;
//			record << "�����: " << address.Street << " " << address.number_of_house << " " << address.number_of_flat << endl;
//			record << "���������� �����: " << person.Telephone_number<<endl;
//			record << "==========================\n";
//		}
//		else cout << "������";
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
//		else cout << "������";
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
//			record << "���� ��������: " << date_open.Day << " " << date_open.Mounth << " " << date_open.Year << endl;
//			record << "���� ��������: " << date_close.Day << " " << date_close.Mounth << " " << date_close.Year << endl;
//			record << "���������� ������: " << Procent << endl;
//			record << "����� ������: " << deposit_status << endl;
//			record << "����� �� ����� �����: " <<(stoi(deposit_status)*stod(Procent)/100)+stoi(deposit_status)<< endl;
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
//			record << "������������ ������: " << Name << endl;
//			record << "���� ��������: " << date_open.Day << " " << date_open.Mounth << " " << date_open.Year << endl;
//			record << "���� ��������: " << date_close.Day << " " << date_close.Mounth << " " << date_close.Year << endl;
//			record << "���������� ������: " << Procent << endl;
//			record << "����� ������: " << deposit_status << endl;
//			record << "������: " << Currency << endl;
//			record << "==========================\n";
//		}
//		else cout << "������";
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
//		else cout << "������";
//		record.close();
//	}
//
//
//};
//
//int point;
//
//void Menu() {
//	cout << "������������, �������� 1 �� �������������� �������: " << endl;
//	cout << "<0> ����� �� ����" << endl;
//	cout << "<1> �������� ��������" << endl;
//	cout << "<2> �������� ������� ��������" << endl;
//	cout << "<3> �������� �������" << endl;
//	cout << "<4> ������� �������" << endl;
//	cout << "<5> �������� �����" << endl;
//	cout << "<6> ������� �����" << endl;
//	cout << "<7> ���������� ����� ������ �� ����� �����" << endl;
//	cin >> point;
//	system("cls");
//}
//
//int QuanityOfObjects(string FileName) {
//	ifstream read(FileName);
//	int quanity;
//	if (read.is_open()) read >> quanity;
//	else cout << "������";
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
//	else cout << "������";
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
//	else cout << "������, �����-�� ���� �� ����� ���� ������";
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
//	else cout << "������, �����-�� ���� �� ����� ���� ������";
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
//	else cout << "������, �����-�� ���� �� ����� ���� ������";
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
//	else cout << "������";
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
//	else cout << "������, �����-�� ���� �� ����� ���� ������";
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
//	else cout << "������, �����-�� ���� �� ����� ���� ������";
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
//	else cout << "������, �����-�� ���� �� ����� ���� ������";
//}
int point;
void Menu() {
	cout << "������������, �������� 1 �� �������������� �������: " << endl;
	cout << "<0> ����� �� ����" << endl;
	cout << "<1> �������� ��������" << endl;
	cout << "<2> �������� ������� ��������" << endl;
	cout << "<3> �������� �������" << endl;
	cout << "<4> ������� �������" << endl;
	cout << "<5> �������� �����" << endl;
	cout << "<6> ������� �����" << endl;
	cout << "<7> ���������� ����� ������ �� ����� �����" << endl;
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
		//�������� ��������
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
		//�������� ������� ��������
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
		//�������� �������
		if (point == 3) {
			Personal_Data P_D;
			Date_Birth D_B;
			Address A;
			Passport P;
			Client* client_2 = new Client[number_of_objects + 1];
			ReadInformationOfClient(client_2, InputClient);

			cout << "�.�.�.: " << endl; cin >> P_D.Surname >> P_D.Name >> P_D.Patronomic;
			cout << "����� � ����� ��������: " << endl; cin >> P.Series >> P.Number;
			cout << "���� ��������: " << endl; cin >> D_B.Day >> D_B.Mounth >> D_B.Year;
			cout << "�����: " << endl; cin >> A.Street >> A.number_of_flat >> A.number_of_house;
			cout << "���������� �����: " << endl; cin >> P_D.Telephone_number;

			client_2[number_of_objects].SetData(P_D, P, D_B, A);
			WriteInformationClientInPlus(client_2, InputClient, number_of_objects + 1);
			number_of_objects = QuanityOfObjects(InputClient);
			Client* client = new Client[number_of_objects];
			ReadInformationOfClient(client, InputClient);

			system("pause");
			system("cls");
			Menu();
		}
		//������� �������
		if (point == 4) {
			int number;
			cout << "������� ����� �������, �������� �� ������ �������: "; cin >> number;
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
		//�������� �����
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

			cout << "������������ ������( �������������, ������, ��������������): " << endl; cin >> Name;
			cout << "���� ��������: " << endl; cin>>D_O.Day>>D_O.Mounth>>D_O.Year;
			cout << "���� ��������: " << endl; cin >> D_C.Day >> D_C.Mounth >> D_C.Year;
			cout << "���������� ������: " << endl; cin >> procent;
			cout << "����� ������: " << endl; cin >> deposit;
			cout << "������: " << endl; cin >> Currency;

			vklad_2[number_of_objects_vklad].SetData(procent, deposit, D_C, D_O, Name, Currency);
			WriteInformationVkladInPlus(vklad_2, InputVklad, number_of_objects_vklad + 1);
			number_of_objects_vklad = QuanityOfObjects(InputVklad);
			Vklad* vklad = new Vklad[number_of_objects_vklad];
			ReadInformationOfVklad(vklad, InputVklad);

			system("pause");
			system("cls");
			Menu();
		}
		//�������� ������
		if (point == 6) {
			int number;
			cout << "������� ����� ������, �������� �� ������ �������: "; cin >> number;
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
		//���������� ����� ������ � ���������� �������
		if (point == 7) {
			int number;
			int quanity_1 = QuanityOfObjects(InputClient);
			Client* client_7 = new Client[quanity_1];
			ReadInformationOfClient(client_7, InputClient);
			WriteInformationClient(client_7, OutClient, quanity_1);
			Vklad* vklad_7 = new Vklad[quanity_1];
			ReadInformationOfVklad(vklad_7, InputVklad);
			WriteInformationVklad(vklad_7, OutVklad, quanity_1);
			cout << "������� ����� ���������: "; cin >> number;
			client_7[number].AddToFileClientCaclulation(Calculation);
			vklad_7[number].AddToFileVkladCaclulation(Calculation);
			system("Pause");
			system("cls");
			Menu();
			system("cls");
		}
	}
}