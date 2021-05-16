#include"allheaders.h"
#include<string>
vector<bikes> b;
vector<cars> c;
vector<trucks> t;
class vehicles
{
private:
	string name, color;
	int stock, horsepower;
	string description;
	double price;
public:
	void set_price(double x)
	{
		price = x;
	}
	void set_color(string c) {
		color = c;
	}
	void set_name(string n) {
		name = n;
	}
	void set_stock(int s) {
		stock = s;
	}
	void set_horsepower(int h) {
		horsepower = h;
	}
	void set_description(string d) {
		description = d;
	}
	double get_price()
	{
		return price;
	}
	string get_color() {
		return color;
	}
	string get_name() {
		return name;
	}
	int get_stock() {
		return stock;
	}
	int get_horsepower() {
		return horsepower;
	}
	string get_description() {
		return description;
	}
	virtual void getdata() = 0;
};
class bikes :public vehicles
{
public:
	void getdata()
	{
		string x;
		int y;
		double z;
		//cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
		cout << "\nEnter the Name of Bike: ";
		getline(cin, x);
		set_name(x);
		cout << "\nEnter the Color of Bike: ";
		cin >> x;
		set_color(x);
		cout << "\nEnter the availble units: ";
		cin >> y;
		set_stock(y);
		cout << "\nEnter the price: ";
		cin >> z;
		set_price(z);
		cout << "\nEnter the horespower of the engine: ";
		cin >> y;
		cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
		set_horsepower(y);
		cout << "\nEnter the Bike's Description: ";
		getline(cin, x);
		set_description(x);
	}
	static void read()
	{
		bikes arr;
		fstream file;
		file.open("bikes.txt", ios::in);
		while (file >> arr)
			b.push_back(arr);
		file.close();
	}
	static void write()
	{
		fstream file;
		file.open("bikes.txt", ios::out);
		for (int i = 0; i < b.size(); ++i)
		{
			file << b[i];
		}
		file.close();
	}
};
fstream& operator<<(fstream& file, bikes& obj)
{
	file << ' ' << obj.get_name() << ';' << obj.get_color() << ' ' << obj.get_stock() <<' '<<obj.get_price()<< ' ' << obj.get_horsepower() << ' ' << obj.get_description() << ';';
	return file;
}
fstream& operator>>(fstream& file, bikes& obj)
{
	string x;
	int y;
	double z;
	file.get();
	getline(file, x,';');
	obj.set_name(x);
	file >> x;
	obj.set_color(x);
	file.get();
	file >> y;
	obj.set_stock(y);
	file.get();
	file >> z;
	obj.set_price(z);
	file.get();
	file >> y;
	obj.set_horsepower(y);
	file.get();
	getline(file, x, ';');
	obj.set_description(x);
	return file;
}
class cars :public vehicles
{
	string transmission;
public:
	void getdata()
	{
		string x;
		int y;
		double z;
		//cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
		cout << "\nEnter the Name of Car: ";
		getline(cin, x);
		set_name(x);
		cout << "\nEnter the Color of Car: ";
		cin >> x;
		set_color(x);
		cout << "\nEnter the availble units: ";
		cin >> y;
		set_stock(y);
		cout << "\nEnter the price: ";
		cin >> z;
		set_price(z);
		cout << "\nEnter the horespower of the engine: ";
		cin >> y;
		set_horsepower(y);
		cout << "\nEnter the Transmission of the Car: ";
		cin >> x;
		set_transmission(x);
		cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
		cout << "\nEnter the Car's Description: ";
		getline(cin, x);
		set_description(x);
	}
	void set_transmission(string& x)
	{
		transmission = x;
	}
	string get_transmission()
	{
		return transmission;
	}
	static void read()
	{
		cars arr;
		fstream file;
		file.open("cars.txt", ios::in);
		while (file >> arr)
		{
			c.push_back(arr);
		}
		file.close();
	}
	static void write()
	{
		fstream file;
		file.open("cars.txt", ios::out);
		for (int i = 0; i < c.size(); ++i)
		{
			file << c[i];
		}
		file.close();
	}
};
fstream& operator<<(fstream& file, cars& obj)
{
	file << ' ' << obj.get_name() << ';' << obj.get_color() << ' ' << obj.get_stock() << ' ' << obj.get_price() << ' ' << obj.get_horsepower() << ' ' << obj.get_description() << ';' << obj.get_transmission() << ' ';
	return file;
}
fstream& operator>>(fstream& file, cars& obj)
{
	string x;
	int y;
	double z;
	file.get();
	getline(file, x, ';');
	obj.set_name(x);
	file >> x;
	obj.set_color(x);
	file.get();
	file >> y;
	obj.set_stock(y);
	file.get();
	file >> z;
	obj.set_price(z);
	file.get();
	file >> y;
	obj.set_horsepower(y);
	file.get();
	getline(file, x, ';');
	obj.set_description(x);
	file >> x;
	obj.set_transmission(x);
	return file;
}
class trucks : public vehicles
{
	int loading_capacity;
public:
	void getdata()
	{
		string x;
		int y;
		double z;
		//cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
		cout << "\nEnter the Name of Truck: ";
		getline(cin, x);
		set_name(x);
		cout << "\nEnter the Color of Truck: ";
		cin >> x;
		set_color(x);
		cout << "\nEnter the availble units: ";
		cin >> y;
		set_stock(y);
		cout << "\nEnter the price: ";
		cin >> z;
		set_price(z);
		cout << "\nEnter the Loading Capapcity of the truck: ";
		cin >> y;
		set_loading_capacity(y);
		cout << "\nEnter the horespower of the engine: ";
		cin >> y;
		cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
		set_horsepower(y);
		cout << "\nEnter the Truck's Description: ";
		getline(cin, x);
		set_description(x);
	}
	void set_loading_capacity(int& x)
	{
		loading_capacity = x;
	}
	int get_loading_capacity()
	{
		return loading_capacity;
	}
	static void write()
	{
		fstream file;
		file.open("trucks.txt", ios::out);
		for (int i = 0; i < t.size(); ++i)
		{
			file << t[i];
		}
		file.close();
	}
	static void read()
	{
		trucks arr;
		fstream file;
		file.open("trucks.txt", ios::in);
		while (file >> arr)
		{
			t.push_back(arr);
		}
		file.close();
	}
};
fstream& operator<<(fstream& file, trucks& obj)
{
	file << ' ' << obj.get_name() << ';' << obj.get_color() << ' ' << obj.get_stock() << ' ' << obj.get_price() << ' ' << obj.get_horsepower() << ' ' << obj.get_description() << ';' << obj.get_loading_capacity() << ' ';
	return file;
}
fstream& operator>>(fstream& file, trucks& obj)
{
	string x;
	int y;
	double z;
	file.get();
	getline(file, x, ';');
	obj.set_name(x);
	file >> x;
	obj.set_color(x);
	file.get();
	file >> y;
	obj.set_stock(y);
	file.get();
	file >> z;
	obj.set_price(z);
	file.get();
	file >> y;
	obj.set_horsepower(y);
	file.get();
	getline(file, x, ';');
	obj.set_description(x);
	file >> y;
	obj.set_loading_capacity(y);
	return file;
}
class admin
{
public:
	admin()
	{
		trucks::read();
		cars::read();
		bikes::read();
	}
	void car();
	void truck();
	void bike();
	
