class Solution {
public:
    string reverseVowels(string s) {
        char vowels[10] = {'A', 'E', 'I', 'O', 'U', 'a', 'e', 'i', 'o', 'u'};
        char* end = vowels + sizeof(vowels)/sizeof(char);

        int i = 0, j = s.size() - 1;
        while (i < j)
        {
            if ( find(vowels, end, s[i]) == end )
                i ++;
            else if ( find(vowels, end, s[j]) == end )
                j --;
            else
                swap (s[i++], s[j--]);
        }

        return s;
    }
};
