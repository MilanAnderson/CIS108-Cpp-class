#include <iostream>
#include <stack>
#include <string>

using namespace std;

int main()
{
	string willy_wonka_quote = "Invention, my dear friends, is 93 % perspiration, 6 % electricity, 4 % evaporation, and 2 % butterscotch ripple";
	string reverse_quote = "";
	stack<char> quote_stack;
	for (int idx = 0; idx < willy_wonka_quote.size(); idx++)
	{
		quote_stack.push(willy_wonka_quote[idx]);
	}
	while (quote_stack.empty() == false)
	{
		reverse_quote = reverse_quote + quote_stack.top();
		quote_stack.pop();
	}
	cout << willy_wonka_quote << endl;
	cout << reverse_quote << endl;

return 0;
}


