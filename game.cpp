#include "game.h"



Home::Home() {
    
    cout << R"(
 _    _      _                            _          _   _            _____       _     
| |  | |    | |                          | |        | | | |          |  _  |     (_)    
| |  | | ___| | ___ ___  ____ ___   ___  | |_ ___   | |_| |__   ___  | | | |_   _ _ ____
| |/\| |/ _ \ |/ __/ _ \|  _   _ \ / _ \ | __/ _ \  | __|  _ \ / _ \ | | | | | | | |_  /
\  /\  /  __/ | (_| (_) | | | | | |  __/ | || (_) | | |_| | | |  __/ \ \/' / |_| | |/ / 
 \/  \/ \___|_|\___\___/|_| |_| |_|\___|  \__\___/   \__|_| |_|\___|  \_/\_\\____|_/___|

'---------------------------------------------------------------------------------------'

                        "Do you want level one or level two?"

     ***HINTS***
     - if you want level one please press num 1.
     - if you want level two please press num 2.
     - if you want to exit please press any button.

    )" << '\n';
    
    cout << "Press enter to start...\n";
    cin.get();
    system("cls");
}

Game::Game() {
    cout << " _______________________________\n";
    cout << "|                               |\n";
    cout << "| Please   ...Enter your age !! |\n";
    cout << "|_______________________________|\n\n";
    int age = 0;
    cin >> age;

    if (age >= 18) {
    cin.ignore();
    cout << "\nOK  ...Press enter to continue.\n";
    cin.get();
    system("cls");
    cout << "What's the level that you want?\n";
    cin >> choice;
    if (choice == 1) {
        Level_1 L; // here we creating object from level_1 
        L.play();
        
    }
    else if (choice == 2) { 
        Level_2 L; // here we creating object from level_2
        L.play();
    }
    else {
        cout << "\nYour choice is wrong    ...Try again!\n\n";
        system("pause");
    }    
    }
    else {
        system("cls");
        cout << "\nSorry  ...You are too young to play.\n\n";
        system("pause");
    }
}



void Level_1::play() {
    score=0;
    string name;
    cout << "\nWhat's your name?\n";
    cin >> name;

    string ans_1;
    cout << "\nHi " << name;
    cout << "\n\n*To start the 'level 1' quiz, Enter Yes\n";
    cout << "\n*TO return home, Enter No\n\n";
    cin >> ans_1;

    if (ans_1 == "Yes" || ans_1 == "yes" || ans_1 == "yEs" || ans_1 == "yeS" || ans_1 == "YES" ){
        cout << "\nOK  ...Good luck!\n\n";
        cout << "Press enter to continue.";
        cin.get();
        cin.ignore();
        system("cls");
        Question q1;
        q1.setQuestion("1. How many access specifiers are there?","1","2","3","4","c",20);
        q1.askQuestion();
        system("cls");
        Question q2;
        q2.setQuestion("2. What does a class contain in C++?","Data","Methods","Data and Methods","Arrays","c",20);
        q2.askQuestion();
        system("cls");
        Question q3;
        q3.setQuestion("3. What operator does a pointer object of a class use to access its data members and member functions?","::",".","->",":","c",20);
        q3.askQuestion();
        system("cls");
        Question q4;
        q4.setQuestion("4. The members of a class in C++ are by default?","private","public","protected","private and public","a",20);
        q4.askQuestion();
        system("cls");
        Question q5;
        q5.setQuestion("5. Objects can be used?","To access any member of a class","To access only public members of a class","To access only protected members of a class","To access only private members of a class","b",20);
        q5.askQuestion();
        system("cls");
        cout << "Your Total Score is " << score;
        if (score > 50) {
    
        cout << R"(
 __  __               ____                           ____
 \ \/ /___  __  __   / __ \____ ______________  ____/ / /
  \  / __ \/ / / /  / /_/ / __  / ___/ ___/ _ \/ __  / / 
  / / /_/ / /_/ /  / ____/ /_/ (__  |__  )  __/ /_/ /_/  
 /_/\____/\____/  /_/    \____/____/____/\___/\____/_/   


         THE CODE OF LEVEL 1 IS: AJ2003
 
        )" << "\n\n";
        cout << "Press enter to continue.\n";
        cin.get();
        
        string ans_2;
        cout << "\nDo you want play with me in level 2?\n";
        cin>>ans_2;
        system("cls");
        
        if (ans_2 == "Yes" || ans_2 == "yes" || ans_2 == "yEs" || ans_2 == "yeS" || ans_2 == "YES") {
            Level_2 l;
            l.play();
        }
        else {
            cout << "\nOK  ...Goodbye!\n\n";
            cout << "Press enter to return home.";
            cin.ignore();
            cin.get();
            system("cls");
            Home h3;
            Game g2;
        }
        }
        else {
            cout << "\nYou failed... Sorry, better luck next time.\n\n";
            cout << "Press enter to return home.";
            cin.get();
            system("cls");
            Home dd;
            Game gg;
        }
    

    }
    else {
        cout << "\nOK  ...Goodbye!\n\n";
        cin.get();
        cout << "Press enter to return home.";
        cin.get();
        system("cls");
        Home h1;
        Game G;
    }

}

