#include <iostream>
using namespace std;
int main() {
  
double numdays, average;
	int numtellers;
	double total = 0;

  cout << "This program will find the number of tellers and the total number of days missed by all the tellers" << endl;
	cout << "How many tellers worked at Nation's Bank last year?" << endl;
	cin >> numtellers;

	for (int workers = 1; workers <= numtellers; workers++)
	{
		cout << endl << "How many sick days was teller "
			<< workers << " out for, during the last year ?" << endl;
		cin >> numdays;

		total = total + numdays;



  }

  average = total; 

	cout << endl;
	cout << "The " << numtellers << 
  " tellers were out sick for a total of " << average << endl;





}