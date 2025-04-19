@interface MAUSBDeviceInitiatedDisconnectRequestPacket : MAUSBManagementPacket

- (id)initWithBuffer:(id)a0;
- (id)initWithDeviceAddress:(unsigned char)a0 ssid:(unsigned char)a1 dialogToken:(unsigned short)a2;

@end
