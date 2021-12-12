#pragma once
#include<string>
using namespace std;

struct Personal_Data {
	string Name,
		Surname,
		Patronomic,
		Telephone_number;
};

struct Address {
	string Street,
		number_of_house,
		number_of_flat;
};

struct Passport {
	string Number,
		Series;
};

struct Date_Birth {
	string Day,
		Mounth,
		Year;
};

class Client {
private:
	int Number;
	Personal_Data person;
	Passport passport;
	Date_Birth date_birth;
	Address address;
public:
	Client();
	~Client() {};

	void SetData(Personal_Data p_d, Passport pass, Date_Birth d_b, Address a);
	void AddToFileClientCaclulation(string FileName);
	void AddToFileClientOut(string FileName);
	void AddToFileClientIn(string FileName);
};
