@class NSArray;

@interface MAUSBCapabilityRequestPacket : MAUSBManagementPacket

@property (readonly) unsigned short outstandingManagementRequests;
@property (readonly) NSArray *descriptors;

- (void).cxx_destruct;
- (id)data;
- (id)initWithBuffer:(id)a0;
- (BOOL)parseBuffer:(id)a0;
- (unsigned short)structureLength;
- (id)descriptionWithTabDepth:(unsigned int)a0;
- (id)initWithDeviceAddress:(unsigned char)a0 ssid:(unsigned char)a1 dialogToken:(unsigned short)a2 outstandingManagementRequests:(unsigned short)a3 capabilityDescriptors:(id)a4;

@end
