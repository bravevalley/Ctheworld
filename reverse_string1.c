#include <stdio.h>

void reverse(char t[]) {
	int i, len;
	len = 0;
	for (i = 0; i < 1000 - 1; i++) {
		if (t[i] =='\0') break;
		++len;
	}
	
	if (len < 2) {
		return;
	}

	for (int left = 0, right = len - 1; left < right; ++left, --right) {
		char temp = t[left];
		t[left] = t[right];
		t[right] = temp;
	}
	return;
}

int main(void) {
	char t[1000] = "james bamidele";
	
	reverse(t);
		

	printf("%s\n", t);
}

