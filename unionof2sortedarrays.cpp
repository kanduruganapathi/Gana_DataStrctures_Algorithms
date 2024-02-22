#include<set>
vector < int > sortedArray(vector < int > a, vector < int > b) {
    // Write your code here
    vector<int> uni;
    set<int> s;
    for(int i=0;i<a.size();i++)
    {
        s.insert(a[i]);
    }
    for(int i=0;i<b.size();i++)
    {
        s.insert(b[i]);
    }
    for(auto & it:s)
    {
        uni.push_back(it);
    }
    return uni;

}
