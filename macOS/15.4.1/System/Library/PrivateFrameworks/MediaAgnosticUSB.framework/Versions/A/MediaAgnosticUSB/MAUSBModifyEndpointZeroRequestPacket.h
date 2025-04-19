@interface MAUSBModifyEndpointZeroRequestPacket : MAUSBManagementPacket

@property (readonly) unsigned short endpointZeroHandle;
@property (readonly) unsigned short maxPacketSize;

- (id)data;
- (id)initWithBuffer:(id)a0;
- (BOOL)parseBuffer:(id)a0;
- (unsigned short)structureLength;
- (id)descriptionWithTabDepth:(unsigned int)a0;
- (id)initWithHandle:(unsigned short)a0 deviceAddress:(unsigned char)a1 ssid:(unsigned char)a2 dialogToken:(unsigned short)a3 endpointZeroHandle:(unsigned short)a4 maxPacketSize:(unsigned short)a5;

@end
