#include"allheaders.h"

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
	static void list()
	{
		cout << "\nS.No" << "\t" << "Name of Bikes" << "\n\n";
		for (int i = 0; i < b.size(); i++)
		{
			cout << i + 1 << "\t" << b[i].get_name() << "\n";
		}
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
	static void list()
	{
		cout << "\nS.No" << "\t" << "Name of Cars" << "\n\n";
		for (int i = 0; i < c.size(); i++)
		{
			cout << i + 1 << ": " << c[i].get_name() << "\n";
		}
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
	static void list()
	{
		cout << "\nS.No" << "\t" << "Name of Trucks" << "\n\n";
		for (int i = 0; i < t.size(); i++)
		{
			cout << i + 1 << "\t" << t[i].get_name() << "\n";
		}
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
	void car();
	void truck();
	void bike();
	admin()
	{
		trucks::read();
		cars::read();
		bikes::read();
	}
	void menu()
	{
		cout << "\tWELCOME TO SASUKE GARAGE" << endl;
		cout << "\t*************************" << endl << endl << endl << endl;
		cout << "\tPlease Choose any one:" << endl;
		cout << "\t1.Customer." << endl;
		cout << "\t2.Admin." << endl;
		int a;
		cin >> a;
		switch (a)
	{
		case 1:
		{
			cout << "CUSTOMER";
			break;
		}
		case 2:
		{
			system("CLS");
			cout << "\tPlease Enter the password." << endl;
			string a;
			cin.ignore();
			getline(cin, a);
			system("CLS");
			if (a == "tryhard")
			{

				cout << "\t WELCOME BACK ADMIN." << endl;
				cout << "\t*********************" << endl << endl << endl << endl;
				cout << "\t1. Modification in vehicles features." << endl;
				cout << "\t2. Change in vehicles." << endl;
				cout << "\t3. Return to main menu." << endl;
				int a;
				cin >> a;
				system("CLS");
				switch (a)
				{
				case 1:
				{
					cout << "\t MODIFICATION IN VEHICLE FEATURES." << endl;
					cout << "\t***********************************" << endl << endl << endl << endl;
					cout << "\t 1. Modification in cars inventory." << endl;
					cout << "\t 2. Modification in trucks inventory." << endl;
					cout << "\t 3. Modification in Bikes inventory." << endl;
					int a;
					cin >> a;
					system("CLS");
					switch (a)
					{
					case 1:
					{
						car();
					}
					case 2:
					{
						truck();
					}
					case 3:
					{
						bike();
					}
					}

				}
				case 2:
				{
					// change in vehicles.
				}
				case 3:
				{
					menu();
				}
				}

			}
			else
			{
				system("CLS");
				cout << "\tWrong password !" << endl;
				cout << "\tDo you want to go back?" << endl;
				cout << "\t1. Yes " << endl;
				cout << "\t2. No" << endl;
				int a;
				cin >> a;
				system("CLS");
				switch (a)
				{
				case 1:
				{
					menu();
				}
				case 0:
				{
					exit(0);
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
	cars::list();
	cout << endl;
	int a;
	cout << "Enter the serial number of car you want to modify?" << endl;
	cin >> a;
	system("CLS");
	while (a)
	{
		cout << "\t MODIFICATION CAR FEATURES IN INVENTORY." << endl;
		cout << "\t*********************************" << endl << endl << endl << endl;
		cout << "\t 1. Modify price" << endl;
		cout << "\t 2. Modify color" << endl;
		cout << "\t 3. Modify stock" << endl;
		cout << "\t 4. Modify horsepower" << endl;
		cout << "\t 5. Modify description" << endl;
		cout << "\t 6. Modify name" << endl;
		int d;
		cin >> d;
		system("CLS");
		switch (d)
		{
		case 1:
		{
			cout << "Please Enter new price?";
			float b;
			cin >> b;
			system("CLS");
			try
			{
				if (b < 0)
					throw 1;
			}
			catch (int)
			{
				cout << "You entered wrong price" << endl;
				cout << "return to main menu?" << endl;
				cout << "1.Yes" << endl;
				cout << "2.No" << endl;
				int k;
				cin >> k;
				if (k == 1)
				{
					system("CLS");
					menu();
				}
				else
				{
					exit(0);
				}
			}

			for (int i = a - 1; i < a; i++)
			{
				c[i].set_price(b);
			}
			system("CLS");
			menu();
		}
		case 2:
		{
			cout << "Please Enter new color?";
			string b;
			cin >> b;
			for (int i = a - 1; i < a; i++)
			{
				c[i].set_color(b);
			}
			system("CLS");
			menu();
		}
		case 3:
		{
			cout << "Please Enter new stock?";
			int b;
			cin >> b;
			for (int i = a - 1; i < a; i++)
			{
				c[i].set_stock(b);
			}
			system("CLS");
			menu();
		}
		case 4:
		{
			cout << "Please Enter new horse power?";
			int b;
			cin >> b;
			for (int i = a - 1; i < a; i++)
			{
				c[i].set_horsepower(b);
			}
			system("CLS");
			menu();
		}
		case 5:
		{
			cout << "Please Enter new description?";
			string b;
			cin.ignore();
			getline(cin, b);
			for (int i = a - 1; i < a; i++)
			{
				c[i].set_description(b);
			}
			system("CLS");
			menu();
		}
		case 6:
		{
			cout << "Please Enter new name?";
			string b;
			cin.ignore();
			getline(cin, b);
			for (int i = a - 1; i < a; i++)
			{
				c[i].set_name(b);
			}
			system("CLS");
			menu();
		}
		case 7:
		{
			menu();
		}
		}
	}
}
void admin::truck()
{
	trucks::list();
	cout << endl;
	int a;
	cout << "Enter the serial number of car you want to modify?" << endl;
	cin >> a;
	while (a)
	{
		cout << "\t MODIFICATION OF TRUCK FEATURES IN INVENTORY." << endl;
		cout << "\t*********************************" << endl << endl << endl << endl;
		cout << "\t 1. Modify price" << endl;
		cout << "\t 2. Modify color" << endl;
		cout << "\t 3. Modify stock" << endl;
		cout << "\t 4. Modify horsepower" << endl;
		cout << "\t 5. Modify description" << endl;
		cout << "\t 6. Modify name" << endl;
		int d;
		cin >> d;
		system("CLS");
		switch (d)
		{
		case 1:
		{
			cout << "Please Enter new price?";
			float b;
			cin >> b;
			system("CLS");
			try
			{
				if (b < 0)
					throw 1;
			}
			catch (int)
			{
				cout << "You entered wrong price" << endl;
				cout << "return to main menu?" << endl;
				cout << "1.Yes" << endl;
				cout << "2.No" << endl;
				int k;
				cin >> k;
					if (k == 1)
					{
						system("CLS");
						menu();

					}
					else
					{
						exit(0);
					}

			}
			for (int i = a - 1; i < a; i++)
			{
				t[i].set_price(b);
			}
			system("CLS");
			menu();
		}
		case 2:
		{
			cout << "Please Enter new color?";
			string b;
			cin >> b;
			for (int i = a - 1; i < a; i++)
			{
				t[i].set_color(b);
			}
			system("CLS");
			menu();
		}
		case 3:
		{
			cout << "Please Enter new stock?";
			int b;
			cin >> b;
			for (int i = a - 1; i < a; i++)
			{
				t[i].set_stock(b);
			}
			system("CLS");
			menu();
		}
		case 4:
		{
			cout << "Please Enter new horse power?";
			int b;
			cin >> b;
			for (int i = a - 1; i < a; i++)
			{
				t[i].set_horsepower(b);
			}
			system("CLS");
			menu();
		}
		case 5:
		{
			cout << "Please Enter new description?";
			string b;
			cin.ignore();
			getline(cin, b);
			for (int i = a - 1; i < a; i++)
			{
				t[i].set_description(b);
			}
			system("CLS");
			menu();
		}
		case 6:
		{
			cout << "Please Enter new name?";
			string b;
			cin.ignore();
			getline(cin, b);
			for (int i = a - 1; i < a; i++)
			{
				t[i].set_name(b);
			}
			system("CLS");
			menu();
		}
		case 7:
		{
			menu();
		}
		}
	}
}
void admin::bike()
{
	bikes::list();
	cout << endl;
	int a;
	cout << "Enter the serial number of car you want to modify?" << endl;
	cin >> a;
	while (a)
	{
		cout << "\t MODIFICATION OF BIKE FEATURES IN INVENTORY." << endl;
		cout << "\t**********************************************" << endl << endl << endl << endl;
		cout << "\t 1. Modify price" << endl;
		cout << "\t 2. Modify color" << endl;
		cout << "\t 3. Modify stock" << endl;
		cout << "\t 4. Modify horsepower" << endl;
		cout << "\t 5. Modify description" << endl;
		cout << "\t 6. Modify name" << endl;
		int d;
		cin >> d;
		system("CLS");
		switch (d)
		{
		case 1:
		{
			cout << "Please Enter new price?";
			float x;
			cin >> x;
			system("CLS");
			try
			{
				if (x < 0)
					throw 1;
			}
			catch (int)
			{
				cout << "You entered wrong price" << endl;
				cout << "return to main menu?" << endl;
				cout << "1.Yes" << endl;
				cout << "2.No" << endl;
				int k;
				cin >> k;
				if (k == 1)
				{
					system("CLS");
					menu();
				}
				else
				{
					exit(0);
				}

			}
			for (int i = a - 1; i < a; i++)
			{
				b[i].set_price(x);
			}
			system("CLS");
			menu();
		}
		case 2:
		{
			cout << "Please Enter new color?";
			string x;
			cin >> x;
			for (int i = a - 1; i < a; i++)
			{
				b[i].set_color(x);
			}
			system("CLS");
			menu();
		}
		case 3:
		{
			cout << "Please Enter new stock?";
			int x;
			cin >> x;
			for (int i = a - 1; i < a; i++)
			{
				b[i].set_stock(x);
			}
			system("CLS");
			menu();
		}
		case 4:
		{
			cout << "Please Enter new horse power?";
			int x;
			cin >> x;
			for (int i = a - 1; i < a; i++)
			{
				b[i].set_horsepower(x);
			}
			system("CLS");
			menu();
		}
		case 5:
		{
			cout << "Please Enter new description?";
			string x;
			cin.ignore();
			getline(cin, x);
			for (int i = a - 1; i < a; i++)
			{
				b[i].set_description(x);
			}
			system("CLS");
			menu();
		}
		case 6:
		{
			cout << "Please Enter new name?";
			string x;
			cin.ignore();
			getline(cin, x);
			for (int i = a - 1; i < a; i++)
			{
				b[i].set_name(x);
			}
			system("CLS");
			menu();
		}
		case 7:
		{
			menu();
		}
		}
	}
}

int main()
	{
	admin obj;
	obj.menu();
	}
	//pohoncho lamao nub H3h3