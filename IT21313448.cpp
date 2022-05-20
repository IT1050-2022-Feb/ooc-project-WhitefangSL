#include <iostream>
#include <cstring>
using namespace std;

class user {

	protected:
		string userName;
		string userEmail;
		string userAddress;
		int tel;
		string password;

	public:
		void setDetails(string Uname, string Uaddress, string Uemail, int Utel,string upassword);
		int getID();
		string getName();
		int getNumber();
		void displayDetails();
		
};

class admin
{
	private:
		string adminName;
		string adminPassword;
		string adminEmail;

	public:
		void setDetails(string Aname, string Apassword, string Aemail);
		void displayDetails();
		string getName();
		string getPassword();
		string getEmail();
};
