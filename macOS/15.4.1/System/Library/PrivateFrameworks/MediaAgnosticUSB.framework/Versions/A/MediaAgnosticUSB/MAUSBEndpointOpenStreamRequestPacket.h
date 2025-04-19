@interface MAUSBEndpointOpenStreamRequestPacket : MAUSBManagementPacket

@property (readonly) unsigned short endpointHandle;
@property (readonly) unsigned short numStreams;
@property (readonly) unsigned short streamIDIndex;
@property (readonly) BOOL sequentialStreamIDAllocation;
@property (readonly) BOOL openNewStreams;

- (id)data;
- (id)initWithBuffer:(id)a0;
- (BOOL)parseBuffer:(id)a0;
- (unsigned short)structureLength;
- (id)descriptionWithTabDepth:(unsigned int)a0;
- (id)initWithHandle:(unsigned short)a0 deviceAddress:(unsigned char)a1 ssid:(unsigned char)a2 dialogToken:(unsigned short)a3 endpointHandle:(unsigned short)a4 numStreams:(unsigned short)a5 streamIDIndex:(unsigned short)a6 sequentialStreamIDAllocation:(BOOL)a7 openNewStreams:(BOOL)a8;

@end
