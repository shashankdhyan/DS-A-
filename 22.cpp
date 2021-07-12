#include <iostream>
using namespace std;

int main() {
	    int X,Y;
	    cin>>X>>Y;
	    string s1,s2;
	    getline(cin,s1);
	    getline(cin,s2);
	    
	    int dp[X+1][Y+1];
	    int lcs = 0;
	    int x1,y1;
	    for(int i=0;i<=X;++i)
	        dp[i][0]=0;
	    for(int i=0;i<=Y;++i)
	        dp[0][i]=0;
	    for(int i=1;i<=X;++i)
	    {
	        for(int j=1;j<=Y;++j)
	        {
	            if(s1[i-1]==s2[j-1])
	            {
	                dp[i][j] = 1 + dp[i-1][j-1];
	                if(lcs < dp[i][j])
	                {
	                    lcs = dp[i][j];
	                }
	            }
	            else
	                dp[i][j]=0;
	        }
	    }
	   cout<<lcs<<"\n";
	return 0;
}