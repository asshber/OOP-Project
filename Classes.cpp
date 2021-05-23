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
		cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
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
	file << ' ' << obj.get_name() << ';' << obj.get_color() << ' ' << obj.get_stock() << ' ' << obj.get_price() << ' ' << obj.get_horsepower() << ' ' << obj.get_description() << ';' << ' ';
	return file;
}
fstream& operator>>(fstream& file, bikes& obj)
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
	file.get();
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
		cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
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
	file.get();
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
		cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
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
	file.get();
	return file;
}
class customer {
	string name;
	long int num, CNIC, credit_card;
	bool Filer;
	int pin;
	double bill;
	vector<string> cart;
public:
	friend ostream& operator<<(ostream& dout, customer& obj);
	customer()
	{
		bikes::read();
		cars::read();
		trucks::read();
	}
	void write()
	{
		fstream file("customer.txt", ios::app);
		file << *this;
	}
	void menu()
	{
		system("cls");
		cout << "\t\tCustomer Portal\n";
		cout << "\t\t***************\n\n\n";
		cout << "Select the Vehicle you want to add to cart: \n\n";
		cout << "\t 1. Bikes." << endl;
		cout << "\t 2. Cars." << endl;
		cout << "\t 3. Trucks." << endl;
		cout << "\t 4.proceed to checkout" << endl;
		int s;
		cin >> s;
		switch (s)
		{
		case 1:
			bike_menu();
			break;
		case 2:
			car_menu();
			break;
		case 3:
			truck_menu();
			break;
		case 4:
			checkout();
		}

	}
	void bike_menu()
	{
		system("cls");
		cout << "\t\tCustomer Portal\n";
		cout << "\t\t***************\n\n\n";
		bikes::list();
		cout << "\nEnter the S.No of the Bike you want to add to cart: ";
		int n;
		cin >> n;
		n--;
		cart.push_back(b[n].get_name());
		bill += b[n].get_price();
		b[n].set_stock(b[n].get_stock() - 1);
		menu();
	}
	void car_menu()
	{
		system("cls");
		cout << "\t\tCustomer Portal\n";
		cout << "\t\t***************\n\n\n";
		cars::list();
		cout << "\nEnter the S.No of the Car you want to add to cart: ";
		int n;
		cin >> n;
		n--;
		cart.push_back(c[n].get_name());
		system("CLS");
		bill += c[n].get_price();
		c[n].set_stock(c[n].get_stock() - 1);
		menu();
	}
	void truck_menu()
	{
		system("cls");
		cout << "\t\tCustomer Portal\n";
		cout << "\t\t***************\n\n\n";
		trucks::list();
		cout << "\nEnter the S.No of the Truck you want to add to cart: ";
		int n;
		cin >> n;
		n--;
		cart.push_back(t[n].get_name());
		bill += t[n].get_price();
		t[n].set_stock(t[n].get_stock() - 1);
		menu();
	}
	void set_customerNmae(string c) {
		name = c;
	}
	void set_contact(long int con) {
		num = con;
	}
	void set_CNIC(long int n) {
		CNIC = n;
	}
	void set_CREDIT_card(long int r) {
		credit_card = r;
	}
	void set_Filer(bool f) {
		Filer = f;
	}
	void set_pin(int p) {
		pin = p;
	}
	string get_customerName() {
		return name;
	}
	long int get_contact() {
		return num;
	}
	long int get_CNIC() {
		return CNIC;
	}
	long int get_CREDIT_card() {
		return credit_card;
	}
	bool get_Filer() {
		return Filer;
	}
	int get_pin() {
		return pin;
	}
	double get_bill()
	{
		return bill;
	}
	void checkout()
	{
		system("CLS");
		string a;
		cout << "\t Please enter your name" << endl;
		cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
		getline(cin, a);
		set_customerNmae(a);
		cout << endl << "\t Please enter your contact number" << endl;
		long int b;
		cin >> b;
		set_contact(b);
		cout << endl << "\t Please enter your CNIC number" << endl;
		string c;
		cin.ignore();
		getline(cin, c);
	here:
		cout << endl << "\t Please enter your 16 digit long debit card number" << endl;
		string d;
		cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
		getline(cin, d);
		int z = d.size();
		//try
		//{
		//	if (z != 15)
		//	//throw (z);
		//}
		//catch (int)
		//{
		//	goto here;
		//}
		cout << endl << "\t Are you filer?" << endl;
		string e;
		cin >> e;
		here1:
		cout << endl << "\t Please enter your 3 digit long CVV code " << endl;
		string f;
		cin >> f;
		int r = f.size();
		//try
		//{
		//	if (r != 3)
		//		//throw(z);
		//}
		//catch (int)
		//{
		//	goto here1;
		//}
		this->write();
		delete this;
		
		system("cls");
		cout << "\n\n\n\t\t\tThank You for Using Our Software.\n\nPress Any key to exit.";
		cin.ignore();
		cin.get();
		exit(0);
	}
	friend fstream& operator<<(fstream& file, customer& obj);
	friend fstream& operator>>(fstream& file, customer& obj);
};
ostream& operator<<(ostream& dout, customer& obj)
{
	int static i = 1;
	cout << "\n" <<i<<")"<< "\t"<<obj.name<<"\t"<<obj.bill<<"\n";
	for (int f = 0; f < obj.cart.size(); f++)
	{
		cout <<"\t\t\t"<< obj.cart[f] << "\n";
	}
	i++;
	return dout;
}
fstream& operator<<(fstream& file, customer& obj)
{
	file << obj.get_customerName() << ';' << obj.get_CNIC() << ' ' << obj.get_contact() << ' '<<obj.get_bill()<<' ';
	for (int i = 0; i < obj.cart.size(); i++)
	{
		if (i==(obj.cart.size()-1))
		{
			file << obj.cart[i] << ';'<<'*';
		}
		else
			file << obj.cart[i]<< ';'<<' ';
	}
	return file;
}
fstream& operator>>(fstream& file, customer& obj)
{
	string x;
	getline(file, obj.name, ';');
	file >> obj.CNIC;
	file.get();
	file >> obj.num;
	file.get();
	file >> obj.bill;
	file.get();
	obj.cart.clear();
	do
	{
		getline(file, x, ';');
		obj.cart.push_back(x);
	} while (file.get() == ' ');
	/*{
		getline(file, x, ';');
		obj.cart.push_back(x);
		if (file.get() == '*')
		{
			break;
		}
		else if(file.get()==' ')
			continue;
	}*/
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
			system("CLS");
			cout << "\tPlease Enter the password." << endl;
			string s;
			cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
			getline(cin, s);
			if (s == "tryhard")
			{	
				system("CLS");
				cout << "\t WELCOME BACK ADMIN." << endl;
				cout << "\t*********************" << endl << endl << endl << endl;
				cout << "\t1. Modification in vehicles features." << endl;
				cout << "\t2. Change in vehicles." << endl;
				cout << "\t3. View All Vehicles.\n";
				cout << "\t4. Delete a Vehicle.\n";
				cout << "\t5. Return to main menu." << endl;
				cout << "\t6. View purchase history" << endl;
				cout << "\t7. Exit.\n";
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
					{
						cout << "\t CHANGE IN VEHICLE." << endl;
						cout << "\t******************" << endl << endl << endl << endl;
						cout << "\t 1. Addition in cars inventory." << endl;
						cout << "\t 2. Addition in trucks inventory." << endl;
						cout << "\t 3. Addition in Bikes inventory." << endl;
						int s;
						cin >> s;
						system("CLS");
						switch (s)
						{
						case 1: 
						{
							cars obj1;
							obj1.getdata();
							c.push_back(obj1);
							break;
						}
						case 2: 
						{
							trucks obj2;
							obj2.getdata();
							t.push_back(obj2);
							break;
						}
						case 3: 
						{
							bikes obj3;
							obj3.getdata();
							b.push_back(obj3);
							break;
						}
						case 4: 
							menu();
						
						}

					}
					cout << "\nPress Any key to return to the main menu.";
					cin.ignore();
					cin.get();
					menu();
					break;
				}
				case 3:
				{
					cout << "\t WELCOME BACK ADMIN." << endl;
					cout << "\t*********************" << endl << endl << endl << endl;
					cout << "\t1. View All Bikes" << endl;
					cout << "\t2. View All Cars" << endl;
					cout << "\t3. View All Trucks\n";
					cout << "\t4. Exit" << endl;
					int a;
					cin >> a;
					switch (a)
					{
					case 1:
						system("cls");
						cout << "\t WELCOME BACK ADMIN." << endl;
						cout << "\t*********************" << endl << endl << endl << endl;
						cout << "\nS.No\tName\t\tStock\n\n";
						for (int i = 0; i < b.size(); i++)
						{
							cout << i + 1 << b[i];
						}
						break;
					case 2:
						system("cls");
						cout << "\t WELCOME BACK ADMIN." << endl;
						cout << "\t*********************" << endl << endl << endl << endl;
						cout << "\nS.No\tName\t\tStock\n\n";
						for (int i = 0; i < c.size(); i++)
						{
							cout << i + 1 << c[i];
						}
						break;
					case 3:
						system("cls");
						cout << "\t WELCOME BACK ADMIN." << endl;
						cout << "\t*********************" << endl << endl << endl << endl;
						cout << "\nS.No\tName\t\tStock\n\n";
						for (int i = 0; i < t.size(); i++)
						{
							cout << i + 1 << t[i];
						}
						break;
					default:
						cout << "\nYou Entered and Invalid choice\n\nPress any key to Exit.";
						cin.ignore();
						cin.get();
						delete this;
						exit(0);
						break;
					}
					cout << "\n\nPress any key to return to main menu.";
					cin.ignore();
					cin.get();
					menu();
				}
				case 4:
					cout << "\t WELCOME BACK ADMIN." << endl;
					cout << "\t*********************" << endl << endl << endl << endl;
					cout << "\t1. Delete a Bike" << endl;
					cout << "\t2. Delete a Car" << endl;
					cout << "\t3. Delete a Truck\n";
					cout << "\t4. Exit" << endl;
					int a;
					cin >> a;
					switch (a)
					{
						case 1:
							cout << "\t WELCOME BACK ADMIN." << endl;
							cout << "\t*********************" << endl << endl << endl << endl;
							bikes::list();
							cout << "\n\nEnter the S.No of the bike you want to delete: ";
							cin >> a;
							a--;
							b.erase(b.begin() + a);
							break;
						case 2:
							cout << "\t WELCOME BACK ADMIN." << endl;
							cout << "\t*********************" << endl << endl << endl << endl;
							cars::list();
							cout << "\n\nEnter the S.No of the Car you want to delete: ";
							cin >> a;
							a--;
							c.erase(c.begin() + a);
							break;
						case 3:
							cout << "\t WELCOME BACK ADMIN." << endl;
							cout << "\t*********************" << endl << endl << endl << endl;
							trucks::list();
							cout << "\n\nEnter the S.No of the Truck you want to delete: ";
							cin >> a;
							a--;
							t.erase(t.begin() + a);
							break;
					}
					break;
				case 5:
				{
					menu();
				}
				case 6:
				{
					fstream file("customer.txt", ios::in);
					customer obj;
					while (file >> obj)
					{
						cout << obj;
					}
					cout << "\n\n\nPress Any key to return to main menu.";
					cin.ignore();
					cin.get();
					menu();
					break;
				}
					
				case 7:
					delete this;
					exit(0);
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
					delete this;
					exit(0);
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
					delete this;
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
	system("CLS");
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
					delete this;
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
	system("CLS");
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
					delete this;
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
ostream& operator<<(ostream& dout, vehicles& obj)
{
	cout << "\t" << obj.get_name() << "\t\t" << obj.get_stock()<<"\n";
	return dout;
}
int main()
{
	admin* obj=new admin();
	cout << "\tWELCOME TO SASUKE GARAGE" << endl;
	cout << "\t*************************" << endl << endl << endl << endl;
	cout << "\tPlease Choose any one:" << endl;
	cout << "\t1.Customer." << endl;
	cout << "\t2.Admin." << endl;
	cout << "\t3.Exit." << endl;
	int a;
	cin >> a;
	switch (a)
	{
	case 1:
	{
		customer* obj1 = new customer();
		obj1->menu();
		break;
	}
	case 2:
	{
		obj->menu();
		break;
	}
	case 3:
	{
		delete obj;
		exit(0);
	}
	}


	//customer test;
	////test.menu();
	//fstream file("customer.txt");
	//file >> test;
	//file.close();
	/////*admin* obj = new admin();;
	////obj->menu();*/
	////bikes::read();
	////cout << "\nS.No\tName\t\tStock\n\n";
	////for (int i = 0; i < b.size(); i++)
	////{
	////	cout << i + 1 << b[i];
	////}
	////bikes::write();
}
	
//pohoncho lamao nub H3h3