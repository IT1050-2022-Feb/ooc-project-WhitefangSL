#include <iostream>
#include <cstring>
using namespace std;

class premiumUser:public user{

	private:
		int premiumUserID;

	public:
		void  setDetails(int Puid, string Puname, string Puaddress, string Puemail, int Putel);
		void displayDetails();
		void setPassword();
		string getName();
		string getAddress();
		string getEmail();
		int getTel();
		void searchRecipes();
		    
};

class chef
{
	private:
		int chefID;
		string chefName;
		string chefEmail;

	public:
		void setDetails(int Cid, string Cname, string Cemail);
		void displayDetails();
		string getName();
		string getEmail();
};
