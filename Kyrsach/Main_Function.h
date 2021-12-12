#pragma once
#include<string>
#include"Client.h"
#include"Vklad.h"
using namespace std;




int QuanityOfObjects(string FileName);

void ReadInformationOfClient(Client* cl, string FileName);

void WriteInformationClient(Client* cl, string FileName, int n);

void WriteInformationClientInPlus(Client* cl, string FileName, int n);

void WriteInformationClientIn(Client* cl, string FileName, int n);



void ReadInformationOfVklad(Vklad* vk, string FileName);

void WriteInformationVklad(Vklad* vk, string FileName, int n);

void WriteInformationVkladInPlus(Vklad* vk, string FileName, int n);

void WriteInformationVkladIn(Vklad* vk, string FileName, int n);
