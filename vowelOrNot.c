#include <stdio.h>
int main(){
	char word;
	printf("Enter a Character To See if it is a Vowel or Not : \n");
	scanf("%c",&word);
	if(word == 'A' || word == 'E' || word == 'I' || word == 'O' || word == 'U' || word == 'a' || word == 'e' || word == 'i' || word == 'o' || word == 'u'){
		printf("Vowel\n");
	}else{
		printf("Consonant\n");
	}
}