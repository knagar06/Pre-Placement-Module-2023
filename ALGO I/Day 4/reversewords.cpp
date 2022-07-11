string reverseWords(string s) {
    int low = 0;
    int high = 0;
    for(int i=0;i<s.length();i++)
    {
        if(i==s.length()-1 || s[i]==' ')
        {
            if(i==s.length()-1)
            high = i;
            else{
                high = i-1;
            }
            while(low<=high)
            {
              char temp = s[low];
              s[low] = s[high];
              s[high] = temp;
                low++;
                high--;
            }
            low=i+1;
        }
    }
    return s;
}