#include <iostream>

using namespace std;

int main()
{{
    string printer;
    string phone;
    string table;
    int x;
    string item1,item2,item3;
    string qauntity;
    string a;
    string name;
    string ID;
    int q;
    float v=0.12;
    string answer;
    cout << "We sell the following items"<<endl;
    cout << "PRINTER ......800"<<endl;
    cout << "PHONE ......600"<<endl;
    cout << "TABLE ......350"<<endl;


    cout<< "Please enter your name" <<endl;
    cin>>name;

    cout << name << ", Please enter your unique ID"<<endl;
    cin>> ID;

    cout << "what do you want to buy from the above "<<endl;
    cin>> item1;


     cout<< "how many do you want to buy" <<endl;
       cin>> q;


    if(item1=="printer")
       {

     cout << "the price of " << q << " printer(s) is "<< (800*v+800)*q << " with a vat of 12% on the price" << endl;}


    if (item1=="phone")
        {cout << "the price" << q << "of a phone is "<< (600*v+600)*q << " with a vat of 12% on the price" << endl;}



    if(item1=="table")
   {

   cout << "the price of a table is "<< (350*v+350)*q << " with a vat of 12% on the price" << endl;}



cout <<"                                              "<<endl;
            cout << "will you want to buy anything in addition?"<<endl;

                if(answer =="yes" || "no")
        cout << "please enter yes or no" <<endl;
        cin>> answer;


        if(answer =="yes")
            {cout << "Enter second item:" <<endl;
            cin>>item2;
            cout<< "how many do you want to buy?"<<endl;
            cin>>q;
            if(item2=="printer")
                cout <<"the price of " <<q<< " printer(s) is "<<(800*0.12+800)*q <<endl;
            else if(item2=="phone")
                cout << "the price of " <<q<< " phones(s) is "<<(600*0.12+600)*q <<endl;
            if(item2== "table")
                cout << "the price of " <<q<< " table(s) is "<<(350*0.12+350)*q <<endl;

        }


    //compare two items//
{



            if(item1== "printer" && item2 == "phone"){

            cout << "Your total cost for the two items is "<<((800*0.12+800)*q) +((600*0.12+600)*q) << " with a vat of 12% on each item" <<endl;}

            if(item1== "printer" && item2 == "table"){

            cout << "Your total cost for the two items is "<<((800*0.12+800)*q) +((350*0.12+350)*q) << " with a vat of 12% on each item" <<endl;}

            if(item1== "table" && item2 == "phone"){

            cout << "Your total cost for the two items is "<<((350*0.12+350)*q) +((600*0.12+600)*q) << " with a vat of 12% on each item" <<endl;}



            if(item1== "phone" && item2 == "printer"){

            cout << "Your total cost for the two items is "<<((600*0.12+600)*q) +((800*0.12+800)*q) << " with a vat of 12% on each item" <<endl;}



            if(item1== "phone" && item2 == "table"){

            cout << "Your total cost for the two items is "<< ((600*0.12+600)*q) +((350*0.12+350)*q) << " with a vat of 12% on each item" <<endl;}

            if(item1== "table" && item2 == "printer"){

            cout << "Your total cost for the two items is "<< ((350*0.12+350)*q) +((800*0.12+800)*q) << " with a vat of 12% on each item" <<endl;}
}
{


     if(answer=="no")
            {cout<< ""<<endl;

      while(item1=="printer")
           {cout<<"Your total cost for the item  is " << (800*0.12+800)*q<<endl;break;}

            while(item1=="phone")
            {cout<< " Your total cost for the item  is " << (600*0.12+600)*q << endl;break;}

            while(item1=="table")
            {cout<<" Your total cost for the item is " << (350*0.12+350) *q << endl;break;}
            }

}





    cout <<"               "<< "Thank you for transacting with us!"<<endl;

    }
    return 0;
}
