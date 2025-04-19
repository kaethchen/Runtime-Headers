@interface MAUSBEndpointSetKeepAliveRequestPacket : MAUSBManagementPacket

@property (readonly) unsigned short duration;
@property (readonly) unsigned short endpointHandle;

- (id)data;
- (id)initWithBuffer:(id)a0;
- (BOOL)parseBuffer:(id)a0;
- (unsigned short)structureLength;
- (id)descriptionWithTabDepth:(unsigned int)a0;
- (id)initWithHandle:(unsigned short)a0 deviceAddress:(unsigned char)a1 ssid:(unsigned char)a2 dialogToken:(unsigned short)a3 keepAliveDuration:(unsigned short)a4 endpointHandle:(unsigned short)a5;

@end
