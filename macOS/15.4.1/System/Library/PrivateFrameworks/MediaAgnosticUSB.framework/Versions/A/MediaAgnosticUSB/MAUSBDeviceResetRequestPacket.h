@interface MAUSBDeviceResetRequestPacket : MAUSBManagementPacket

- (BOOL)validate;
- (id)initWithBuffer:(id)a0;
- (id)initWithDeviceAddress:(unsigned char)a0 ssid:(unsigned char)a1;

@end
