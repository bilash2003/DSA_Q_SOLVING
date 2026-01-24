#Questions
// 1108. Defanging an IP Address - Easy
// Given a valid (IPv4) IP address, return a defanged version of that IP address.A defanged IP address replaces every period "." with "[.]".
// Example 1:
// Input: address = "1.1.1.1"
// Output: "1[.]1[.]1[.]1"
// Example 2:
// Input: address = "255.100.50.0"
// Output: "255[.]100[.]50[.]0"

#Solution
class Solution {
public:
    string defangIPaddr(string address) {
        //method-1
        // for(int i=0;i<address.size();i++){
        //     if(address[i]=='.'){
        //         address.replace(i,1,"[.]");
        //         i=i+2;
        //     }
        // }
        // return address;

        //method-2
        string res;
        for(char c : address){
            if(c=='.') res=res+"[.]";
            else res=res+c;
        }
        return res;
    }
};
