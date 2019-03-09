class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
    if (strs.empty())
			return "";
    sort(strs.begin(), strs.end());
	int len = std::min(strs[0].length(), strs.back().length());
	for (int i = 0; i < len; i++)
	{
		if (i>=len || strs[0][i] != strs.back()[i])
			return strs[0].substr(0, i);
		
	}
	return strs[0];
    }
};