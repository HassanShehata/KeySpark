# JustKeyboard

Get a reverse shell within 15 seconds on both Windows or Unix based systems, using the Digispark developement board. The board acts as a keyboard, then does all the magic! 

#### DISCLAIMER: This project is developed for learning and security assessments purposes only. Use these at your own discretion, the author cannot be held responsible for any damages caused. Using this project for attacking assets without prior mutual consent is illegal. The author is not responsible for any misuse or damage caused.     


### Prerequisites

- Get the digispark development board, it costs about 6 USD. 
![alt text](https://s3.amazonaws.com/digistump-resources/images/l/61e2f14edffc1edfa2685963155b0d33.jpg)

- Setup your IDE (Arduino) to deploy the code on the Digispark: https://www.arduino.cc/en/Guide/HomePage
- Get and configure the required libraries from this guide: https://digistump.com/wiki/digispark/tutorials/connecting

## Getting Started

- Upload the RS.ino script using Arduino IDE.
- Configure the CnC server with apache, nginx or any web server to listen on port 443 only 
(you can configure a free SSL certificate by following this guide: https://letsencrypt.org/getting-started/)
- Listen on port 80 at the CnC with something of your choice. For demo purposes we can use the following command: **nc -lvp 80**
Note: the use of 443 and 80 ports grantee not blocking the connection by proxy/IDS, it seems like normal web traffic!
- Plug the USB in the asset [assuming the owner forgot to lock the desktop] and the digispark will deploy a reverse shell within 15 seconds.
- Remove the digispark and happy hacking !

## Authors

* **Hassan Shehata**

## License

This project is licensed under the MIT License - see the [LICENSE.md](LICENSE.md) file for details

## Acknowledgments

My fellow hackers: Karim Faisal and Magdy Mostafa


