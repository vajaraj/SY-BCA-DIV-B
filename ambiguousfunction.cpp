#include<iostream.h>
#include<conio.h>

class DM;

class DB
{
    float m, c;

public:
    void meter()
    {
	cout << "Enter meter: ";
	cin >> m;
	cout << "Enter cm: ";
	cin >> c;
    }

    void put()
    {
	cout << "\nm = " << m << "\nc = " << c;
    }

    friend void cal(DB, DM);
};

class DM
{
    float f, in;

public:
    void fee()
    {
	cout << "Enter feet: ";
	cin >> f;
	cout << "Enter inch: ";
	cin >> in;
    }

    void put()
    {
	cout << "\nf = " << f << "\nin = " << in;
    }

    friend void cal(DB, DM);
};

void cal(DB a, DM b)
{
    
    float total_cm = a.m * 100 + a.c;

    total_cm += b.f * 30 + b.in * 2.5;

    cout << "\nTotal = " << total_cm << " cm";
}

int main()
{
    DB ca1;
    DM ca2;

    ca1.meter();
    ca2.fee();

    ca1.put();
    ca2.put();

    cal(ca1, ca2);

    getch();
}