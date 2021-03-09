#pragma once
#include <string>

using namespace std;

class Payment
{
private:
	//пр≥звище ≥м'€ побатьков≥
	string fullname;
	//ставка
	double price;
	//р≥к поступленн€ на роботу
	int year;
	//в≥дсоток надбавки
	double percentOfAllowance;
	//прибутковий податок
	double incomeTax;
	//к≥льк≥сть в≥дпрацьованих дн≥в в м≥с€ц≥
	int amountOfSpentDays;
	//к≥льк≥сть робочих дн≥в в м≥с€ц≥
	int amountOfWorkingDays;
	//нарахована ≥
	double accruedSum;
	//утримана суми
	double heldSum;


public:
	void setFullName(string);
	bool setPrice(double);
	bool setYear(int);
	bool setPercentOA(double);
	bool setIncomeTax(double);
	bool setAmountOSD(int);
	bool setAmountOWD(int);
	bool setAccruedSum();
	bool setHeldSum();

	string getFullName() const { return fullname; }
	double getPrice() const { return price; }
	int getYear() const { return year; }
	double getPercentOA() const { return percentOfAllowance; }
	double getIncomeTax() const { return incomeTax; }
	int getAmountOSD() const { return amountOfSpentDays; }
	int getAmountOWD() const { return amountOfWorkingDays; }
	double getAccruedSum();
	double getHeldSum();

	double calculationSum();
	int calculationExperience();


	bool Init(string fname, double pr, int yr, double percentOA, int amountOSD, int amountOWD);
	void Read();
	void Display();


};