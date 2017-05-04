// This file is part of GNOME Games. License: GPL-3.0+.

#ifndef GAMES_STANDARD_GAMEPAD_BUTTON_H
#define GAMES_STANDARD_GAMEPAD_BUTTON_H

#include <glib-object.h>

G_BEGIN_DECLS

#define GAMES_TYPE_STANDARD_GAMEPAD_BUTTON (games_standard_gamepad_button_get_type ())

/**
 * GamesStandardGamepadButton:
 * @GAMES_STANDARD_GAMEPAD_BUTTON_UNKNOWN: an unknown button
 * @GAMES_STANDARD_GAMEPAD_BUTTON_A: the A (south) button
 * @GAMES_STANDARD_GAMEPAD_BUTTON_B: the B (east) button
 * @GAMES_STANDARD_GAMEPAD_BUTTON_X: the X (west) button
 * @GAMES_STANDARD_GAMEPAD_BUTTON_Y: the Y (north) button
 * @GAMES_STANDARD_GAMEPAD_BUTTON_SHOULDER_L: the left shoulder button
 * @GAMES_STANDARD_GAMEPAD_BUTTON_SHOULDER_R: the right shoulder button
 * @GAMES_STANDARD_GAMEPAD_BUTTON_TRIGGER_L: the left trigger
 * @GAMES_STANDARD_GAMEPAD_BUTTON_TRIGGER_R: the right trigger
 * @GAMES_STANDARD_GAMEPAD_BUTTON_SELECT: the Select button
 * @GAMES_STANDARD_GAMEPAD_BUTTON_START: the Start button
 * @GAMES_STANDARD_GAMEPAD_BUTTON_STICK_L: the left stick's button
 * @GAMES_STANDARD_GAMEPAD_BUTTON_STICK_R: the right stick's button
 * @GAMES_STANDARD_GAMEPAD_BUTTON_DPAD_UP: the up button of the d-pad
 * @GAMES_STANDARD_GAMEPAD_BUTTON_DPAD_DOWN: the down button of the d-pad
 * @GAMES_STANDARD_GAMEPAD_BUTTON_DPAD_LEFT: the left button of the d-pad
 * @GAMES_STANDARD_GAMEPAD_BUTTON_DPAD_RIGHT: the right button of the d-pad
 * @GAMES_STANDARD_GAMEPAD_BUTTON_HOME: the Home button
 *
 * The buttons of a standard gamepad.
 **/
typedef enum {
  GAMES_STANDARD_GAMEPAD_BUTTON_UNKNOWN,
  GAMES_STANDARD_GAMEPAD_BUTTON_A,
  GAMES_STANDARD_GAMEPAD_BUTTON_B,
  GAMES_STANDARD_GAMEPAD_BUTTON_X,
  GAMES_STANDARD_GAMEPAD_BUTTON_Y,
  GAMES_STANDARD_GAMEPAD_BUTTON_SHOULDER_L,
  GAMES_STANDARD_GAMEPAD_BUTTON_SHOULDER_R,
  GAMES_STANDARD_GAMEPAD_BUTTON_TRIGGER_L,
  GAMES_STANDARD_GAMEPAD_BUTTON_TRIGGER_R,
  GAMES_STANDARD_GAMEPAD_BUTTON_SELECT,
  GAMES_STANDARD_GAMEPAD_BUTTON_START,
  GAMES_STANDARD_GAMEPAD_BUTTON_STICK_L,
  GAMES_STANDARD_GAMEPAD_BUTTON_STICK_R,
  GAMES_STANDARD_GAMEPAD_BUTTON_DPAD_UP,
  GAMES_STANDARD_GAMEPAD_BUTTON_DPAD_DOWN,
  GAMES_STANDARD_GAMEPAD_BUTTON_DPAD_LEFT,
  GAMES_STANDARD_GAMEPAD_BUTTON_DPAD_RIGHT,
  GAMES_STANDARD_GAMEPAD_BUTTON_HOME,
} GamesStandardGamepadButton;

GType games_standard_gamepad_button_get_type (void) G_GNUC_CONST;

G_END_DECLS

#endif /* GAMES_STANDARD_GAMEPAD_BUTTON_H */