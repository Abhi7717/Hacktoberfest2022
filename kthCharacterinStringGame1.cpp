class Solution {
public:
    char kthCharacter(int k) {
       string ss="a";
       int l= ss.size()-1;
       char ch=' ';
       for(int i=0;i<ss.size() && ss.size()<k;i++)
       {
        if(ss[i]=='z')
        {
            ch='a';

        }
        else
           ch=ss[i]+1;
            // cout<<ch<<endl;
            ss=ss+ch;
            // cout<<ss<<endl;
            if(i==l)
            {
                i=-1;
                l=ss.size()-1;
            }
       } 
    //    cout<<ss;
       return ss[k-1];
    }
};
