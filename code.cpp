#include <iostream>
#include <fstream>
#include <vector>
#include <string>
#include <unordered_map>

std::unordered_map<std::string, std::string> users;

class ElectricVehicle
{
	public:
		int use;
	public:
		void registerUser();
		void login();
		void menu();
		void qrcode();
		void vehicle();
		void detection();
		void feescharge();
		void choices();
		void history();
		void available();
		void discount();
		void calculation();
		void solution();
		void distancetrack();
		void charge();
		void transaction();
		void options();
		void bikes();
		void cars();
		void autos();
};

void ElectricVehicle :: menu ()
{
    
    int choice;
    std::string email;
    std::string password;
    std::cout<<"\t\t\t\t__________________________________________________\n";
    std::cout<<"\t\t\t\t                                                  \n";
    std::cout<<"\t\t\t\t           ELECTRIC VEHICLE RENTALS               \n";
    std::cout<<"\t\t\t\t                                                  \n";
    std::cout<<"\t\t\t\t__________________________________________________\n";
    std::cout<<"\t\t\t\t                                                  \n";
    std::cout<<"\t\t\t\t|     Welcome to the future we dreamt of         |\n";                  
    std::cout<<"\t\t\t\t|                                                |\n";
    std::cout<<"\t\t\t\t|                                                |\n";
    std::cout<<"\t\t\t\t| 1) User                                        |\n";
    std::cout<<"\t\t\t\t|                                                |\n";
    std::cout<<"\t\t\t\t| 2) Exit                                        |\n";
    std::cout<<"\t\t\t\t|                                                |\n";
    std::cout<<"\n\t\t\t\t Please select                                  \n";
    std::cin>>choice;

    switch (choice)
    {

    case 1:
        {
           options();
        }
    case 2:
        {
            exit(0);
        }
        default:
            {
                std::cout<<"Please select from the given options";
            }
}

  //goto m;
}
void ElectricVehicle :: registerUser() {
    std::string username, password;
    std::cout << "Enter a new username: ";
    std::cin >> username;
    std::cout << "Enter a new password: ";
    std::cin >> password;

    // Check if the user already exists
    if (users.find(username) != users.end()) {
        std::cout << "Error: User already exists" << std::endl;
        return;
    }

    // Register the user
    users[username] = password;
    std::cout << "Registration successful" << std::endl;
}

void ElectricVehicle :: login() {
    std::string username, password;
    std::cout << "Enter your username: ";
    std::cin >> username;
    std::cout << "Enter your password: ";
    std::cin >> password;

    // Check if the user exists
    if (users.find(username) == users.end()) {
        std::cout << "Error: User does not exist" << std::endl;
        return;
    }

    // Check if the password is correct
    if (users[username] != password) {
        std::cout << "Error: Incorrect password" << std::endl;
        return;
    }

    // Login successful
    std::cout << "Login successful" << std::endl;
}
void ElectricVehicle :: options() {
        std::cout << "1. Register" << std::endl;
        std::cout << "2. Login" << std::endl;
        int choice;
        std::cin >> choice;
        switch (choice) {
            case 1:
                registerUser();
            case 2:
                login();
                choices();
                break;
            default:
                std::cout << "Invalid choice" << std::endl;
                break;
        }
    }
    
void ElectricVehicle :: qrcode()    
{
	std::cout<<"\n";
	std::cout<<"\n";
	std::cout<<"\n";
	std::cout<<"\n";
	std::cout<<"\t\t\t\t QR CODE SCAN\n";
    std::cout<<"\t\t\t\t ___________ \n";
	std::cout<<"\t\t\t\t |L]L]L]L]L] \n";                                 
    std::cout<<"\t\t\t\t |L]L]L]L]L] \n";
    std::cout<<"\t\t\t\t |L]L]L]L]L] \n";
    std::cout<<"\t\t\t\t |_________| \n";
    std::cout<<"\n";
    std::cout<<" IT HAS BEEN SCANNED SUCCESSFULLY";
    std::cout<<"\n";
	std::cout<<"\n";
	std::cout<<"\n";
	std::cout<<"\n";
	std::cout<<"\n";
}

