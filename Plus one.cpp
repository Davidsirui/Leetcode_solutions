class Solution {
public:
    vector<int> plusOne(vector<int>& digits) 
    {
    int cin = 1;//½øÎ»
    int digitsSize = digits.size();
    vector<int> result;    
    for(int i = digitsSize-1;i>=0;i--)
    {
        if((digits[i]+cin)<10)
        {
            digits[i] = digits[i]+cin;
            cin = 0;
        }
        else
        {
            digits[i] = (digits[i]+cin)%10;
            cin = 1;
        }
    }
    if(cin == 0)
    {
        return digits;
    }
    else
    {
        result.push_back(1);
        for(int j = 0;j<digitsSize;j++)
        {
            result.push_back(digits[j]);
        }
        return result;    
    }
};
};