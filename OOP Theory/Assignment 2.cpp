#include <iostream>
using namespace std;
class EidMela{
private:
	string melaName;
	string location;
	int totalStalls;
	double entryFee;
	bool isOpen;
public:
    static int totalMelasHeld;
	static int totalStallsAcrossAllMelas;
	// Default constructor
	EidMela(){
		melaName = "Unnamed Mela";
		location = "TBD";
		totalStalls = 0;
		entryFee = 0;
		isOpen = false;	
		totalMelasHeld++;
	}
	//parameterized Constructor
	EidMela(string n, string l, int s, int f){
		melaName = n;
		location = l;
		totalStalls = s;
		entryFee = f;
		isOpen = true;	
		totalMelasHeld++;
		totalStallsAcrossAllMelas+=totalStalls;
	}
    void display_melaInfo(){ 
		cout<<"NAME: "<<melaName<<endl;
		cout<<"LOCATION: "<<location<<endl;
		cout<<"ENTRY FEE: "<<entryFee<<endl;
        cout<<"STATUS: "<<isOpen<<endl;
	}
    static int get_totalMelasHeld(){
        return totalMelasHeld;
    }
	// destructor
	~EidMela(){
		isOpen = false;
		cout<<"-----"<<melaName<<" GRAND MELA ENDED-----"<<endl;
		cout<<"KHUDA HAFIZ!!"<<endl;
	}
};
class SweetStalls{
private:
   string stallName;
   int stallID;
   string* sweetItems;
   int itemCount;
   int maxItems;
   double pricePerKg;
   double totalKgSold;
public:
    static int totalSweetStalls;
   static double totalRevenueAllStalls;
   static int stallCounter;
	//default constructor
	SweetStalls(){
		stallName="Unknown Stall";
		stallID = stallCounter;
		maxItems = 3;
		sweetItems = new string[maxItems];
		for(int i=0;i<maxItems;i++){
			*(sweetItems+i) = "any mithai";
		}
		pricePerKg = 0;
		totalKgSold = 0;
		totalSweetStalls++;
		stallCounter++;
	}
	//parametrized constructor
	SweetStalls(string n, int m, double p){
		stallName=n;
        maxItems = m;
		stallID = stallCounter;
        pricePerKg = p;
		sweetItems = new string[maxItems];
		*(sweetItems) = "Sher Khurma";
        *(sweetItems+1) = "Sewaiyan";
        *(sweetItems+2) = "Barfi";	
		totalSweetStalls++;
		stallCounter++;
	}
	//copy constructor
	SweetStalls(SweetStalls &s){
        stallName = s.stallName;
        stallID = stallCounter;
        maxItems = s.maxItems;
		sweetItems = new string[maxItems];
		for(int i=0;i<maxItems;i++){
			*(sweetItems+i) = *(s.sweetItems+i);
		}
		pricePerKg = s.pricePerKg;
		totalSweetStalls++;
	}
	//destructor
	~SweetStalls(){
		delete [] sweetItems;
			totalSweetStalls--;
			cout<<stallName<<" (ID "<<stallID<<") has packed up!"<<endl;
	}
    void display_SweetStalls(){
        cout<<"STALL NAME: "<<stallName<<endl;
        cout<<"STALL ID: "<<stallID<<endl;
        cout<<"MAX ITEMS: "<<maxItems<<endl;
        for(int i=0;i<maxItems;i++){
			cout<<*(sweetItems+i)<<"  ";
		}
        cout<<endl;
        cout<<"PRICE PER KG: "<<pricePerKg<<endl;
    }
};
class Visitor{
private:
	string name;
	int visitorID;
	int age;
   double eidiReceived;
   double budget;
   string* purchasedItems;
   int purchaseCount;
   int maxPurchases;
public:
    static int totalVisitors;
	static double totalEidiDistributed;
    static int visitorID_counter;
	Visitor(){
		name = "Guest";
		visitorID = visitorID_counter;
		age = 0;
		eidiReceived = 0;
		budget = 500;
		maxPurchases= 5;
		purchasedItems = new string [maxPurchases];
		// for(int i=0;i<maxPurchases;i++){
		// 	*(purchasedItems+i) = "any item";
		// }
		totalVisitors++;
	}
	Visitor(string n, int a, int b, int m){
		name = n;
		visitorID = visitorID_counter;
		age = a;
		budget = b;
		maxPurchases=m;
		purchasedItems = new string [maxPurchases];
		// *(purchasedItems)="sher khurma";
        // *(purchasedItems+1)="Dahi baray";
        // *(purchasedItems+2)="biryani";
		totalVisitors++;
	}
	//copy constructor
	Visitor(Visitor &v){
        name = v.name;
        age=v.age;
		v.budget-=v.eidiReceived;
        budget = v.budget;
        maxPurchases = v.maxPurchases;
		eidiReceived = v.eidiReceived;
		purchasedItems = new string[maxPurchases];
		// for(int i=0;i<maxPurchases;i++){
		// 	*(purchasedItems+i) = *(v.purchasedItems+i);
		// }
		visitorID = visitorID_counter;
		totalVisitors++;
	}
	//destructor
	~Visitor(){
		delete [] purchasedItems;
			totalVisitors--;
			cout<<name<<" HAS LEFT THE MELA, EID MUBARAK!!"<<endl;
	}
    void dispaly_visitorinfo(){
        cout<<"NAME: "<<name<<endl;
        cout<<"AGE: "<<age<<endl;
        cout<<"MAX PURCHASING: "<<maxPurchases<<endl;
		cout<<"EIDI RECEIVED: "<<get_eidi()<<endl;
		cout<<"BUDGET: "<<get_budget()<<endl;
        // for(int i=0;i<maxPurchases;i++){
		// 	cout<<*(purchasedItems+i)<<endl;
		// }
        cout<<endl;
    }
	void set_eidi(int eidi){
		eidiReceived=0;
         eidiReceived+=eidi;
		 totalEidiDistributed+=eidi;
		 budget+=eidiReceived;
	}
	double get_eidi(){
		return eidiReceived;
	}
	double get_budget(){
        return budget;
	}
   static int get_totalEid(){
	return totalEidiDistributed;
   }
};
//EidMela static members
int EidMela::totalMelasHeld = 0;
int EidMela::totalStallsAcrossAllMelas = 0;
//SweetStalls static members
int SweetStalls::stallCounter = 101;
int SweetStalls::totalSweetStalls = 0;
//Visitor static members
int Visitor::visitorID_counter = 5001;
double Visitor::totalEidiDistributed = 0;
int Visitor::totalVisitors = 0;
int main(){

	//EidMela Obj
	cout<<"=======MELA INFO======="<<endl;
    EidMela m1;
    m1.display_melaInfo();
    EidMela m2("AL NOOR GRAND MELA", "Peshawar", 3, 200 );
    m2.display_melaInfo();
    cout<<"TOTAL MELAS HELD: "<<EidMela::get_totalMelasHeld()<<endl;

	//SweetStalls Obj
	cout<<"=======SWEET STALLS INFO======="<<endl;
    SweetStalls ss1;
    ss1.display_SweetStalls();
    SweetStalls ss2("KARACHI METHAI WALA", 5, 400);
    ss2.display_SweetStalls();
    SweetStalls ss3(ss2);
    ss3.display_SweetStalls();

	//Visitor Obj
	cout<<"=======VISITORS INFO======="<<endl;
    Visitor v1;
    v1.dispaly_visitorinfo();
    Visitor v2("WALEEJA", 16, 2000, 3);
	v2.set_eidi(200);
    v2.dispaly_visitorinfo();
    Visitor v3("AREEJ", 18, 3000, 3);
	v3.set_eidi(1000);
    v3.dispaly_visitorinfo();
    Visitor v4(v2);
	v4.set_eidi(100);
    v4.dispaly_visitorinfo();

	//Nested scope block
	{
		cout<<"=======INSIDE NESTED SCOPE======="<<endl;
		SweetStalls s1;
		Visitor VV1;
	}
	
	//Final city's statistics
	cout<<"=======FINAL CITY STATISTICS======="<<endl;
	cout<<"TOTAL EID DISTRIBUTED: "<<Visitor::get_totalEid()<<endl;
	cout<<"TOTAL MELAS HELD: "<<EidMela::totalMelasHeld<<endl;
	cout<<"TOTAL STALLS ACROSS ALL MELAS: "<<EidMela::totalStallsAcrossAllMelas<<endl;
	cout<<"TOTAL VISITORS: "<<Visitor::totalVisitors<<endl;
	cout<<"TOTAL EIDI DISTRIBUTED: "<<Visitor::totalEidiDistributed<<endl;

}