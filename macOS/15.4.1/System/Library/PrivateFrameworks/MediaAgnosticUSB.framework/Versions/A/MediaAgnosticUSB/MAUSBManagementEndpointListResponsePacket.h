@class NSArray;

@interface MAUSBManagementEndpointListResponsePacket : MAUSBManagementPacket

@property (readonly) NSArray *endpointHandleList;

- (void).cxx_destruct;
- (id)data;
- (id)initWithBuffer:(id)a0;
- (BOOL)parseBuffer:(id)a0;
- (unsigned short)structureLength;
- (id)descriptionWithTabDepth:(unsigned int)a0;
- (id)initWithHandle:(unsigned short)a0 deviceAddress:(unsigned char)a1 ssid:(unsigned char)a2 statusCode:(unsigned char)a3 dialogToken:(unsigned short)a4 endpointHandleList:(id)a5 packetSubtype:(unsigned char)a6;

@end
