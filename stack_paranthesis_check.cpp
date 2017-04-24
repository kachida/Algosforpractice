#include <map>

#include <set>

#include <list>

#include <cmath>

#include <ctime>

#include <deque>

#include <queue>

#include <stack>

#include <string>

#include <bitset>

#include <cstdio>

#include <limits>

#include <vector>

#include <climits>

#include <cstring>

#include <cstdlib>

#include <fstream>

#include <numeric>

#include <sstream>

#include <iostream>

#include <algorithm>

#include <unordered_map>



using namespace std;



bool arePair(char c1,char c2)

    {

    if(c1=='{' && c2=='}') return true;

    else if(c1 =='[' && c2==']' ) return true;

    else if(c1 == '(' && c2 == ')') return true;

    else return false;

    

}



bool ParanthesesBalanced(string exp)

    {

    stack<char> s;

    for(int i=0; i<exp.length(); i++)

        {

        

        if(exp[i]=='{' || exp[i]=='[' || exp[i]=='(')

            {

            s.push(exp[i]);

        }else if(exp[i]=='}' || exp[i]==']' || exp[i]==')')

            {

            if(s.empty() || !arePair(s.top(),exp[i]))

                {

               return false; 

            }else

                {

                   s.pop();

            }

            

        }

    }

    return s.empty()? true:false;

}



int main(){

    int t;

    cin >> t;

    for(int a0 = 0; a0 < t; a0++){

        string s;

        cin >> s;

        if(ParanthesesBalanced(s))

            {

            cout<<"YES\n";

        }else

            {

            cout<<"NO\n";

        }

    }

    return 0;

}
