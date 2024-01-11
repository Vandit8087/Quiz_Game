// Billing System for a Book Shop using C++.

#include <iostream>

using namespace std;

int main()
{
    int TotalBill(void);
    int final_Bill;
    final_Bill = TotalBill();
    cout << "Your Total bill is " << final_Bill << endl;

}

int TotalBill()
{
    char c, genere, items, moreItems;
    int  bill;
    start:
    cout << "---------------Welcome to the Book Shop---------------" << endl;
    cout << "----------------Please follow the instructions----------------\n" << endl;
    cout << "Step 1: Please press 's' to start your bill" << endl;
    cout << "Step 2: Please select form the below genere: \n(a) 'F' for Fiction \n(b) 'N' Non-Fiction \n(c) 'H' Self Help " << endl;
    cout << "Step 3: You will get your final bill after you finish your purchase." << endl;
    cin >> c;

    if (c == 's' || c == 'S')
    {
        genere:
        cout << "Please select form the below genere from the options given in instructions : " << endl;
        cin >> genere;
        if (genere == 'f' || genere == 'F')
        {
            fiction:
            cout << "Please select (1) Lesser Known Monsters of the 21st Century price : Rs 500 \n(2) War and Peace by Leo Tolstoy Price : Rs 260 \n(3) If I Survive You, Jonathan Escoffery price : Rs 450 \n(4) All This Could Be Different, Sarah Thankam Mathews price : Rs 230 \n(5) The Book of Goose, Yiyun Li price : Rs 750 \n" << endl;
            cin >> items;
            if (items == '1')
            {
                bill += 500;
            }
            else if (items == '2')
            {
                bill += 260;
            }
            else if (items == '3')
            {
                bill += 450;
            }
            else if (items == '4')
            {
                bill += 230;
            }
            else if (items == '5')
            {
                bill += 750;
            }
            else
            {
                cout << "Please select the correct item please try again" << endl;
                goto fiction;
            }
            againfic:
            cout << "Do you want to add more items to your cart? (y/n)" << endl;
            cin >> moreItems;
            if (moreItems == 'y' || moreItems == 'Y')
            {
                goto genere;
            }
            else if (moreItems == 'n' || moreItems == 'N')
            {
                cout << "Thank you for shopping with us" << endl;
            }
            else
            {
                cout << "Please select the correct option please try again" << endl;
                goto againfic;
            }
            
        }
        else if (genere == 'n' || genere == 'N')
        {
            nonfiction: 
            cout << "Please select (1) A VINDICATION OF THE RIGHTS OF WOMAN BY MARY WOLLSTONECRAFT price : Rs150 \n(2) ON THE ORIGIN OF SPECIES BY CHARLES DARWIN price : Rs 540 \n(3) NATIONALISM BY RABINDRANATH TAGORE price : Rs 350 \n(4) HIROSHIMA BY JOHN HERSEY price : Rs250 \n(5) SISTER OUTSIDER BY AUDRE LORDE price : Rs 150 \n" << endl;
            cin >> items;
            if (items == '1')
            {
                bill += 150;
            }
            else if (items == '2')
            {
                bill += 540;
            }
            else if (items == '3')
            {
                bill += 350;
            }
            else if (items == '4')
            {
                bill += 250;
            }
            else if (items == '5')
            {
                bill += 150;
            }
            else
            {
                cout << "Please select the correct item please try again" << endl;
                goto nonfiction;
            }
            againnonfic:
            cout << "Do you want to add more items to your cart? (y/n)" << endl;
            cin >> moreItems;
            if (moreItems == 'y' || moreItems == 'Y')
            {
                goto genere;
            }
            else if (moreItems == 'n' || moreItems == 'N')
            {
                cout << "Thank you for shopping with us" << endl;
            }
            else
            {
                cout << "Please select the correct option please try again" << endl;
                goto againnonfic;
            }
        }
        else if (genere == 'h' || genere == 'H')
        {
            selfHelp:
            cout << "Please select (1) The 7 Habits of Highly Effective People by Stephen Covey price : Rs 450 \n(2) How to Win Friends and Influence People by Dale Carnegie price : Rs 150 \n(3) Think and Grow Rich by Napoleon Hill price : Rs 450 \n(4) The Power of Positive Thinking by Norman Vincent Peale price : Rs 170 \n(5) The Alchemist by Paulo Coelho price : Rs 220 \n" << endl;
            cin >> items;
            if (items == '1')
            {
                bill += 450;
            }
            else if (items == '2')
            {
                bill += 150;
            }
            else if (items == '3')
            {
                bill += 450;
            }
            else if (items == '4')
            {
                bill += 170;
            }
            else if (items == '5')
            {
                bill += 220;
            }
            else
            {
                cout << "Please select the correct item please try again" << endl;
                goto selfHelp;
            }
            againselfhelp:
            cout << "Do you want to add more items to your cart? (y/n)" << endl;
            cin >> moreItems;
            if (moreItems == 'y' || moreItems == 'Y')
            {
                goto genere;
            }
            else if (moreItems == 'n' || moreItems == 'N')
            {
                cout << "Thank you for shopping with us" << endl;
            }
            else
            {
                cout << "Please select the correct option please try again" << endl;
                goto againselfhelp;
            }
        }
        else
        {
            cout << "Please select the correct genere please try again" << endl;
            goto genere;  
        }
    }
    else 
    {
        cout << "Please press 's' to start your purchase \n" << endl;
        goto start;
    }
    return bill;

}