void ElectricVehicle :: transaction()
{
    std::cout<<"\t\t\t\t                                                  \n";
    std::cout<<"\t\t\t\t      CHOOSE YOUR PAYMENT OPTIONS                 \n";
    std::cout<<"\t\t\t\t                                                  \n";
    std::cout<<"\t\t\t\t__________________________________________________\n";
    std::cout<<"\t\t\t\t                                                  \n";
    std::cout<<"\t\t\t\t|     Welcome to the future we dreamt of         |\n";                  
    std::cout<<"\t\t\t\t|                                                |\n";
    std::cout<<"\t\t\t\t|  1)    Debit Transaction                       |\n";
    std::cout<<"\t\t\t\t|                                                |\n";
    std::cout<<"\t\t\t\t|  2)     GooglePe/Paytm                         |\n";
    std::cout<<"\t\t\t\t|                                                |\n";
    std::cout<<"\t\t\t\t|  3)    UserPoints                              |\n";
    std::cout<<"\n\t\t\t\t Please select                                  \n";
    std::cout<<"\t\t\t\t__________________________________________________\n";
}
    
    void ElectricVehicle :: cars()
{
	int c;
    std::cout<<"\t\t\t\t__________________________________________________\n";
    std::cout<<"\t\t\t\t                                                  \n";
    std::cout<<"\t\t\t\t                 ELECTRIC CARS                    \n";
    std::cout<<"\t\t\t\t                                                  \n";
    std::cout<<"\t\t\t\t__________________________________________________\n";
    std::cout<<"\t\t\t\t                                                  \n";
    std::cout<<"\t\t\t\t|     Welcome to the future we dreamt of         |\n";                  
    std::cout<<"\t\t\t\t|                                                |\n";
    std::cout<<"\t\t\t\t|  1)   Drive On your Own                        |\n";
    std::cout<<"\t\t\t\t|                                                |\n";
    std::cout<<"\t\t\t\t|  2)  Hire a Driver                             |\n";
    std::cout<<"\t\t\t\t|                                                |\n";
    std::cout<<"\t\t\t\t|  3)     Sharing                                |\n";
    std::cout<<"\n\t\t\t\t Please select                                  \n";
    std::cout<<"\n\t\t\t\t                                                \n";
    std::cin >> c;
    feescharge();
	}


void ElectricVehicle ::bikes()

{
	int c;
    std::cout<<"\t\t\t\t__________________________________________________\n";
    std::cout<<"\t\t\t\t                                                  \n";
    std::cout<<"\t\t\t\t                 ELECTRIC BIKES                   \n";
    std::cout<<"\t\t\t\t                                                  \n";
    std::cout<<"\t\t\t\t__________________________________________________\n";
    std::cout<<"\t\t\t\t                                                  \n";
    std::cout<<"\t\t\t\t|     Welcome to the future we dreamt of         |\n";                  
    std::cout<<"\t\t\t\t|                                                |\n";
    std::cout<<"\t\t\t\t|  1)   Drive On your Own                        |\n";
    std::cout<<"\t\t\t\t|                                                |\n";
    std::cout<<"\t\t\t\t|                                                |\n";
    std::cout<<"\n\t\t\t\t Please select                                  \n";
    std::cout<<"\n\t\t\t\t                                                \n";
    std::cout<<"\t\t\t\t__________________________________________________\n";
    std::cin >> c;
	}

void ElectricVehicle ::autos()

{
	int c;
    std::cout<<"\t\t\t\t__________________________________________________\n";
    std::cout<<"\t\t\t\t                                                  \n";
    std::cout<<"\t\t\t\t                 ELECTRIC AUTOS                   \n";
    std::cout<<"\t\t\t\t                                                  \n";
    std::cout<<"\t\t\t\t__________________________________________________\n";
    std::cout<<"\t\t\t\t                                                  \n";
    std::cout<<"\t\t\t\t|     Welcome to the future we dreamt of         |\n";                  
    std::cout<<"\t\t\t\t|                                                |\n";
    std::cout<<"\t\t\t\t|  1)   Drive On your Own                        |\n";
    std::cout<<"\t\t\t\t|                                                |\n";
    std::cout<<"\t\t\t\t|  2)  Hire a Driver                             |\n";
    std::cout<<"\t\t\t\t|                                                |\n";
    std::cout<<"\t\t\t\t|  3)     Sharing                                |\n";
    std::cout<<"\n\t\t\t\t Please select                                  \n";
    std::cout<<"\n\t\t\t\t                                                \n";
    std::cin >>c;
	}

