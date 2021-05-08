#pragma once
#include<iostream>
#include<string>
#include<vector>
#include<fstream>
using namespace std;
//All Declarations
class vehicles;
class bikes;
class cars;
class trucks;
fstream& operator<<(fstream& file, bikes& obj);
fstream& operator>>(fstream& file, bikes& obj);
fstream& operator<<(fstream& file, cars& obj);
fstream& operator>>(fstream& file, cars& obj);
fstream& operator<<(fstream& file, trucks& obj);
fstream& operator>>(fstream& file, trucks& obj);
