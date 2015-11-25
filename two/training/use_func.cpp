#include <iostream>

void blind(void);
void see(void);

int main(){

	blind();
	blind();

	see();
	see();
	
	return 0;
}

void blind(){
	std::cout << "Three blind mice" << std::endl;
}

void see(){
	std::cout << "See how they run" << std::endl;
}

