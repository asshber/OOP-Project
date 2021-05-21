#pragma once
#include<iostream>
#include<string>
#include<vector>
#include<fstream>
#include<conio.h>
using namespace std;
//All Declarations
class vehicles;
class bikes;
class cars;
class trucks;
class customer;
class admin;
//void admin::menu();
//void admin::car();
//void admin::truck();
//void admin::bike();
fstream& operator<<(fstream& file, bikes& obj);
fstream& operator>>(fstream& file, bikes& obj);
fstream& operator<<(fstream& file, cars& obj);
fstream& operator>>(fstream& file, cars& obj);
fstream& operator<<(fstream& file, trucks& obj);
fstream& operator>>(fstream& file, trucks& obj);
ostream& operator<<(ostream& dout, vehicles& obj);
ostream& operator<<(ostream& dout, customer& obj);
