@class NSArray;

@interface MAUSBEndpointOpenStreamResponsePacket : MAUSBManagementPacket

@property (readonly) unsigned short numStreams;
@property (readonly) NSArray *streamIDBlocks;

- (void).cxx_destruct;
- (id)data;
- (id)initWithBuffer:(id)a0;
- (BOOL)parseBuffer:(id)a0;
- (unsigned short)structureLength;
- (id)descriptionWithTabDepth:(unsigned int)a0;
- (id)initWithHandle:(unsigned short)a0 deviceAddress:(unsigned char)a1 ssid:(unsigned char)a2 statusCode:(unsigned char)a3 dialogToken:(unsigned short)a4 numStreams:(unsigned short)a5 streamIDBlocks:(id)a6;

@end
