##Setup instructions##
- Board: LoLin d1Mini Lite + SIM800L V2
- Power: Use external powersource, 5V + 2A.

##Wiring##
1. Connect SIM800l VCC to external powersource +5V
2. Connect SIM800l GND to external powersource GND
3. Connect d1Mini D1 to SIM800l RXD
4. Connect d1Mini D2 to SIM800l TXD
5. Connect d1Mini GND to Sim800l V2 TTL GND
6. Connect d1Mini to PC Via USB = Monitoring & Commands

##Registering SIM800l to network#
1. AT+CREG=1
2. AT+SAPBR=3,1,"CONTYPE","GPRS"
3. AT+SAPBR=3,1,"APN","APN-address" //replace APN-address based on your ISP
4. AT+SAPBR=1,1
5. AT+CREG? (+CREG: 1,1 // 1,1 means that SIM800l is connected into your "home network".)

If SIM800l led blinks two times per second = Connected
