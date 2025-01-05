LoLin d1Mini Lite + SIM800L V2
Use external powersource, 5V + 2A.

#Wiring
Connect SIM800l VCC to external powersource +5V 
Connect SIM800l GND to external powersource GND
Connect d1Mini D1 to SIM800l RXD
Connect d1Mini D2 to SIM800l TXD
Connect d1Mini GND to Sim800l V2 TTL GND

#Registering SIM800l to network

AT+CREG=1
OK

AT+SAPBR=3,1,"CONTYPE","GPRS"
OK

AT+SAPBR=3,1,"APN","APN-address" //replace APN-address based on your ISP
OK

AT+SAPBR=1,1
OK

AT+CREG?
+CREG: 1,1 // 1,1 means that SIM800l is connected into your "home network".

SIM800l led blinks two times per second = Connected
