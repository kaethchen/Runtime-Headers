@interface MAUSBEndpointHandleDeleteRequestPacket : MAUSBManagementEndpointListRequestPacket

- (id)initWithBuffer:(id)a0;
- (id)initWithHandle:(unsigned short)a0 deviceAddress:(unsigned char)a1 ssid:(unsigned char)a2 dialogToken:(unsigned short)a3 endpointHandleList:(id)a4;

@end
