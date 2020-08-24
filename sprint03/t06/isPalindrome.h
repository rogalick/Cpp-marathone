template <class BidirectionalIterator>
bool isPalindrome(BidirectionalIterator begin, BidirectionalIterator end){
	for (end--;begin < end;end--,begin++)
		if (*begin!= *end)
			return false;
	return true;
}