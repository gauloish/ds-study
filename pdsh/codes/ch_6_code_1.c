#include <stdlib.h>

void compute_reciprocals(float* values, unsigned len) {
    for (int i = 0; i < len; i++) {
        values[i] = 1.0 / values[i];
    }
}

int main() {
    int len = 1000000;
    float* values = (float*) malloc(len * sizeof(float));

    if (values != NULL) {
        for (int i = 0; i < len; i++) {
            values[i] = (float)i + 1.0;
        }

        compute_reciprocals(values, len);
        free(values);
    }
}