@interface MAUSBDeviceNotificationResponsePacket : MAUSBManagementPacket

- (id)initWithBuffer:(id)a0;
- (id)initWithHandle:(unsigned short)a0 deviceAddress:(unsigned char)a1 ssid:(unsigned char)a2 statusCode:(unsigned char)a3 dialogToken:(unsigned short)a4;

@end
