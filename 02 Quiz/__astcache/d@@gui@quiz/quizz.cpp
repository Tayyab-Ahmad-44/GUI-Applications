//---------------------------------------------------------------------------

#include <fmx.h>
#include <queue>
#pragma hdrstop

#include "Quizz.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.fmx"

using namespace std;

class Question
{
public:
	char* Text;
	char* Answer1;
	char* Answer2;
	char* Answer3;
	int CorrectAnswer;

	Question(){}
	Question(char* Text, char* Answer1, char* Answer2, char* Answer3, int CorrectAnswer)
	{
		this->Text = Text;
		this->Answer1 = Answer1;
		this->Answer2 = Answer2;
		this->Answer3 = Answer3;
		this->CorrectAnswer = CorrectAnswer;
	}
};

queue<Question> LoadQuestions()
{
	Question q1 = Question("Who is the topper of the class?", "Bilal", "Rehma", "Haseeb", 2);
	Question q2 = Question("Who is the tallest person in the class?", "Hammad", "Haris", "Tayyab", 1);
	Question q3 = Question("What is the name of our Linear Algebra teacher?", "Engr. Shaharyar", "Dr. Ikram Ullah", "Dr. Mushtaq Ahmad", 3);

	queue<Question> question;
	question.push(q1);
	question.push(q2);
	question.push(q3);

	return question;
}

queue<Question> questions;
Question currentQuestion;

int selectAnswer;
int points = 0;

TForm1 *Form1;
//---------------------------------------------------------------------------
__fastcall TForm1::TForm1(TComponent* Owner)
	: TForm(Owner)
{
// Loading questions in queue and then accessing questions
	questions = LoadQuestions();
	currentQuestion = questions.front();

	PointsLabel->Text = points;

// Connecting UI with program
	QuestionLabel->Text = currentQuestion.Text;
	Answer1RadioButton->Text = currentQuestion.Answer1;
	Answer2RadioButton->Text = currentQuestion.Answer2;
	Answer3RadioButton->Text = currentQuestion.Answer3;

// Poping question b/c if we call that constructor again we get another question
	questions.pop();
}
//---------------------------------------------------------------------------


void __fastcall TForm1::Answer1RadioButtonChange(TObject *Sender)
{
	selectAnswer = 1;
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Answer2RadioButtonChange(TObject *Sender)
{
	selectAnswer = 2;
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Answer3RadioButtonChange(TObject *Sender)
{
	selectAnswer = 3;
}
//---------------------------------------------------------------------------

void __fastcall TForm1::ConfirmButtonClick(TObject *Sender)
{
	if( Answer1RadioButton->IsChecked == true || Answer2RadioButton->IsChecked == true || Answer3RadioButton->IsChecked == true )
	{
	if(selectAnswer == currentQuestion.CorrectAnswer)
	{
		points++;
		PointsLabel->Text = points;
	}
	if(!questions.empty())
	{
		currentQuestion = questions.front();

		QuestionLabel->Text = currentQuestion.Text;
		Answer1RadioButton->Text = currentQuestion.Answer1;
		Answer2RadioButton->Text = currentQuestion.Answer2;
		Answer3RadioButton->Text = currentQuestion.Answer3;

		questions.pop();

		Answer1RadioButton->IsChecked = false;
		Answer2RadioButton->IsChecked = false;
		Answer3RadioButton->IsChecked = false;
	}
	else
	{
		QuestionLabel->Text = "Thanks For Attemping All The Questions";
		Answer1RadioButton->Text = "-";
		Answer2RadioButton->Text = "-";
		Answer3RadioButton->Text = "-";

		Answer1RadioButton->IsChecked = false;
		Answer2RadioButton->IsChecked = false;
		Answer3RadioButton->IsChecked = false;

		ConfirmButton->Enabled = false;
		ConfirmButton->Text = "THE END!";
	}
	}
}
//---------------------------------------------------------------------------
