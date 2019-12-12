# KeySpark

![version](https://img.shields.io/badge/version-v0.1.0-red.svg)
![Supported OS](https://img.shields.io/badge/Supported%20OS-Linux%20and%20windows-green.svg) 
![License](https://img.shields.io/badge/license-MIT-blue.svg)
<br>
Get a reverse shell within 15 seconds on both Windows and Unix based systems, using the `digispark` developement board. The board acts as a keyboard, then does all the magic!
<br>

![alt text](https://s3.amazonaws.com/digistump-resources/images/l/61e2f14edffc1edfa2685963155b0d33.jpg)




## Prerequisites

- Get the `digispark` development board, it costs about 6 USD. 

- Setup your IDE (Arduino) to deploy the code on the `digispark`: https://www.arduino.cc/en/Guide/HomePage
- Get and configure the required libraries from this guide: https://digistump.com/wiki/`digispark`/tutorials/connecting
- `CnC` server (on cloud or on the victim network) - ubuntu/centos server is recommended with port forwarding enabled for (443 & 80).

## Getting Started

- Upload the [RS.ino](RS.ino) script using Arduino IDE.
- Configure the CnC server with apache, nginx or any web server to listen on port 443 only 
(you can configure a free SSL certificate by following this guide: https://letsencrypt.org/getting-started/)
- Edit the payload [RS.ps1](RS.ps1) by replacing **your domain** with your server IP/Domain, then put the file under: `/var/www/html/`
- Listen on port 80 at the CnC with a something of your choice. For demo purposes we can use netcat: `nc -lvp 80`
- Note: the use of `443` and `80` ports grantee not blocking the connection by proxy/IDS, it seems like normal web traffic!
- Plug the USB in the asset [assuming the owner forgot to lock the desktop] and the `digispark` will deploy a reverse shell within 15 seconds.
- Remove the `digispark` and happy hacking!

## The WiFi Collector Feature

- Try the new feature for collecting all WiFi credentials from any windows machine within 18 seconds!!
- Put [wifi-collector/wifi.php](wifi.php) on the CnC under: `/var/www/html/`
- Upload the [wifi-collector/wifi-collect.ino](wifi-collect.ino) script usin Arduino IDE.
- Plug the USB in the asset [assuming the owner forgot to lock the desktop again!]
- The data will be transfered through a POST request on 443. Then the WiFi credentials will be found under `loot.txt` file on the CnC.

## DISCLAIMER

This project is developed for learning and security assessments purposes only. Use these at your own discretion, the author cannot be held responsible for any damages caused. Using this project for attacking assets without prior mutual consent is illegal. The author is not responsible for any misuse or damage caused.

## Contact Info

[Linkedin](https://www.linkedin.com/in/hassan-shehata-503272172/)
[Gmail](hassanshehata25895@gmail.com)
[Upwork](https://www.upwork.com/freelancers/~01383dad14aca34634)


## Acknowledgments

Thanks to my fellow hackers @karemfaisal and @reb311ion.

