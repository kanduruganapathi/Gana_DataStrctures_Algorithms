vector<int> alternateNumbers(vector<int>&a) {
    // Write your code here.
    vector<int> pos;
    vector<int> neg;
    int n=a.size();
    vector<int> tmp;
    for(int i=0;i<n;i++)
    {
        if(a[i]>=0)
        {
            pos.push_back(a[i]);
        }
        else{
            neg.push_back(a[i]);

        }
    }
    for(int i=0;i<pos.size();i++)
    {
        tmp.push_back(pos[i]);
        tmp.push_back(neg[i]);
    }
    return tmp;
}
