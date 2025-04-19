@class NSArray;

@interface MAUSBEndpointResetRequestPacket : MAUSBManagementPacket

@property (readonly) NSArray *resetInfoBlocks;

- (void).cxx_destruct;
- (id)data;
- (id)initWithBuffer:(id)a0;
- (BOOL)parseBuffer:(id)a0;
- (unsigned short)structureLength;
- (id)descriptionWithTabDepth:(unsigned int)a0;
- (id)initWithHandle:(unsigned short)a0 deviceAddress:(unsigned char)a1 ssid:(unsigned char)a2 dialogToken:(unsigned short)a3 resetInfoBlocks:(id)a4;

@end
