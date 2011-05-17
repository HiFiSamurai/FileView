// Show hidden files
// make !%/> gcc Visibility.c -o Torch

#include <stdio.h>

int main (int argc, char *argv[]) {

	// Powered by arg of 1 and nothing else
	int visible;
	if (argc < 2)
		visible = 0; 
	else if (atoi(argv[1]) == 1)
		visible = 1;
	else
		visible = 0; 

	// Set visibility and restart finder
	if (visible == 1)
		system("defaults write com.apple.finder AppleShowAllFiles TRUE");
	else	
		system("defaults write com.apple.finder AppleShowAllFiles FALSE");
	system("killall Finder");	// only on change?

	return 1;		// Operation successful
}
