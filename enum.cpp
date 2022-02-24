#include <iostream>
#include <vector>

using namespace std;

vector<string> answer;



void subnum(string str, int types, int length)
{
	if(length == 0) answer.push_back(str);
	else {
		length--;
		for(int i = 0; i < types; i++) {
			string c = to_string(i);
			subnum(str + c, types, length);
		}
	}
}


void update(string row, int eat, int bite)
{
	int length = (int) row.size();
	vector<string> next_answer;

	while(!answer.empty()) {
		int e = 0, b = 0;
		vector<int> seen(length, 0);

		string candidate = answer.back();
		answer.pop_back();

		// check eat
		for(int i = 0; i < (int) length; i++) {
			if(row[i] == candidate[i]) {
				e++;
				seen[i] = 1;
			}
		}

		// check bite
		for(int i = 0; i < length; i++) {
			for(int j = 0; j < length; j++) {
				if(i == j) continue;
				if(seen[i]) continue;

				if(row[i] == candidate[j]) {
					b++;
					seen[i] = 1;
				}
			}
		}
		
		if(e == eat && b == bite) next_answer.push_back(candidate);
	}

	answer = next_answer;
	for(string x : answer) cout << x << " ";
	cout << "\n";

}

int main()
{
	int t, l;	// type, length
	
	while(true) {
		cout << "Press the number of types and length: ";
		cin >> t >> l;

		if(t < 0 || t > 10) cerr << "Sorry. The number of types must be >= 1 and <= 10." << endl;
		if(l <= 0) cerr << "The length must be a positive integer." << endl;
		else break;
	}

	subnum("", t, l);

	while(true) {
		cout << "Press numbers, # of eats, and # of bites: ";
		string r;
		int e, b;
		cin >> r >> e >> b;

		update(r, e, b);

		if(answer.size() == 1) {
			cout << "The answer is" << *answer.begin() << endl;
			break;
		}
		else if(answer.empty()) {
			cout << "There is no answer." << endl;
			break;
		}

		cout << "Continue? [y/n] : ";
		string c; cin >> c;
		if(c == "n" || c == "N") break;
	}

	return 0;
}

