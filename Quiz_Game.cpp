// write a program to make a quiz game in c++.
#include <iostream>

using namespace std;

int main()
{
    int final_Result;
    char choice;
    int playQuiz(void);
    final_Result = playQuiz();
    cout << "Your Total score is " << final_Result << endl;
    if (final_Result >= 3)
    {
        cout << "\nYou passed the quiz.\n" << endl;
        cout << "Congratulations!\n" << endl;
        cout << "Do you want to play again (y/n)?" << endl;
        if (choice == 'y' || choice == 'Y')
        {
            playQuiz();
        }
        else
        {
            cout << "Thank you for playing the quiz game.\n" << endl;
        }
    }
    else
    {
        cout << "\nYou failed the quiz.\n" << endl;
        cout << "Please try again.\n" << endl;
        playQuiz();
        final_Result = playQuiz();
        cout << "Your Total score is " << final_Result << endl;
    }

}

int playQuiz()
{
    char c, option;
    int score = 0;
    start:
    cout << "-------------Welcome to the Quiz Game-------------" << endl;
    cout << "----------Please follow the instructions----------" << endl;
    cout << "Step 1: Quiz contains 5 questions." << endl;
    cout << "Step 2: You will be given 1 mark for each right answer." << endl;
    cout << "Step 3: There is no negative marking." << endl;
    cout << "Step 4: Please press s to start the quiz." << endl;
    cout << "Step 5: Please select option a, b, c or d." << endl;
    cout << "Step 6: If you score >= 6 then you pass otherwise you fail." << endl;
    cin >> c;
    if (c == 's' || c == 'S')
    {
        cout << "\nQuestion 1: Which of the following professions has the highest projected employment for 2024?" << endl;
        cout << "(a) Financial Advisor \n(b) Truck driver \n(c) Teacher \n(d) Economist"<< endl;
        cin >> option;
        if (option == 'a' || option == 'A')
        {
            score++;
            cout << "Right answer.\n" << endl;
        }
        else
        {
            cout << "Wrong answer.\n" << endl;
        }
        cout << "Question 2: Which of the following is NOT a learning objective in this course?" << endl;
        cout << "(a) Applying psychology and sociology to finance \n(b) How to make money \n(c) How we incentivize people to get things done \n(d) Regulating financial markets."<< endl;
        cin >> option;
        if (option == 'b' || option == 'B')
        {
            score++;
            cout << "Right answer.\n" << endl;
        }
        else
        {
            cout << "Wrong answer.\n" << endl;
        }
        cout << "Question 3: According to Andrew Carnegie, what should somebody do once she is wealthy?" << endl;
        cout << "(a) Retire early and commit to philanthropy while young \n(b) Throw extravagant parties to help her wealth trickle down \n(c) Pass it on to her children \n(d) Retire late to accumulate as much wealth as possible, and then give the wealth away. "<< endl;
        cin >> option;
        if (option == 'a' || option == 'A')
        {
            score++;
            cout << "Right answer.\n" << endl;
        }
        else
        {
            cout << "Wrong answer.\n" << endl;
        }
        cout << "Question 4: Why is it relevant that finance tends to attract large amounts of money?" << endl;
        cout << "(a) Money can be used for good or evil \n(b) Finance attracts people from around the globe \n(c) Financial markets are a critical components of economic success \n(d) All of the above. "<< endl;
        cin >> option;
        if (option == 'd' || option == 'D')
        {
            score++;
            cout << "Right answer.\n" << endl;
        }
        else
        {
            cout << "Wrong answer.\n" << endl;
        }
        cout << "Question 5: A 5% 3-month Value At Risk (VaR) of $1 million represents:" << endl;
        cout << "(a) A 5 percentage chance of the asset declining in value by $1 million during the 3-month time frame. \n(b) The likelihood of a 5 percentage of $1 million decline in the asset over the next 3-month. \n(c) A 5 percentage decline in the value of the asset after 3 month, per each $1 million of notional. \n(d) A 5 percentage chance of the asset increasing in value by $1 million during the 3-month time frame."<< endl;
        cin >> option;
        if (option == 'a' || option == 'A')
        {
            score++;
            cout << "Right answer.\n" << endl;
        }
        else
        {
            cout << "Wrong answer.\n" << endl;
        }
        return score;
    }

    else
    {
        cout << "Please press 's' to start the quiz.\n\n" << endl;
        goto start;
    }
    return 0;
}