#include "encoder.h"
#include "pins.h"

#include <Arduino.h>

namespace {

int32_t position = 0;
int previous_a = HIGH;

}  // namespace

void encoderInit() {
    pinMode(ENCODER_A_PIN, INPUT_PULLUP);
    pinMode(ENCODER_B_PIN, INPUT_PULLUP);
    pinMode(ENCODER_SW_PIN, INPUT_PULLUP);

    previous_a = digitalRead(ENCODER_A_PIN);
}

void encoderUpdate() {
    const int current_a = digitalRead(ENCODER_A_PIN);

    if (current_a != previous_a && current_a == LOW) {
        const int current_b = digitalRead(ENCODER_B_PIN);

        if (current_b != current_a) {
            ++position;
        } else {
            --position;
        }
    }

    previous_a = current_a;
}

int32_t encoderGetPosition() {
    return position;
}

bool encoderIsPressed() {
    return digitalRead(ENCODER_SW_PIN) == LOW;
}