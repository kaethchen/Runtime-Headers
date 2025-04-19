@interface MAUSBDeviceInitiatedDisconnectResponsePacket : MAUSBManagementPacket

- (id)initWithBuffer:(id)a0;
- (id)initWithDeviceAddress:(unsigned char)a0 ssid:(unsigned char)a1 statusCode:(unsigned char)a2 dialogToken:(unsigned short)a3;

@end
