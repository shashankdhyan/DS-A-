class Solution {
public:
string mostCommonWord(string paragraph, vector<string>& banned) {
int i,j,max=0;
string word;
for(i=0;i<paragraph.size();i++)
{
paragraph[i]=isalpha(paragraph[i])?tolower(paragraph[i]):' ';
}
stringstream ss(paragraph);
unordered_set s(banned.begin(),banned.end());
unordered_map<string,int> ma;
while(ss>>word)
{
if(!s.count(word))
ma[word]++;
}

    for(auto itr:ma)
    {
        if(itr.second>max)
        {
            max=itr.second;
            word=itr.first;
        }
    }
    return word;
}
};