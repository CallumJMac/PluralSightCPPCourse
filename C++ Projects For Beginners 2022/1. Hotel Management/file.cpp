#include <iostream>

using namespace std;

int main()
{
    int quant;
    int choice;
    

    // #number stored in hotel
    int Qrooms = 0; 
    int Qpasta = 0;
    int Qburger = 0;


    // number sold in hotel
    int Srooms = 0; 
    int Spasta = 0;
    int Sburger = 0;


    // total price of each item
    int Total_rooms = 0; 
    int Total_pasta = 0;
    int Total_burger = 0;

    // User to input quantity of each item
    cout << "\n \t Quantity of items we have:";
    cout << "\n Rooms available:";
    cin >> Qrooms;
    cout << "\n Quantitiy of Pasta available:";
    cin >> Qpasta;
    cout << "\n Quantity of Burger available:";
    cin >> Qburger;

    // Options presented to user, they select 1 for room etc.
    // If there are none of a given item stored, this should be presented to the user
    m:
    cout << "\n\n\n\t\t\t Please select from the given menu options:";
    cout << "\n\n 1) Rooms:";
    cout << "\n 2) Pasta:";
    cout << "\n 3) Burger:";
    cout << "\n 4) Information regarding sales and collection";
    cout << "\n 5) Exit";

    cout << "\n\n Please enter your choice! ";
    cin >> choice;

    switch(choice)
    {
        case 1:
            cout << "\n\n Enter the number of rooms you want: ";
            cin >> quant;
            if(Qrooms - Srooms >=quant)
            {
                Srooms = Srooms + quant;
                Total_rooms = Total_rooms + quant *100;
                cout << "\n\n\t\t" <<quant << " room(s) have been alloted to you";
            }
            else
            
                cout<<"\n\t Only " << Qrooms - Srooms << " rooms are remaining in the hotel.";
                break;
            

        case 2:
            cout << "\n\n Enter the number of pastas you want to order: ";
            cin >> quant;
            if(Qpasta - Spasta >=quant)
            {
                Spasta = Spasta + quant;
                Total_pasta = Total_pasta + quant *12;
                cout << "\n\n\t\t" <<quant << " pasta(s) have been ordered for you";
            }
            else
            
                cout<<"\n\t Only " << Qpasta - Spasta << " pasta are remaining in the hotel.";
                break;
            

        case 3:
            cout << "\n\n Enter the number of burgers you want to order: ";
            cin >> quant;
            if(Qburger - Sburger >=quant)
            {
                Sburger = Sburger + quant;
                Total_burger = Total_burger + quant *5;
                cout << "\n\n\t\t" <<quant << " burgers(s) have been ordered for you";
            }
            else
                cout<<"\n\t Only " << Qburger - Sburger << " burgers are remaining in the hotel.";
                break;

        case 4:
        cout << "\n\t\t Details of sales and collection ";
        cout << "\n\n Number of rooms we had: " << Qrooms;
        cout << "\n\n Number of rooms we gave for rent: " << Srooms;
        cout << "\n\n Number of rooms remaining: "<< Qrooms - Srooms;
        cout << "\n\n Total revenue generated from room sales: £" << Total_rooms;

        cout << "\n\n Number of pasta we had: " << Qpasta;
        cout << "\n\n Number of pasta we gave for rent: " << Spasta;
        cout << "\n\n Number of pasta remaining: "<< Qpasta - Spasta;
        cout << "\n\n Total revenue generated from pasta sales: £" << Total_pasta;

        cout << "\n\n Number of burger we had: " << Qburger;
        cout << "\n\n Number of burger we gave for rent: " << Sburger;
        cout << "\n\n Number of burger remaining: "<< Qburger - Sburger;
        cout << "\n\n Total revenue generated from room burger: £" << Total_burger;
        
        cout << "\n\n\n Total revenue from ALL sales today: £" << Total_burger + Total_pasta + Total_rooms;
        break;

        case 5:
            exit(0);

            default:
                cout<<"\n Please select the numbers mentioned about!";
    }
    goto m; //make multiple choices


}