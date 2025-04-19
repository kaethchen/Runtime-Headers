@class NSArray;

@interface MAUSBEndpointCloseStreamRequestPacket : MAUSBManagementPacket

@property (readonly) unsigned short endpointHandle;
@property (readonly) BOOL closeAll;
@property (readonly) NSArray *streamIDBlocks;

- (void).cxx_destruct;
- (id)data;
- (id)initWithBuffer:(id)a0;
- (BOOL)parseBuffer:(id)a0;
- (unsigned short)structureLength;
- (id)descriptionWithTabDepth:(unsigned int)a0;
- (id)initWithHandle:(unsigned short)a0 deviceAddress:(unsigned char)a1 ssid:(unsigned char)a2 dialogToken:(unsigned short)a3 endpointHandle:(unsigned short)a4 closeAll:(BOOL)a5 streamIDBlocks:(id)a6;

@end
