string longestCommonPrefix(std::vector<string>& strs) {
	if (strs.empty())
		return "";
	string str1 = strs.back();
	string strResu;
	int VecSize = strs.size(); 
	for (int i = 0; i < VecSize - 1; i++)
	{
		string str2 = strs.at(strs.size() - 2);
		while (str1.front() == str2.front())
		{
			strResu.push_back(str1.front());
			str1.erase(str1.begin());
			str2.erase(str2.begin());
			if (str1.length() == 0||str2.length()==0)//这肯定没有限制完全？？
			{
				break;
			}
			
		}
		if (strResu == "")
		{
			return "";
		}
		else
		{
			str1 = strResu;
			strResu.clear();
		}
		strs.pop_back();
	}
	return str1;

};