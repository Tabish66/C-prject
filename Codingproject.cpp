#include<iostream>
using namespace std;

int main()
{
int quant;
int choice;

//Quantity available
int q_luxury_rooms=0, q_semi_luxury_rooms=0, q_normal_rooms=0;

//Items sold
int s_luxury_rooms=0, s_semi_luxury_rooms=0, s_normal_rooms=0;

//Total price for the items
int total_luxury_rooms=0, total_semi_luxury_rooms=0, total_normal_rooms=0;
int sum=0;

cout<<"\nQuantity of items that are available"<<endl;
cout<<"Luxury Rooms available: ";
cin>>q_luxury_rooms;
cout<<"Semi-Luxury Rooms available: ";
cin>>q_semi_luxury_rooms;
cout<<"Normal Rooms available: ";
cin>>q_normal_rooms;



//List of items for the order
m:
cout<<"\nPlease select the items from the menu"<<endl;
cout<<"1. Rooms"<<endl;
cout<<"2. Stater"<<endl;
cout<<"3. Main course"<<endl;
cout<<"4. Beverages"<<endl;
cout<<"5. Alcohol"<<endl;
cout<<"6. Today's sales and collection"<<endl;
cout<<"7. Exit"<<endl;


//Code for taking order and calculating finance
cout<<"\nPlease enter your choice"<<endl;
cin>>choice;
switch(choice)
{
    //Code for different rooms
    case 1:
    {
    n:
    cout<<"\nPlease select the category of the room as given"<<endl;
    cout<<"1. Luxury rooom-9,999 rs & 48 sq.m"<<endl;
    cout<<"Features:- Jacuzzi, Luxury furniture & bedding, 60 inch LED, wifi, personal maid, 24*7 room service, mini beer fridge"<<endl<<" local tour service, access to pool area, buffet(7 PM to 10 PM)"<<endl;
    cout<<"\n2. Semi- luxury room-5,999 rs & 36 sq.m"<<endl;
    cout<<"Features:- wifi, premium furniture & bedding, 24*7 room service, 40 inch LED, access to pool area, 1 hour access to game zone per day"<<endl;
    cout<<"\n3. Normal room-2,499 rs & 30 sq.m"<<endl;
    cout<<"Features:- 40 inch LED, normal furniture and bedding, wifi, room service not available form 1 AM to 5 Am"<<endl;
    cout<<"\n4. Exit"<<endl;

    cout<<"\nPlease enter your choice"<<endl;
    cin>>choice;
    switch(choice)
    {
        case 1:
        cout<<"\nEnter the quantity of room: ";
        cin>>quant;
        if(q_luxury_rooms-s_luxury_rooms>=quant)
        {
            s_luxury_rooms+=quant;
            total_luxury_rooms+=quant*9999;
        }
        else
        cout<<"Only "<<q_luxury_rooms-s_luxury_rooms<<" rooms are available"<<endl;
        break;

        case 2:
        cout<<"\nEnter the quantity of room: ";
        cin>>quant;
        if(q_semi_luxury_rooms-s_semi_luxury_rooms>=quant)
        {
            s_semi_luxury_rooms+=quant;
            total_semi_luxury_rooms+=quant*5999;
        }
        else
        cout<<"Only "<<q_semi_luxury_rooms-s_semi_luxury_rooms<<" rooms are available"<<endl;
        break;

        case 3:
        cout<<"\nEnter the quantity of room: ";
        cin>>quant;
        if(q_normal_rooms-s_normal_rooms>=quant)
        {
            s_normal_rooms+=quant;
            total_normal_rooms+=quant*2499;
        }
        else
        cout<<"Only "<<q_normal_rooms-s_normal_rooms<<" rooms are available"<<endl;
        break;

        case 4:
        goto m;

        default:
        cout<<"\nPlease select the number from the list";

    }
    goto n;


    }

    case 2:
    {
        o:
        cout<<"\nPlease select the item form list"<<endl;
        cout<<"1. Soup-70 rs"<<endl;
        cout<<"2. Crispy veg with garlic sauce-80 rs"<<endl;
        cout<<"3. Chicken lollipop-150 rs"<<endl;
        cout<<"4. Veg salad-50 rs"<<endl;
        cout<<"5. Exit"<<endl;


        cout<<"\nPlease enter your choice: "<<endl;
        cin>>choice;
        switch(choice)
        {
            case 1:
            cout<<"\nEnter the quantity of soup: "<<endl;
            cin>>quant;
            sum+=quant*70;
            break;

            case 2:
            cout<<"\nEnter the quantity of Crispy veg: "<<endl;
            cin>>quant;
            sum+=quant*80;
            break;

            case 3:
            cout<<"\nEnter the quantity of chicken lollipop: "<<endl;
            cin>>quant;
            sum+=quant*150;
            break;

            case 4:
            cout<<"\nEnter the quantity of veg salad: "<<endl;
            cin>>quant;
            sum+=quant*50;
            break;

            case 5:
            goto m;

            default:
            cout<<"Please select the number from list only";
        }
        goto o;


    }

    case 3:
    {
        p:
        cout<<"\nPlease select the item form list"<<endl;
        cout<<"1. Roti-8 rs"<<endl;
        cout<<"2. Butter naan-15 rs"<<endl;
        cout<<"3. Laccha paratha-25 rs"<<endl;
        cout<<"4. Rice-50 rs"<<endl;
        cout<<"5. Zira rice-70 rs"<<endl;
        cout<<"6. Khadai paneer-250 rs"<<endl;
        cout<<"7. Veggies-150 rs"<<endl;
        cout<<"8. Tandoori chicken-350 rs"<<endl;
        cout<<"9. Malai chicken-250 rs"<<endl;
        cout<<"10. kabab (10 pieces)-150 rs"<<endl;
        cout<<"11. Fish curry-350 rs"<<endl;
        cout<<"12. Fish fry-300 rs"<<endl;
        cout<<"13. Keema-200 rs"<<endl;
        cout<<"14. Pulses-100 rs"<<endl;
        cout<<"15. Exit"<<endl;


        cout<<"\nPlease enter your choice: "<<endl;
        cin>>choice;
        switch(choice)
        {
            case 1:
            cout<<"\nEnter the quantity of Roti: "<<endl;
            cin>>quant;
            sum+=quant*8;
            break;

            case 2:
            cout<<"\nEnter the quantity of Butter naan: "<<endl;
            cin>>quant;
            sum+=quant*15;
            break;

            case 3:
            cout<<"\nEnter the quantity of Laccha paratha: "<<endl;
            cin>>quant;
            sum+=quant*25;
            break;

            case 4:
            cout<<"\nEnter the quantity of Rice: "<<endl;
            cin>>quant;
            sum+=quant*50;
            break;

            case 5:
            cout<<"\nEnter the quantity of Zira rice: "<<endl;
            cin>>quant;
            sum+=quant*70;
            break;

            case 6:
            cout<<"\nEnter the quantity of Khadai paneer: "<<endl;
            cin>>quant;
            sum+=quant*250;
            break;

            case 7:
            cout<<"\nEnter the quantity of Veggies: "<<endl;
            cin>>quant;
            sum+=quant*150;
            break;

            case 8:
            cout<<"\nEnter the quantity of Tandoori chicken: "<<endl;
            cin>>quant;
            sum+=quant*350;
            break;

            case 9:
            cout<<"\nEnter the quantity of Malai chicken: "<<endl;
            cin>>quant;
            sum+=quant*250;
            break;

            case 10:
            cout<<"\nEnter the quantity of Kabab: "<<endl;
            cin>>quant;
            sum+=quant*150;
            break;

            case 11:
            cout<<"\nEnter the quantity of Fish curry: "<<endl;
            cin>>quant;
            sum+=quant*350;
            break;

            case 12:
            cout<<"\nEnter the quantity of Fish fry: "<<endl;
            cin>>quant;
            sum+=quant*300;
            break;

            case 13:
            cout<<"\nEnter the quantity of Keema: "<<endl;
            cin>>quant;
            sum+=quant*200;
            break;

            case 14:
            cout<<"\nEnter the quantity of Pulses: "<<endl;
            cin>>quant;
            sum+=quant*100;
            break;

            case 15:
            goto m;

            default:
            cout<<"Please select the number from list only";
        }
        goto p;

    }

    case 4:
    {
        q:
        cout<<"\nPlease select the item form list"<<endl;
        cout<<"1. Coffee-20 rs"<<endl;
        cout<<"2. Milk shakes-60 rs"<<endl;
        cout<<"3. Lassi-50 rs"<<endl;
        cout<<"4. Aerated drinks-50 rs"<<endl;
        cout<<"5. Fruit juices-60 rs"<<endl;
        cout<<"6. Exit"<<endl;


        cout<<"\nPlease enter your choice: "<<endl;
        cin>>choice;
        switch(choice)
        {
            case 1:
            cout<<"\nEnter the quantity of Coffee: "<<endl;
            cin>>quant;
            sum+=quant*20;
            break;

            case 2:
            cout<<"\nEnter the quantity of Milk shakes: "<<endl;
            cin>>quant;
            sum+=quant*60;
            break;

            case 3:
            cout<<"\nEnter the quantity of Lassi: "<<endl;
            cin>>quant;
            sum+=quant*50;
            break;

            case 4:
            cout<<"\nEnter the quantity of Aerated drinks: "<<endl;
            cin>>quant;
            sum+=quant*50;
            break;

            case 5:
            cout<<"\nEnter the quantity of Fruit juices: "<<endl;
            cin>>quant;
            sum+=quant*60;
            break;

            case 6:
            goto m;

            default:
            cout<<"Please select the number from list only";
        }
        goto q;

    }


    case 5:
    {
        r:
        cout<<"\nPlease select the item form list"<<endl;
        cout<<"1. Wine-400 rs"<<endl;
        cout<<"2. Champagne-17000 rs"<<endl;
        cout<<"3. Cocktail-190 rs"<<endl;
        cout<<"4. Screw driver-120 rs"<<endl;
        cout<<"5. Exit"<<endl;


        cout<<"\nPlease enter your choice: "<<endl;
        cin>>choice;
        switch(choice)
        {
            case 1:
            cout<<"\nEnter the quantity of Wine: "<<endl;
            cin>>quant;
            sum+=quant*400;
            break;

            case 2:
            cout<<"\nEnter the quantity of Champagne: "<<endl;
            cin>>quant;
            sum+=quant*17000;
            break;

            case 3:
            cout<<"\nEnter the quantity of Cocktail: "<<endl;
            cin>>quant;
            sum+=quant*190;
            break;

            case 4:
            cout<<"\nEnter the quantity of Screw driver: "<<endl;
            cin>>quant;
            sum+=quant*120;
            break;

            case 5:
            goto m;

            default:
            cout<<"Please select the number from list only";
        }
        goto r;

    }

    case 6:
    cout<<"\nDetails of the sales and collection"<<endl;
    cout<<"Number of luxury rooms we had: "<<q_luxury_rooms<<endl;
    cout<<"Number of luxury rooms you booked: "<<s_luxury_rooms<<endl;
    cout<<"Remaining luxury rooms: "<<q_luxury_rooms-s_luxury_rooms<<endl;
    cout<<"Total earning by the luxury rooms only: "<<total_luxury_rooms<<endl;

    cout<<"\nNumber of semi-luxury rooms we had: "<<q_semi_luxury_rooms<<endl;
    cout<<"Number of semi-luxury rooms you booked: "<<s_semi_luxury_rooms<<endl;
    cout<<"Remaining semi-luxury rooms: "<<q_semi_luxury_rooms-s_semi_luxury_rooms<<endl;
    cout<<"Total earning by the semi-luxury rooms only: "<<total_semi_luxury_rooms<<endl;

    cout<<"\nNumber of normal rooms we had: "<<q_normal_rooms<<endl;
    cout<<"Number of normal rooms you booked: "<<s_normal_rooms<<endl;
    cout<<"Remaining normal rooms: "<<q_normal_rooms-s_normal_rooms<<endl;
    cout<<"Total earning by the normal rooms only: "<<total_normal_rooms<<endl;

    cout<<"\nTotal collection for the day: "<<total_luxury_rooms+total_normal_rooms+total_semi_luxury_rooms+sum;

    case 7:
    exit(0);

    default:
    cout<<"\nPlease select the number mentioned in the menu only";

}

goto m;

    return 0;
}

