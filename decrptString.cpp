/*
 * a3e5f2a1b2
 outout aaaeeeeeffabb
 */
string decrpt(string s){
    int len = s.size();
    string result;
    int i = 0;
    while(i<len){
        char temp = s[i];
        int k = i;
        while(isdigit(s[i+1])){
            i++;
        }
        string s_temp = s.substr(k+1, i);
        int times = stoi(s_temp);
        while(times>0){
            result += temp;
            times--;
        }
        i++;
    }
    return string;
}