int isSubsequence(char *s, char *t) {
	int i = 0;
	int j = 0;
	

	if (s[0] == '\0') {
		return 1;
	}
	
	while (s[i] != '\0' && t[j] != '\0') {
		if (s[i] == t[j]) {
			i++;
			j++;
		} else {
			j++;
		}
	}
	
	if (s[i] == '\0') {
		return 1;
	} else {
		return 0;
	}
}
