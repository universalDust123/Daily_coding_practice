unsigned int reverse(int x)
{
unsigned int ans=0;
if(x<0)
return 0;
while(x!=0)
{
int digit = x % 10;
ans =(ans*10) + digit;
x /= 10;
}
return ans;
}

class Solution {
public:
bool isPalindrome(int x) {
int rev=reverse(x);
if(x == rev)
return true;

 return false;
}
};
