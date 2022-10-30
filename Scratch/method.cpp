#include "method.h"

void method::scratchMethod(string& s1, string& s2) {

	int sumS1 = 0;
	int sumS2 = 0;
	

	for (auto c : s1) {
		if (c == 'A' || c == 'a' || c == 'E' || c == 'e' || c == 'I' || c == 'i' || c == 'L' || c == 'l' || c == 'O' || c == 'o' || c == 'R' || c == 'r' || c == 'S' || c == 's' || c == 'T' || c == 'U' || c == 'u') {
			sumS1 += 1;
		}
		else if (c == 'D' || c == 'd' || c == 'G' || c == 'g') {
			sumS1 += 2;
		}
		else if (c == 'B' || c == 'b' || c == 'M' || c == 'm' || c == 'P' || c == 'p') {
			sumS1 += 3;
		}
		else if (c == 'F' || c == 'f' || c == 'H' || c == 'h' || c == 'V' || c == 'v' || c == 'W' || c == 'w' || c == 'Y' || c == 'y') {
			sumS1 += 4;
		}
		else if (c == 'K' || c == 'k') {
			sumS1 += 5;
		}
		else if (c == 'Q' || c == 'q' || c == 'Z' || c == 'z') {
			sumS1 += 10;
		}
		else {
			sumS1 += 0;
		}
	}

	for (auto c : s2) {
		if (c == 'A' || c == 'a' || c == 'E' || c == 'e' || c == 'I' || c == 'i' || c == 'L' || c == 'l' || c == 'O' || c == 'o' || c == 'R' || c == 'r' || c == 'S' || c == 's' || c == 'T' || c == 'U' || c == 'u') {
			sumS2 += 1;
		}
		else if (c == 'D' || c == 'd' || c == 'G' || c == 'g') {
			sumS2 += 2;
		}
		else if (c == 'B' || c == 'b' || c == 'M' || c == 'm' || c == 'P' || c == 'p') {
			sumS2 += 3;
		}
		else if (c == 'F' || c == 'f' || c == 'H' || c == 'h' || c == 'V' || c == 'v' || c == 'W' || c == 'w' || c == 'Y' || c == 'y') {
			sumS2 += 4;
		}
		else if (c == 'K' || c == 'k') {
			sumS2 += 5;
		}
		else if (c == 'Q' || c == 'q' || c == 'Z' || c == 'z') {
			sumS2 += 10;
		}
		else {
			sumS2 += 0;
		}
	}

	cout << sumS1 << "\n";
	cout << sumS2 << "\n";

	if (sumS1 > sumS2) {
		cout << "S1 wins\n";
	}
	else if (sumS1 < sumS2) {
		cout << "S2 wins\n";
	}
	else {
		cout << "It's a tie";
	}

}