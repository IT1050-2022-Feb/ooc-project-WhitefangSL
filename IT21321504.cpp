#include <iostream>
#include <cstring>
using namespace std;


class payment
{
	private:
		int paymentId;
		string paymentType;
		double paymentAmount;
		int cardNumber;

	public:
		void creditCardDetails(int pID, int cName, string pType,double pAmount);
		void editCardDetails();
		void deleteCardDetails();
		void displayCardDetails();

};



class recipe
{
	private:
		int recipeID;
		string recipeName;
		double recipePrice;
		string recipePublisher;
	public:
		void setDetails(int reciID, string reciName, double reciPrice, string reciPub);
		void addRecipe();
		void updateRecipe();
		void removeRecipe();
		void checkAvailability();
		void displayDetails();

};
