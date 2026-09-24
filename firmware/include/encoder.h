#ifndef ENCODER_H
#define ENCODER_H

/**
 * @file encoder.h
 * @brief Header file for the Encoder class.
 *
 * This file contains the declaration of the Encoder class, which is responsible for encoding data.
 */

/**
 * @brief Initializes the rotary encoder GPIO pins.
 */
void encoderInit();

/**
 * @brief Updates the rotary encoder state.
 *
 * Call this repeatedly from the main loop.
 */
void encoderUpdate();

/**
 * @brief Gets the current encoder position.
 *
 * @return Signed encoder position.
 */
std::int32_t encoderGetPosition();

/**
 * @brief Checks whether the encoder push button is currently pressed.
 *
 * @return true if pressed, otherwise false.
 */
bool encoderIsPressed();

#endif