	void menu()
	{

		cout << "\t ADMIN CONSOLE." << endl;
		cout << "\t****************" << endl << endl << endl << endl;
		cout << "\t Please choose an admin operation." << endl;
		cout << "\t 1. Modification in inventory." << endl;
		cout << "\t 2. Modification in stock." << endl;
		cout << "\t 3.Exit" << endl;
		int a;
		cin >> a;
		system("CLS");
		switch (a == 1)
		{
		case 1:
		{
			cout << "\t MODIFICATION IN INVENTORY." << endl;
			cout << "\t****************************" << endl << endl << endl << endl;
			cout << "\t 1. Modification in cars inventory." << endl;
			cout << "\t 2. Modification in trucks inventory." << endl;
			cout << "\t 3. Modification in Bikes inventory." << endl;
			int a;
			cin >> a;
			system("CLS");
			switch (a == 1)
			{
			case 1:
			{	
				car();
			}
			case 0:
			{
				switch (a == 2)
				{
				case 1:
				{
					truck();
				}
				case 0:
				{
					switch (a == 3)
					{
					case 1:
					{
						bike();
					}
					}
				}
				}
			}
			}
		}
		case 0:
		{
			switch (a == 2)
			{
			case 1:
			{
				cout << "change stock";
			}
			case 0:
			{
				switch (a == 3)
				{
				case 1:
				{
					cout << "break";
				}
				}
			}
			}
		}
		}
	}
	~admin()
	{
		trucks::write();
		cars::write();
		bikes::write();
	}
};
void admin::car()
{
	//for car
	cout << "\t MODIFICATION CARS IN INVENTORY." << endl;
	cout << "\t*********************************" << endl << endl << endl << endl;
	cout << "\t 1. Modify price" << endl;
	cout << "\t 2. Modify color" << endl;
	cout << "\t 3. Modify stock" << endl;
	cout << "\t 4. Modify horsepower" << endl;
	cout << "\t 5. Modify description" << endl;
	cout << "\t 6. Modify name" << endl;
	int a;
	cin >> a;
	system("CLS");
	switch (a == 1)
	{
	case 1:
	{
		int a;
		cout << "Enter new price" << endl;
		cin >> a;
		for (int i = 0; i < c.size(); i++)
		{
			c[i].set_price(a);
		}
		system("CLS");
		menu();

	}
	case 0:
	{
		switch (a == 2)
		{
		case 1:
		{
			string a;
			cout << "Enter new color" << endl;
			cin >> a;
			for (int i = 0; i < c.size(); i++)
			{
				c[i].set_color(a);
			}
			system("CLS");
			menu();
		}
		case 0:
		{
			switch (a == 3)
			{
			case 1:
			{
				int a;
				cout << "Enter new stock" << endl;
				cin >> a;
				for (int i = 0; i < c.size(); i++)
				{
					c[i].set_stock(a);
				}
				system("CLS");
				menu();
			}
			case 0:
			{
				switch (a == 4)
				{
				case 1:
				{
					int a;
					cout << "Enter new horse power" << endl;
					cin >> a;
					for (int i = 0; i < c.size(); i++)
					{
						c[i].set_horsepower(a);
					}
					system("CLS");
					menu();
				}
				case 0:
				{
					switch (a == 5)
					{
					case 1:
					{
						string a;
						cout << "Enter new description" << endl;
						cin.ignore();
						getline(cin, a);
						for (int i = 0; i < c.size(); i++)
						{
							c[i].set_description(a);
						}
						system("CLS");
						menu();
					}
					case 0:
					{
						switch (a == 6)
						{
						case 1:
						{
							string a;
							cout << "Enter new name" << endl;
							cin.ignore();
							getline(cin, a);
							for (int i = 0; i < c.size(); i++)
							{
								c[i].set_name(a);
							}
							system("CLS");
							menu();
						}
						case 0:
						{
							system("CLS");
							menu();
						}
						}
					}
					}
				}
				}

			}
			}
		}
		}
	}
	}
}
void admin::truck()
{
	//for truck
	cout << "\t MODIFICATION IN TRUCKS INVENTORY." << endl;
	cout << "\t************************************" << endl << endl << endl << endl;
	cout << "\t 1. Modify price" << endl;
	cout << "\t 2. Modify color" << endl;
	cout << "\t 3. Modify stock" << endl;
	cout << "\t 4. Modify horsepower" << endl;
	cout << "\t 5. Modify description" << endl;
	cout << "\t 6. Modify name" << endl;
	int a;
	cin >> a;
	system("CLS");
	switch (a == 1)
	{
	case 1:
	{
		int a;
		cout << "Enter new price" << endl;
		cin >> a;
		for (int i = 0; i < t.size(); i++)
		{
			t[i].set_price(a);
		}
		system("CLS");
		menu();
	}
	case 0:
	{
		switch (a == 2)
		{
		case 1:
		{
			string a;
			cout << "Enter new color" << endl;
			cin >> a;
			for (int i = 0; i < t.size(); i++)
			{
				t[i].set_color(a);
			}
			system("CLS");
			menu();
		}
		case 0:
		{
			switch (a == 3)
			{
			case 1:
			{
				int a;
				cout << "Enter new stock" << endl;
				cin >> a;
				for (int i = 0; i < t.size(); i++)
				{
					t[i].set_stock(a);
				}
				system("CLS");
				menu();
			}
			case 0:
			{
				switch (a == 4)
				{
				case 1:
				{
					int a;
					cout << "Enter new horse power" << endl;
					cin >> a;
					for (int i = 0; i < t.size(); i++)
					{
						t[i].set_horsepower(a);
					}
					system("CLS");
					menu();
				}
				case 0:
				{
					switch (a == 5)
					{
					case 1:
					{
						string a;
						cout << "Enter new description" << endl;
						cin.ignore();
						getline(cin, a);
						for (int i = 0; i < t.size(); i++)
						{
							t[i].set_description(a);
						}
						system("CLS");
						menu();
					}
					case 0:
					{
						switch (a == 6)
						{
						case 1:
						{
							string a;
							cout << "Enter new name" << endl;
							cin.ignore();
							getline(cin, a);
							for (int i = 0; i < t.size(); i++)
							{
								t[i].set_name(a);
							}
							system("CLS");
							menu();
						}
						case 0:
						{
							system("CLS");
							menu();
						}
						}
					}
					}
				}
				}
			}
			}
		}
		}
	}
	}
}
void admin::bike()
{
	//for bike
	cout << "\t MODIFICATION IN	BIKES INVENTORY." << endl;
	cout << "\t**********************************" << endl << endl << endl << endl;
	cout << "\t 1. Modify price" << endl;
	cout << "\t 2. Modify color" << endl;
	cout << "\t 3. Modify stock" << endl;
	cout << "\t 4. Modify horsepower" << endl;
	cout << "\t 5. Modify description" << endl;
	cout << "\t 6. Modify name" << endl;
	int a;
	cin >> a;
	system("CLS");
	switch (a == 1)
	{
	case 1:
	{
		int a;
		cout << "Enter new price" << endl;
		cin >> a;
		for (int i = 0; i < b.size(); i++)
		{
			b[i].set_price(a);
		}
		system("CLS");
		menu();
	}
	case 0:
	{
		switch (a == 2)
		{
		case 1:
		{
			string a;
			cout << "Enter new color" << endl;
			cin >> a;
			for (int i = 0; i < b.size(); i++)
			{
				b[i].set_color(a);
			}
			system("CLS");
			menu();
		}
		case 0:
		{
			switch (a == 3)
			{
			case 1:
			{
				int a;
				cout << "Enter new stock" << endl;
				cin >> a;
				for (int i = 0; i < b.size(); i++)
				{
					b[i].set_stock(a);
				}
				system("CLS");
				menu();
			}
			case 0:
			{
				switch (a == 4)
				{
				case 1:
				{
					int a;
					cout << "Enter new horse power" << endl;
					cin >> a;
					for (int i = 0; i < b.size(); i++)
					{
						b[i].set_horsepower(a);
					}
					system("CLS");
					menu();
				}
				case 0:
				{
					switch (a == 5)
					{
					case 1:
					{
						string a;
						cout << "Enter new description" << endl;
						cin.ignore();
						getline(cin, a);
						for (int i = 0; i < b.size(); i++)
						{
							b[i].set_description(a);
						}
						system("CLS");
						menu();
					}
					case 0:
					{
						switch (a == 6)
						{
						case 1:
						{
							string a;
							cout << "Enter new name" << endl;
							cin.ignore();
							getline(cin, a);
							for (int i = 0; i < b.size(); i++)
							{
								b[i].set_name(a);
							}
							system("CLS");
							menu();
						}
						case 0:
						{
							system("CLS");
							menu();
						}
						}
					}
					}
				}
				}
			}
			}
		}
		}
	}
	}
}
int main()
	{
		admin obj;
		obj.menu();
	}
	//pohoncho lamao nub