/*
 * filter.c
 *
 *  Created on: Oct 1, 2026
 *      Author: mars
 */

#include <stdint.h>
#include "filter.h"

// LOW PASS FILTER

struct Filter {
	float cutoff;
	float resonance;
	uint8_t enveloppeAmount;
};

// ---- INITIALIZATION ---- //

Filter_t* createFilter(void) {
    static Filter_t instance = {0};
    return &instance;
}

void initFilter(Filter_t* filter){
	filter->cutoff = 0.0f;
	filter->resonance = 0.0f;
	filter-> enveloppeAmount = 0;
}

// ---- SETTERS ---- //

void setCutoffFilter(Filter_t* filter, float cutoff){
	filter->cutoff = cutoff;
}
