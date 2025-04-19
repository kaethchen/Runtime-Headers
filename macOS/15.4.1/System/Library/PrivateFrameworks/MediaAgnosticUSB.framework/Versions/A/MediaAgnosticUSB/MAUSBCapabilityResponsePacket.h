@class NSArray;

@interface MAUSBCapabilityResponsePacket : MAUSBManagementPacket

@property (readonly) unsigned short numEndpoints;
@property (readonly) unsigned char numDevices;
@property (readonly) unsigned char numStreams;
@property (readonly) unsigned char deviceType;
@property (readonly) unsigned short outstandingTransferRequests;
@property (readonly) unsigned short outstandingManagementRequests;
@property (readonly) NSArray *descriptors;

- (void).cxx_destruct;
- (id)data;
- (id)initWithBuffer:(id)a0;
- (BOOL)parseBuffer:(id)a0;
- (unsigned short)structureLength;
- (id)descriptionWithTabDepth:(unsigned int)a0;
- (unsigned int)descriptorsLength;
- (id)initWithDeviceAddress:(unsigned char)a0 ssid:(unsigned char)a1 statusCode:(unsigned char)a2 dialogToken:(unsigned short)a3 numEndpoints:(unsigned short)a4 numDevices:(unsigned char)a5 numStreams:(unsigned char)a6 deviceType:(unsigned char)a7 outstandingTransferRequests:(unsigned short)a8 outstandingManagmentRequests:(unsigned short)a9 capabilityDescriptors:(id)a10;

@end
