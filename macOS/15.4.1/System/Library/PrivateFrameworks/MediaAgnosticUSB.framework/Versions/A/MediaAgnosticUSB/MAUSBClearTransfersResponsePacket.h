@class NSArray;

@interface MAUSBClearTransfersResponsePacket : MAUSBManagementPacket

@property (readonly) NSArray *cancelTransfersStatusBlocks;

- (void).cxx_destruct;
- (id)data;
- (id)initWithBuffer:(id)a0;
- (BOOL)parseBuffer:(id)a0;
- (unsigned short)structureLength;
- (id)descriptionWithTabDepth:(unsigned int)a0;
- (id)initWithHandle:(unsigned short)a0 deviceAddress:(unsigned char)a1 ssid:(unsigned char)a2 statusCode:(unsigned char)a3 dialogToken:(unsigned short)a4 cancelTransfersStatusBlocks:(id)a5;

@end
