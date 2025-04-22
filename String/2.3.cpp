/*✅ Easy Level
Reverse a String
🔹Input: "hello" → Output: "olleh"
#include <bits/stdc++.h>
using namespace std;
string reverseString(string s) {
    reverse(s.begin(), s.end());
    return s;
}
*/

/*
Check Palindrome
🔹Input: "madam" → Output: true
bool isPalindrome(string s) {
    int i = 0, j = s.size() - 1;
    while(i < j) {
        if(s[i++] != s[j--]) return false;
    }
    return true;
}*/

/*
Count Vowels and Consonants
pair<int, int> countVowelsConsonants(string s) {
    int v = 0, c = 0;
    for(char ch : s) {
        if(isalpha(ch)) {
            ch = tolower(ch);
            if(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u') v++;
            else c++;
        }
    }
    return {v, c};
}*/

/*
Check Anagram (e.g., "listen" & "silent")
bool isAnagram(string a, string b) {
    sort(a.begin(), a.end());
    sort(b.begin(), b.end());
    return a == b;
}*/

/*
🟡 Medium Level
Longest Common Prefix

string longestCommonPrefix(vector<string>& strs) {
    if(strs.empty()) return "";
    sort(strs.begin(), strs.end());
    string a = strs[0], b = strs.back();
    int i = 0;
    while(i < a.size() && a[i] == b[i]) i++;
    return a.substr(0, i);
}*/

/*
Implement strstr() (substring search)
int strStr(string haystack, string needle) {
    int h = haystack.size(), n = needle.size();
    for(int i = 0; i <= h - n; i++) {
        if(haystack.substr(i, n) == needle) return i;
    }
    return -1;
}
*/

/*
Remove All Duplicates
string removeDuplicates(string s) {
    unordered_set<char> seen;
    string result = "";
    for(char ch : s) {
        if(seen.find(ch) == seen.end()) {
            seen.insert(ch);
            result += ch;
        }
    }
    return result;
}
*/

/*
String Compression
🔹Input: "aaabb" → Output: "a3b2"
string compressString(string s) {
    string res = "";
    int count = 1;
    for(int i = 1; i <= s.size(); i++) {
        if(s[i] == s[i-1]) count++;
        else {
            res += s[i-1];
            res += to_string(count);
            count = 1;
        }
    }
    return res;
}*/

/*
🔴 Hard Level
Longest Palindromic Substring
string longestPalindrome(string s) {
    int n = s.size(), start = 0, len = 1;
    for(int i = 0; i < n;) {
        int l = i, r = i;
        while(r < n - 1 && s[r] == s[r + 1]) r++;
        i = r + 1;
        while(l > 0 && r < n - 1 && s[l - 1] == s[r + 1]) {
            l--; r++;
        }
        if(r - l + 1 > len) {
            start = l;
            len = r - l + 1;
        }
    }
    return s.substr(start, len);
}*/


/*
Rabin-Karp Pattern Matching (Rolling Hash)


vector<int> rabinKarp(string text, string pattern) {
    const int p = 31;
    const int m = 1e9 + 9;
    int S = pattern.size(), T = text.size();

    long long patternHash = 0, textHash = 0, p_pow = 1;

    for(int i = 0; i < S; i++) {
        patternHash = (patternHash + (pattern[i] - 'a' + 1) * p_pow) % m;
        textHash = (textHash + (text[i] - 'a' + 1) * p_pow) % m;
        p_pow = (p_pow * p) % m;
    }

    vector<int> occurrences;
    if(patternHash == textHash) occurrences.push_back(0);

    p_pow = 1;
    long long p_inv = 1;
    for(int i = 0; i < S; i++) {
        p_inv = (p_inv * p) % m;
    }

    for(int i = S; i < T; i++) {
        textHash = (textHash - (text[i - S] - 'a' + 1) + m) % m;
        textHash = (textHash * p_inv) % m;
        textHash = (textHash + (text[i] - 'a' + 1) * p_pow) % m;

        if(textHash == patternHash) occurrences.push_back(i - S + 1);
    }

    return occurrences;
}*/


