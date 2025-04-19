@class NSArray;

@interface MAUSBClearTransfersRequestPacket : MAUSBManagementPacket

@property (readonly) NSArray *clearTransfersInfoBlocks;

- (void).cxx_destruct;
- (id)data;
- (id)initWithBuffer:(id)a0;
- (BOOL)parseBuffer:(id)a0;
- (unsigned short)structureLength;
- (id)descriptionWithTabDepth:(unsigned int)a0;
- (id)initWithHandle:(unsigned short)a0 deviceAddress:(unsigned char)a1 ssid:(unsigned char)a2 dialogToken:(unsigned short)a3 clearTransfersInfoBlocks:(id)a4;

@end
