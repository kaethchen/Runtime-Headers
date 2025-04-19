@interface MAUSBPingResponsePacket : MAUSBManagementPacket

- (id)initWithBuffer:(id)a0;
- (id)initWithHost:(BOOL)a0 deviceAddress:(unsigned char)a1 ssid:(unsigned char)a2 dialogToken:(unsigned short)a3;

@end
