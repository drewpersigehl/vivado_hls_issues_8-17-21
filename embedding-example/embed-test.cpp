#include <cstdio>
#include "embed.h"

#define NTEST 1

void embed(
	int data,
	float res[n_out],
	float weights[n_in*n_out]);

int main() {

	int data;
	float res[n_out];
	float weights[n_in*n_out];

	for (int test = 1; test <= NTEST; ++test) {

		data = 3;
		for (int i = 0; i < n_out; i++) {
			res[i] = 0;
		}
		for (int i = 0; i < n_in*n_out; i++) {
			weights[i] = i;
		}

		embed(data, res, weights);

		for (int i = 0; i < n_out; i++) {
			printf("%f ", res[i]);
		}

	}

	return 0;

}
