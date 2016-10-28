#include <iostream>
#include <vector>

#include <boost/algorithm/string.hpp>

using namespace std;
using namespace boost;

int main(int argc, char *argv[])
{
    string s1 = "Hi there.";
    cout << s1 << endl;
	
    typedef vector <string> string_vector_type;
    string_vector_type sv;

	string s2("hello abc-*-ABC-*-aBc goodbye");
    split(sv, s2, is_any_of(" -*"), token_compress_on);

    cout << sv[0] << endl;    
	for(const string& s: sv) cout << s << " ";
	cout << endl;

    return(0);
}
 