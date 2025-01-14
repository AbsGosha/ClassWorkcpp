#include "Users.h"

Users::Users()
{
}

Users::Users(string categoryTest, string nameTest)
{
    this->categoryTest = categoryTest;
    this->nameTest = nameTest;
}

string Users::getNameTest()
{
    return this->nameTest;
}

string Users::getCategoryTest()
{
    return this->categoryTest;
}

void Users::setNameTest(string nameTest)
{
    this->nameTest = nameTest;
}

void Users::setCategoryTest(string categoryTest)
{
    this->categoryTest = categoryTest;
}

void Users::goTest()
{
    bool goTest;
    cout << "Press 1 to pass the test: ";
    cin >> goTest;
    cout << endl; 
    vector <int> answersUser;
    int answerUser;
    int goodMark = 0;
    int badMark = 0;
    string answer;
    string question;
    vector<string>questions;
    vector<string>answers;
    int correctAnswer;
    int questionsNum;
    for (int i = 0; i < questions.size(); i++) {
        cin >> question;
        questions.push_back(question);
    }
    for (int i = 0; i < answers.size(); i++) {
        cin >> answer;
        answers.push_back(answer);
    }
    for (int i = 0; i < questions.size(); i++) {
        cin >> correctAnswer;
    }
    for (int i = 0; i < questions.size(); i++) {
        for (auto item : questions) {
            cout << endl;
            cout << "Question: " << i + 1 << ":" << endl;
            cout << item;
            cout << endl;
        }
        cout << endl;
        cout << "Enter answer for " << i + 1 << " question: " << endl;
        cout << "Choice: " << endl;
        for (auto item : answers) {
            cout << item << " | ";
        }
        cout << endl;
        cin >> answerUser;
        answersUser.push_back(answerUser);
        if (answerUser == correctAnswer) {
            cout << "The answer is correct" << endl;
            goodMark++;
        }
        else {
            cout << "The answer is incorrect" << endl;
            badMark++;
        }
    }
    /*float procentCorrectAnswer = (goodmark / questions.size()) * 100;*/
    cout << endl;
    cout << "The number of correct answers: " << goodMark << endl;
    cout << "The number of incorrect answers: " << badMark << endl;
    /*cout << "Procent correct answers: " << procentCorrectAnswer << "%";*/
    //Tests newTest(category, name, questions, answersMatrix, correctAnswers);
    //return newTest;
}

//User::~User()
//{
//
//}

