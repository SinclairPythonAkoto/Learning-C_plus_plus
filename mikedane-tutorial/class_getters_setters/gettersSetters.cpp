#include <iostream>

using namespace std;

class Movie{
	private:
		string rating;
	public:
		string title;

		Movie(string title, string rating){
			this->title = title;
			this->setRating(rating);
		}

		string getRating(){
			return this->rating;
		}
		void setRating(string rating){
			if(rating == "G" || rating == "PG" || rating == "PG-13" || rating == "R" || rating == "NR"){
				this->rating = rating;
			} else {
				this->rating = "NR";
			}     
		}
};

int main()
{
	Movie avengers("The Avengers", "PG-15");

	cout << avengers.getRating() << endl;

	Movie blackPanther("Black Panther", "PG-13");

    cout << "Right movie rating: " << blackPanther.getRating() << endl;



	return 0;
}
