class two_wheeler
{
	double virtual getprice() = 0;
private:
	string color, name;
	int stock, horsepower;
	string description;
protected:
	void set_color(string color) {
		color = color;
	 }
	void set_name(string name) {
		name = name;
	}
	int set_stock(int stock) {
		stock = stock;
	}
	int set_horsepower(int horsepower) {
		horsepower = horsepower;
	}
	void set_description(string description) {
		description = description;
	}
	void get_color() {
		return color;
	}
	void get_name() {
		return name;
	}
	int get_stock() {
		return stock;
	}
	int get_horsepower() {
		return horsepower;
	}
	void get_description() {
		return description;
	}

};
class suzuki :public two_wheeler
{
private:
	friend class Admin;
	double price;
protected:
	double setprice(double price) {
		price = price;

	}
	double getprice() 
	{
		return price;
	}
};
class yamaha :public two_wheeler
{
private:
	friend class Admin;
	double price;
protected:
	double setprice(double price) {
		price = price;

	}
	double getprice()
	{
		return price;
	}
};
class harley_davidson :public two_wheeler
{
private:
	friend class Admin;
	double price;
protected:
	double setprice(double price) {
		price = price;

	}
	double getprice()
	{
		return price;
	}
};
class four_wheeler
{
private:
	double virtual getprice() = 0;
	string color, name;
	int stock, horsepower;
	string description;
protected:
	void set_color(string color) {
		color = color;
	}
	void set_name(string name) {
		name = name;
	}
	int set_stock(int stock) {
		stock = stock;
	}
	int set_horsepower(int horsepower) {
		horsepower = horsepower;
	}
	void set_description(string description) {
		description = description;
	}
	void get_color() {
		return color;
	}
	void get_name() {
		return name;
	}
	int get_stock() {
		return stock;
	}
	int get_horsepower() {
		return horsepower;
	}
	void get_description() {
		return description;
	}

};
class audi :public four_wheeler
{
private:
	friend class Admin;
	double price;
protected:
	double setprice(double price) {
		price = price;

	}
	double getprice()
	{
		return price;
	}
};
class bmw : public four_wheeler
{
private:
	friend class Admin;
	double price;
protected:
	double setprice(double price) {
		price = price;
	}
	double getprice()
	{
		return price;
	}
};
class tesla : public four_wheeler
{
private:
	friend class Admin;
	double price;
protected:
	double setprice(double price) {
		price = price;


	}
	double getprice()
	{
		return price;
	}
};
class six_wheeler
{
private:
	double virtual getprice() = 0;
private:
	string color, name;
	int stock, horsepower;
	string description;
protected:
	void set_color(string color) {
		color = color;
	}
	void set_name(string name) {
		name = name;
	}
	int set_stock(int stock) {
		stock = stock;
	}
	int set_horsepower(int horsepower) {
		horsepower = horsepower;
	}
	void set_description(string description) {
		description = description;
	}
	void get_color() {
		return color;
	}
	void get_name() {
		return name;
	}
	int get_stock() {
		return stock;
	}
	int get_horsepower() {
		return horsepower;
	}
	void get_description() {
		return description;
	}

};
class isuzu : public six_wheeler
{
private:
	friend class Admin;
		double price;
protected:
	double setprice(double price) {
		price = price;


	}
	double getprice()
	{
		return price;
	}
};
class hyundai : public six_wheeler
{
private:
	friend class Admin;
	double price;
protected:
	double setprice(double price) {
		price = price;


	}
	double getprice()
	{
		return price;
	}
};
class volvo : public six_wheeler
{
private:
	friend class Admin;
	double price;
protected:
	double setprice(double price) {
		price = price;


	}
	double getprice()
	{
		return price;
	}
};
class Admin
{

};
int main()
{
	volvo obj;
}
//phoncho