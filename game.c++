#include <iostream>
#include <string>

using namespace std;

const int NUM_QUESTIONS = 20;


string questions[NUM_QUESTIONS] = {
    "What is the capital of France?",
    "In which year did World War II end?",
    "What is the largest planet in our solar system?",
    "Who wrote \"Romeo and Juliet\"?",
    "What is the capital of Japan?",
    "Which ocean is the largest?",
    "What is the currency of Australia?",
    "Who was the first President of the United States?",
    "What is the main ingredient in guacamole?",
    "In which year did the Titanic sink?",
    "What is the largest mammal on Earth?",
    "Who painted the Mona Lisa?",
    "What is the national flower of Japan?",
    "Which planet is known as the \"Red Planet\"?",
    "What is the largest desert in the world?",
    "Who wrote \"To Kill a Mockingbird\"?",
    "What is the capital of Canada?",
    "Which element has the chemical symbol \"H\"?",
    "What is the largest organ in the human body?",
    "Which famous scientist developed the theory of relativity?"
};

string options[NUM_QUESTIONS][4] = {
    {"Berlin", "Madrid", "Paris", "Rome"},
    {"1943", "1945", "1945", "1950"},
    {"Venus", "Mars", "Jupiter", "Saturn"},
    {"Charles Dickens", "William Shakespeare", "Jane Austen", "Mark Twain"},
    {"Beijing", "Seoul", "Tokyo", "Bangkok"},
    {"Indian Ocean", "Atlantic Ocean", "Pacific Ocean", "Arctic Ocean"},
    {"EUR", "Dollar", "Australian Dollar", "Weight"},
    {"Thomas Jefferson", "George Washington", "Abraham Lincoln", "John Adams"},
    {"Tomatoes", "Onions", "Avocado", "Peppers"},
    {"1910", "1912", "1915", "1920"},
    {"Elephant", "Blue Whale", "Giraffe", "Polar Bear"},
    {"Vincent van Gogh", "Leonardo da Vinci", "Pablo Picasso", "Claude Monet"},
    {"Rose", "Tulip", "Cherry Blossom", "Orchid"},
    {"Jupiter", "Venus", "Saturn", "Mars"},
    {"Sahara Desert", "Gobi Desert", "Arabian Desert", "Antarctic Desert"},
    {"J.K. Rowling", "Ernest Hemingway", "Harper Lee", "F. Scott Fitzgerald"},
    {"Ottawa", "Toronto", "Ottawa", "Montreal"},
    {"Hydrogen", "Helium", "Carbon", "Oxygen"},
    {"Heart", "Liver", "Skin", "Lungs"},
    {"Isaac Newton", "Galileo Galilei", "Albert Einstein", "Stephen Hawking"}
};

char correctAnswers[NUM_QUESTIONS] = {'c', 'b', 'c', 'b', 'c', 'c', 'c', 'b', 'c', 'b', 'b', 'b', 'c', 'd', 'a', 'c', 'a', 'a', 'c', 'c'};


bool askQuestion(const string& question, const string& optionA, const string& optionB, const string& optionC, const string& optionD, char correctAnswer) {
    char userAnswer;
    
    cout << question << "\n";
    cout << "a. " << optionA << "\n";
    cout << "b. " << optionB << "\n";
    cout << "c. " << optionC << "\n";
    cout << "d. " << optionD << "\n";
    cout << "Your answer (a, b, c, or d): ";
    
    cin >> userAnswer;
    cin.ignore(); 
    
    if (tolower(userAnswer) == tolower(correctAnswer)) {
        cout << "Correct!\n";
        return true;
    } else {
        cout << "Incorrect.\n";
        return false;
    }
}

int main() {
    int overallScore = 0;
    char playAgain;

    do {
        for (int i = 0; i < NUM_QUESTIONS; ++i) {
           
            system("cls");

            
            if (askQuestion(questions[i], options[i][0], options[i][1], options[i][2], options[i][3], correctAnswers[i])) {
                overallScore++;
            }
        }

        // Display overall score
        cout << "\nOverall Score: " << overallScore << " out of " << NUM_QUESTIONS << "\n\n";


        cout << "Do you want to play again? (y/n): ";
        cin >> playAgain;

        overallScore = 0; 

    } while (tolower(playAgain) == 'y');

    cout << "Thanks for playing! Goodbye.\n";

    return 0;
}
