#include <Arduino.h>
#include <BleCombo.h>

void setup() {
  Serial.begin(115200);
  Keyboard.deviceName = "L2 BOT";
  Keyboard.begin();
  Mouse.begin();
  Serial.println("Emulator Started!");
}

void loop() {
  if (Serial.available()) {
    String message = Serial.readString();
    Serial.println(message);
    if (Keyboard.isConnected()) {
      if (message.equals("CLICK_LEFT")) Mouse.click(MOUSE_LEFT);
      if (message.equals("CLICK_RIGHT")) Mouse.click(MOUSE_RIGHT);
      if (message.equals("PRESS_F1")) Keyboard.write(KEY_F1);
      if (message.equals("PRESS_F2")) Keyboard.write(KEY_F2);
      if (message.equals("PRESS_F3")) Keyboard.write(KEY_F3);
      if (message.equals("PRESS_F4")) Keyboard.write(KEY_F4);
      if (message.equals("PRESS_F5")) Keyboard.write(KEY_F5);
      if (message.equals("PRESS_F6")) Keyboard.write(KEY_F6);
      if (message.equals("PRESS_F7")) Keyboard.write(KEY_F7);
      if (message.equals("PRESS_F8")) Keyboard.write(KEY_F8);
      if (message.equals("PRESS_F9")) Keyboard.write(KEY_F9);
      if (message.equals("PRESS_F10")) Keyboard.write(KEY_F10);
      if (message.equals("PRESS_F11")) Keyboard.write(KEY_F11);
      if (message.equals("PRESS_F12")) Keyboard.write(KEY_F12);
    }
  }
}