void ElectricVehicle::feescharge()
{
	int c,n;
	if(c==1)
	{
		if(n==1)
	{
		std::cout<<"\n";
		std::cout<<"\n";
		std::cout<<"\n";
		std::cout<<"\n";
		std::cout<<"\t\t\t\t__________________________________________________\n";
		std::cout<<"\t\t\t\t           The charge is 2.34 rs per km           \n";
		std::cout<<"\t\t\t\t__________________________________________________\n";
	}
	if(n==2)
	{
		std::cout<<"\n";
		std::cout<<"\n";
		std::cout<<"\n";
		std::cout<<"\n";
		std::cout<<"\t\t\t\t__________________________________________________\n";
		std::cout<<"\t\t\t\t           The charge is 7.80 rs per km           \n";
		std::cout<<"\t\t\t\t__________________________________________________\n";
	}
	if(n==3)
	{
	    std::cout<<"\n";
		std::cout<<"\n";
		std::cout<<"\n";
		std::cout<<"\n";
		std::cout<<"\t\t\t\t__________________________________________________\n";
		std::cout<<"\t\t\t\t           The charge is 3.90 rs per km           \n";
		std::cout<<"\t\t\t\t__________________________________________________\n";
	}
	}

	if(c==2)
	{
		if(n==1)
	{
	std::cout<<"\n";
		std::cout<<"\n";
		std::cout<<"\n";
		std::cout<<"\n";
		std::cout<<"\t\t\t\t__________________________________________________\n";
		std::cout<<"\t\t\t\t           The charge is 3.12 rs per km           \n";
		std::cout<<"\t\t\t\t__________________________________________________\n";
	}
	if(n==2)
	{
		std::cout<<"\n";
		std::cout<<"\n";
		std::cout<<"\n";
		std::cout<<"\n";
		std::cout<<"\t\t\t\t__________________________________________________\n";
		std::cout<<"\t\t\t\t           The charge is 10.34 rs per km           \n";
		std::cout<<"\t\t\t\t__________________________________________________\n";
	}
	if(n==3)
	{
	   std::cout<<"\n";
		std::cout<<"\n";
		std::cout<<"\n";
		std::cout<<"\n";
		std::cout<<"\t\t\t\t__________________________________________________\n";
		std::cout<<"\t\t\t\t           The charge is 5.20 rs per km           \n";
		std::cout<<"\t\t\t\t__________________________________________________\n";
	}
	}
	if(c==3)
	{
    if(n==1)
	{
		std::cout<<"Option not available";
	}
	if(n==2)
	{
	std::cout<<"\n";
		std::cout<<"\n";
		std::cout<<"\n";
		std::cout<<"\n";
		std::cout<<"\t\t\t\t__________________________________________________\n";
		std::cout<<"\t\t\t\t           The charge is 2.60 rs per km           \n";
		std::cout<<"\t\t\t\t__________________________________________________\n";
	}
	if(n==3)
	{
	    std::cout<<"\n";
		std::cout<<"\n";
		std::cout<<"\n";
		std::cout<<"\n";
		std::cout<<"\t\t\t\t__________________________________________________\n";
		std::cout<<"\t\t\t\t           The charge is 1.73 rs per km           \n";
		std::cout<<"\t\t\t\t__________________________________________________\n";
	}
	} 
}

void ElectricVehicle::discount()
{
	int d=0;
	int age,use;
	std::cin>>age;
	if(age<=18&&age<=23)
	{
		d=0.1;
	}
	if(use>20&&use<50)
	{
		d=0.2;
	}
	if(use>50)
	{
		d=0.5;
	}
}
void ElectricVehicle::calculation()
{
	int d,c,n;discount();
	int charge=0;
	charge=1.3*d-(d*1.3*d);
	if(n==1)
	{
		charge=charge*1.2;
	}
	if(n==2)
	{
		charge=charge*4;
	}
	if(n==3)
	{
		charge=charge*2;
	}
	if(c==1)
	{
		charge=charge*1.5;
	}
	if(c==2)
	{
		charge=charge*2;
	}
	if(c==3)
	{
		
    	if(n==2)
	    {
		charge=charge*0.5;
	    }
    	if(n==3)
	    {
		charge=charge*0.7;
    	}
	}	
}
void ElectricVehicle ::available() {
    int use = 0;

    
        std::cout << "1. Make a transaction" << std::endl;
        std::cout << "2. View transaction count" << std::endl;
        while (true) {
        int choice;
        std::cin >> choice;

        switch (choice) {
            case 1:
            	transaction();
                use++;
                std::cout << "Transaction complete" << std::endl;
                break;
            case 2:
                std::cout << "Transaction count: " <<use<< std::endl;
                break;
            default:
                std::cout << "Invalid choice" << std::endl;
                break;
        }
    }
}
void ElectricVehicle :: choices()
{
	int n;
    std::cout<<"\t\t\t\t__________________________________________________\n";
    std::cout<<"\t\t\t\t                                                  \n";
    std::cout<<"\t\t\t\t       CHOOSE THE VEHICLE YOU WANT TO RENT        \n";
    std::cout<<"\t\t\t\t                                                  \n";
    std::cout<<"\t\t\t\t__________________________________________________\n";
    std::cout<<"\t\t\t\t                                                  \n";
    std::cout<<"\t\t\t\t|     Welcome to the future we dreamt of         |\n";                  
    std::cout<<"\t\t\t\t|                                                |\n";
    std::cout<<"\t\t\t\t|  1)     Electric Bikes                         |\n";
    std::cout<<"\t\t\t\t|                                                |\n";
    std::cout<<"\t\t\t\t|  2)     Electric Cars                          |\n";
    std::cout<<"\t\t\t\t|                                                |\n";
    std::cout<<"\t\t\t\t|  3)      Electric Autos                        |\n";
    std::cout<<"\n\t\t\t\t Please select                                  \n";
    std::cout<<"\n\t\t\t\t                                                \n";
    std::cin >>n;
    switch(n)
    {
    	case 1:
    	    bikes();
    	    feescharge();
    		qrcode();
    		available();
    	

    		break;
    		
    		case 2:
    		    cars();
    		    feescharge();
    			qrcode();
    			available();
    			
    	
    			break;
    			
    			case 3:
                autos();
                feescharge();
    			qrcode();
    			available();
    		
    			
	}
}

int main() {
	ElectricVehicle s;
	s.menu();
}