@interface MAUSBWakeResponsePacket : MAUSBManagementPacket

- (id)initWithBuffer:(id)a0;
- (id)initWithHost:(BOOL)a0 retry:(BOOL)a1 deviceAddress:(unsigned char)a2 ssid:(unsigned char)a3 dialogToken:(unsigned short)a4;

@end
