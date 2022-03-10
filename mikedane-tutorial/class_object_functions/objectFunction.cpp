#include <iostream>

using namespace std;

class Student {
	public:
		string name;
		string subject;
		int score;
		Student(string name, string subject, int score){
			this->name = name;
			this->subject = subject;
			this->score = score;
		}

		bool testResults(){
			if(score >= 75){
				return true;
			}
			return false;
		}
};

int main()
{
	Student student1("Jim", "Buisness", 60);
	Student student2("Claire", "Science", 80);

	cout << student1.testResults() << endl;
	cout << student2.testResults() << endl;
}