void Level_2::play() {
    score=0;
    string code = "AJ2003";
    string ans_1;
    cout << "\nIf you succeed in level 1, Enter Yes\n";
    cout << "IF No, Enter No and return to solve level 1\n";
    cin >> ans_1;
    
    if (ans_1 == "Yes" || ans_1 == "yes" || ans_1 == "yEs" || ans_1 == "yeS" || ans_1 == "YES") {

            cout << "\nEnter The Code Of Level 1\n";
            string user_code;
            cin>>user_code;
            if ( user_code == code ) {

            cout << "\nWELLCOME TO LEVEL 2!!\n\n";
            cout << "Press enter to continue.";
            cin.get();
            cin.ignore();
            system("cls");

            string name;
            cout << "\nWhat's your name?\n\n";
            cin >> name;

            string ans_2;
            cout << "\nHi " << name;
            cout << "\n\n*To start the 'level 2' quiz, Enter Yes\n";
            cout << "\n*TO return home, Enter No\n\n";
            cin >> ans_2;

            if (ans_2 == "Yes" || ans_2 == "yes" || ans_2 == "yEs" || ans_2 == "yeS" || ans_2 == "YES") {
                cout << "\nOK  ...Good luck!\n\n";
                cout << "Press enter to continue.";
                cin.get();
                cin.ignore();
                system("cls");
                Question q1;
                q1.setQuestion("1. Which one is a valid class declaration?","public class A {}","class A {}","class A {int x;};","object A {int x;};","c",20);
                q1.askQuestion();
                system("cls");
                Question q2;
                q2.setQuestion("2. What's function object?","An object with a single function.","An object with only functions.","An object with more than one function.","An object with no functions.","a",20);
                q2.askQuestion();
                system("cls");
                Question q3;
                q3.setQuestion("3. Which among the following is the main use of object?","To create instance of a function.","To create instance of a program.","To create instance of class.","To create instance of structures.","c",20);
                q3.askQuestion();
                system("cls");
                Question q4;
                q4.setQuestion("4. Objects type________","Can be changed in runtime.","Can't be changed in runtime.","Can be changed in compile time.","May or may not get changed.","b",20);
                q4.askQuestion();
                system("cls");
                Question q5;
                q5.setQuestion("5. Which among the following is called first, automatically, whenever an object is created?","Class","Constructor","New","Tigger","b",20);
                q5.askQuestion();
                system("cls");
                cout << "Your Total Score is " << score;
                
                if (score > 50){
    
                cout << R"(
 __  __               ____                           ____
 \ \/ /___  __  __   / __ \____ ______________  ____/ / /
  \  / __ \/ / / /  / /_/ / __  / ___/ ___/ _ \/ __  / / 
  / / /_/ / /_/ /  / ____/ /_/ (__  |__  )  __/ /_/ /_/  
 /_/\____/\____/  /_/    \____/____/____/\___/\____/_/   
 
                )" << "\n\n";
        
                system("pause");
                    }
                    else {
                        cout << "\nYou failed... Sorry, better luck next time.\n\n";
                       cout << "Press enter to return home.";
                        cin.get();
                        system("cls");
                        Home ddd;
                        Game ggg;
                    
                    }
            }

              
            else {
                cout << "\nOK  ...Goodbye!\n\n";
                cin.get();
                cout << "Press enter to return home.";
                cin.get();
                system("cls");
                Home h2;
                Game G1;
            }
            
         }
        else {
            system("cls");
            cout<<"\nthe code you entered is false\n\n";
            cout << "Press enter to return to level one....\n";
            cin.ignore();
            cin.get();
            system("cls");
            cout << "\nOK  ...Good luck in leyel 1.\n\n";
            cout << "Press enter to continue.\n";
            cin.get();
            system("cls");
            Level_1 l;
            l.play();
}
    }
        else {
            system("cls");
            cout << "\nOK  ...Good luck in leyel 1.\n\n";
            cin.ignore();
            Level_1 l;
            l.play();
    }
}



void Question::setQuestion(string q, string a1, string a2, string a3, string a4, string ca, int pa){
    Question_Text = q;
    answer_1 = a1;
    answer_2 = a2;
    answer_3 = a3;
    answer_4 = a4;
    correct_answer = ca;
    Question_Score = pa;
}

void Question::askQuestion(){
    string user_answer;
    cout << "\n" << Question_Text << "\n";
    cout << "a. " << answer_1 << "\n";
    cout << "b. " << answer_2 << "\n";
    cout << "c. " << answer_3 << "\n";
    cout << "d. " << answer_4 << "\n\n";


    cout << "What is your answer?" << "\n";
    cin >> user_answer;


    if (user_answer == correct_answer) {
        cout << "\nCorrect!" << "\n";
        score = score + Question_Score;
        cout << "\nPress enter to continue." << "\n";
        cin.get();
        cin.ignore();
    }
    else {
        cout << "\n";
        cout << "Sorry, you're wrong." << "\n";
        cout << "The correct answer is " << correct_answer << "." << "\n\n";
        cout << "Press enter to continue." << "\n";
        cin.get();
        cin.ignore();
    }
}

