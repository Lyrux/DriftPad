#include "encoder.h"

#include <Arduino.h>

#include "pins.h"

namespace {

int32_t position = 0;
int previous_a = HIGH;

}  // namespace

void EncoderInit() {
  pinMode(kEncoderAPin, INPUT_PULLUP);
  pinMode(kEncoderBPin, INPUT_PULLUP);
  pinMode(kEncoderSwPin, INPUT_PULLUP);

  previous_a = digitalRead(kEncoderAPin);
}

void EncoderUpdate() {
  const int current_a = digitalRead(kEncoderAPin);

  if (current_a != previous_a && current_a == LOW) {
    const int current_b = digitalRead(kEncoderBPin);

    if (current_b != current_a) {
      ++position;
    } else {
      --position;
    }
  }

  previous_a = current_a;
}

std::int32_t EncoderGetPosition() {
  return position;
}

bool EncoderIsPressed() {
  return digitalRead(kEncoderSwPin) == LOW;
}