@interface MAUSBEndpointInactivateRequestPacket : MAUSBManagementEndpointListRequestPacket

@property (readonly) BOOL suspend;

- (id)initWithBuffer:(id)a0;
- (BOOL)parseBuffer:(id)a0;
- (id)descriptionWithTabDepth:(unsigned int)a0;
- (unsigned int)dword3;
- (id)initWithHandle:(unsigned short)a0 deviceAddress:(unsigned char)a1 ssid:(unsigned char)a2 dialogToken:(unsigned short)a3 suspend:(BOOL)a4 endpointHandleList:(id)a5;

@end
