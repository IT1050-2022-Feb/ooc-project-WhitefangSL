#include <iostream>
#include <cstring>
using namespace std;

class unregisteredUser: public user{
	protected:
		int unregID;

	public:
		void setDetails(int Uid, string Uname, string Uaddress, string Uemail, int Utel);
		int getID();
		string getName();
		int getNumber();
		void displayDetails();
};

class registeredUser:public user{
	private:
		int registeredUserID;
		

	public:
		void  setDetails(int Rid, string Rname, string Raddress, string Remail, int Rtel);
		void displayDetails();
		void setPassword();
		string getName();
		string getAddress();
		string getEmail();
		int getTel();
		void searchRecipes();
};
