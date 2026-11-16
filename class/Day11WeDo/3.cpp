#include <iostream>
using namespace std;
int addScores(int first, int second)
{
    return first + second;
    
}
int main()
{
    int score1, score2;
   
    cin>>score1>>score2;
    int total=addScores(score1, score2);
    cout<<total;
    return 0;
}