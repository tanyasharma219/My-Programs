task-  For each test case, print 3 lines containing the formatted A, B, and C , respectively. Each A, B, and C must be formatted as follows:

     1. A: Strip its decimal (i.e., truncate it) and print its hexadecimal representation (including the Ox prefix) in lower case letters.
     2. B: Print it to a scale of 2 decimal places, preceded by a  + or - sign (indicating if it's positive or negative), right justified, and
        left-padded with underscores so that the printed result is exactly 15 characters wide.
     3. C: Print it to a scale of exactly nine decimal places, expressed in scientific notation using upper case.
     
ans:
#include <iostream>
#include <iomanip> 
using namespace std;

int main() {
	int T; cin >> T;
	cout << setiosflags(ios::uppercase);
	cout << setw(0xf) << internal;
	while(T--) {
		double A; cin >> A;
		double B; cin >> B;
		double C; cin >> C;

  
cout << resetiosflags(ios::uppercase|ios::scientific);
cout << std::setiosflags (ios::left|ios::fixed);
cout << setw(0) << std::hex;
cout << std::setiosflags (ios::showbase);
cout << (unsigned long)A << std::endl;

cout << resetiosflags(ios::showbase);
cout << setw(0xf) << setfill('_')<< std::dec ;
cout << setiosflags (ios::showpos) << setprecision(2);
cout  << B << endl;

cout << resetiosflags(ios::fixed|ios::showpos);
cout << setiosflags (ios::scientific | ios::uppercase) << setprecision(9);
cout << C << std::endl;


	}
	return 0;

}
