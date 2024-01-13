class Solution {
public:
    int equalSubstring(string s, string t, int cost) {
    int i = 0, j = 0;
    while (i < s.size()) {
        cost -= abs(s[i] - t[i++]);
        if (cost < 0)
            cost += abs(s[j] - t[j++]);
    }
    return i - j;
}
};