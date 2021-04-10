class two_wheeler
{
	double virtual getprice() {}
};
class suzuki :public two_wheeler
{
private:
	friend class Admin;
	double price;
private:
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
private:
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
private:
	double getprice()
	{
		return price;
	}
};
class four_wheeler
{
private:
	double virtual getprice() {}
};
class audi :public four_wheeler
{
private:
	friend class Admin;
	double price;
private:
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
private:
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
private:
	double getprice()
	{
		return price;
	}
};
class six_wheeler
{
private:
	double virtual getprice() {}
};
class isuzu : public six_wheeler
{
private:
	friend class Admin;
		double price;
private:
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
private:
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
private:
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

}
//hi