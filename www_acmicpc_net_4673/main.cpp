#include <iostream>
#include <string>

using namespace std;

#define NUM_ARRAY 10000

int array[NUM_ARRAY] = {0,};

void check_creator(int num);
void print_arr();

int main() {
	
	for(int i = 1; i <= NUM_ARRAY; i++) {
	    check_creator(i);
	}
	
	print_arr();

	return 0;
}

void check_creator(int num) {
    int sum = num;
    while(num > 0){
        sum += num%10;
        num = num/10;
    }
    array[sum-1] = 1;
}

void print_arr() {
    for(int i=0; i<NUM_ARRAY; i++) {
        if(array[i] == 0) {
            cout << (i+1) << endl;
        }
    }
}