/*
🔥 Advanced String DSA Problems with C++ Solutions
11. ✅ Z-Algorithm (Pattern Matching in O(n))
cpp
Copy
Edit
vector<int> zFunction(string s) {
    int n = s.size();
    vector<int> z(n);
    int l = 0, r = 0;
    for(int i = 1; i < n; i++) {
        if(i <= r) z[i] = min(r - i + 1, z[i - l]);
        while(i + z[i] < n && s[z[i]] == s[i + z[i]]) z[i]++;
        if(i + z[i] - 1 > r) {
            l = i;
            r = i + z[i] - 1;
        }
    }
    return z;
}
🔹Use: Fast pattern matching → Combine as pattern + '$' + text and search for Z[i] == pattern.length().
*/

/*
12. ✅ KMP Algorithm (Prefix Table + Efficient Matching)
cpp
Copy
Edit
vector<int> computeLPS(string pat) {
    int n = pat.size();
    vector<int> lps(n);
    int len = 0, i = 1;
    while(i < n) {
        if(pat[i] == pat[len]) lps[i++] = ++len;
        else if(len != 0) len = lps[len - 1];
        else lps[i++] = 0;
    }
    return lps;
}

vector<int> KMPSearch(string text, string pattern) {
    vector<int> lps = computeLPS(pattern);
    vector<int> res;
    int i = 0, j = 0;
    while(i < text.size()) {
        if(text[i] == pattern[j]) i++, j++;
        if(j == pattern.size()) {
            res.push_back(i - j);
            j = lps[j - 1];
        }
        else if(i < text.size() && text[i] != pattern[j]) {
            if(j != 0) j = lps[j - 1];
            else i++;
        }
    }
    return res;
}*/

/*
13. ✅ Trie (Insert + Search + Prefix Count)
cpp
Copy
Edit
struct TrieNode {
    TrieNode* children[26];
    bool isEnd;
    TrieNode() {
        isEnd = false;
        fill(begin(children), end(children), nullptr);
    }
};

class Trie {
public:
    TrieNode* root;
    Trie() { root = new TrieNode(); }

    void insert(string word) {
        TrieNode* node = root;
        for(char ch : word) {
            if(!node->children[ch - 'a']) node->children[ch - 'a'] = new TrieNode();
            node = node->children[ch - 'a'];
        }
        node->isEnd = true;
    }

    bool search(string word) {
        TrieNode* node = root;
        for(char ch : word) {
            if(!node->children[ch - 'a']) return false;
            node = node->children[ch - 'a'];
        }
        return node->isEnd;
    }

    bool startsWith(string prefix) {
        TrieNode* node = root;
        for(char ch : prefix) {
            if(!node->children[ch - 'a']) return false;
            node = node->children[ch - 'a'];
        }
        return true;
    }
};
*/

/*
14. ✅ Suffix Array (Naive O(n log²n))
cpp
Copy
Edit
vector<int> buildSuffixArray(string s) {
    s += "$";
    int n = s.size();
    vector<pair<string, int>> suffixes;
    for(int i = 0; i < n; i++)
        suffixes.push_back({s.substr(i), i});
    sort(suffixes.begin(), suffixes.end());
    vector<int> suffixArr;
    for(auto &p : suffixes) suffixArr.push_back(p.second);
    return suffixArr;
}
⚠️ You can optimize it using prefix doubling + radix sort to achieve O(n log n).
*/

/*
15. ✅ Manacher’s Algorithm (Longest Palindromic Substring in O(n))
cpp
Copy
Edit
string longestPalManacher(string s) {
    string t = "@";
    for(char ch : s) t += "#" + string(1, ch);
    t += "#$";

    int n = t.size();
    vector<int> p(n);
    int center = 0, right = 0;
    for(int i = 1; i < n - 1; i++) {
        int mirror = 2 * center - i;
        if(i < right) p[i] = min(right - i, p[mirror]);
        while(t[i + p[i] + 1] == t[i - p[i] - 1]) p[i]++;
        if(i + p[i] > right) {
            center = i;
            right = i + p[i];
        }
    }

    int len = 0, centerIndex = 0;
    for(int i = 1; i < n - 1; i++) {
        if(p[i] > len) {
            len = p[i];
            centerIndex = i;
        }
    }

    return s.substr((centerIndex - len) / 2, len);
}*/