#include<iostream>
using namespace std;

int score;
int choice;


class Question {

private:
    string Question_Text;
    string answer_1;
    string answer_2;
    string answer_3;
    string answer_4;
    string correct_answer;
    int Question_Score;
    
public:
    void setQuestion(string, string, string, string, string, string, int);  // * setter for Question * [encuspsulation]
    void askQuestion();  // * getter for Question

};


class Levels { // * parent class *
public:
    virtual void play() = 0; // * here we achhieved polymorphism(pure_virtual_fun()) *

};

class Level_1 : public Levels { // * child one *
public:
    void play();             // *(overriding_fun)*
    
};

class Level_2 : public Levels { // * child two *
public:
    void play();

};

class Home {
public:
    Home();   // * default constructor * start window

};

class Game {
public:
    Game();    // * default constructor *

};
