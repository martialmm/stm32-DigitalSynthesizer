/*
 * synth_params.h
 *
 *  Created on: May 11, 2026
 *      Author: mars
 */

#ifndef INC_SYNTHESIZER_H_
#define INC_SYNTHESIZER_H_
#include "oscillator.h"
#include "user_interface.h"
#include "envelope.h"
#include "filter.h"


typedef struct {
	// Oscillators
	Oscillator_t* oscillator;
	UserInterface_t* userInterface;
	Envelope_t* envelope;
	Filter_t* filter;
}Synthesizer_t;

Synthesizer_t* createSynthesizer(void);
void initSynthesizer(Synthesizer_t* synthesizer, Oscillator_t* oscillator, UserInterface_t* userInterface, Envelope_t* envelope);
void synthesizerRun(Synthesizer_t* synthesizer);

#endif /* INC_SYNTHESIZER_H_ */
