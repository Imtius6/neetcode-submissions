class Solution {
public:

    string encode(vector<string>& strs) {
        string encoded;
            for(string s:strs){
                encoded+=to_string(s.size())+"*"+s;
            }
            return encoded;
    }

    vector<string> decode(string s) {
      vector<string>res;
      int i=0;
      while(i<s.size()){
        int j=i;
        while(s[j]!='*'){
            j++;
        }
        int ln=stoi(s.substr(i,j-i));
        string word=s.substr(j+1,ln);
        res.push_back(word);
        i=j+1+ln;

      }
      return res;
    }
};
