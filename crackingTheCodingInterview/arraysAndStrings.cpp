#include <iostream>

bool testReverseCString();
void reverseCString(char arr[], int n);

int main()
{
	testReverseCString();
	return 0;	
}

bool testReverseCString() {
     char apple[] = {'a','p','p','l','e','\0'};
     char elppa[] = {'\0','e','l','p','p','a'};
     reverseCString(apple, 6);
     reverseCString(elppa, 6);
     return true;
}

void reverseCString(char arr[], int n) {
      for (int i = 0; i < n/2; i++) {
      	  char temp = arr[i];
	  arr[i] = arr[n - i - 1];
	  arr[n - i - 1] = temp;
      }
      for (int i = 0; i < n; i++) {
	std::cout << arr[i];
      }
      std::cout << std::endl;
      return;
}
