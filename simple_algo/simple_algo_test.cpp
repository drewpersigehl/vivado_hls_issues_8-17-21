#include <cstdio>
#include "simple_algo.h"
#include "ap_int.h"

#define NTEST 1


int main() {
	
	ap_int<32> inA;
	ap_int<32> inB;
	ap_int<32> outA;
	ap_int<32> outA1;

	for (int test = 1; test <= NTEST; ++test) {

		inA = 1;
		inB = 2;
		outA = 0;

		simple_algo_ref(inA, inB, outA);
		simple_algo_hw(inA, inB, outA1);

		printf( "test = %i %i %i \n", int(inA), int(inB), int(outA) );
		printf( "test1 = %i %i %i \n", int(inA), int(inB), int(outA1) );

	}

	return 0;
}
