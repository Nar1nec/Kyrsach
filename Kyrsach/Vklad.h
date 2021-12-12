#pragma once
#include<string>
using namespace std;
struct Date_Open {
	string Day,
		Mounth,
		Year;
};

struct Date_Close {
	string Day,
		Mounth,
		Year;
};
class Vklad {
private:
	string Procent;
	string deposit_status;
	double sum;
	Date_Close date_close;
	Date_Open date_open;
	string Name;
	string Currency;

public:
	Vklad();
	Vklad(string proc, string d_s, Date_Open d_o, string name, Date_Close d_c, string cur);
	~Vklad() {};

	void AddToFileVkladCaclulation(string FileName);
	void SetData(string proc, string deposit, Date_Close d_c, Date_Open d_o, string name, string cur);
	void AddToFileVkladOut(string FileName);
	void AddToFileVkladIn(string FileName);


};