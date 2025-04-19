@class NSArray;

@interface MAUSBEndpointHandleRequestPacket : MAUSBManagementPacket

@property (readonly) NSArray *standardDescriptors;
@property (readonly) NSArray *superSpeedDescriptors;
@property (readonly) NSArray *superSpeedPlusDescriptors;
@property (readonly) unsigned char descriptorCount;
@property (readonly) unsigned char descriptorSize;

- (void).cxx_destruct;
- (id)data;
- (id)initWithBuffer:(id)a0;
- (BOOL)parseBuffer:(id)a0;
- (unsigned short)structureLength;
- (void)appendDescriptors:(id)a0 toString:(id)a1 withTabDepth:(unsigned int)a2;
- (id)descriptionWithTabDepth:(unsigned int)a0;
- (id)initWithHandle:(unsigned short)a0 deviceAddress:(unsigned char)a1 ssid:(unsigned char)a2 dialogToken:(unsigned short)a3 standardDescriptors:(id)a4;
- (id)initWithHandle:(unsigned short)a0 deviceAddress:(unsigned char)a1 ssid:(unsigned char)a2 dialogToken:(unsigned short)a3 superSpeedDescriptors:(id)a4;
- (id)initWithHandle:(unsigned short)a0 deviceAddress:(unsigned char)a1 ssid:(unsigned char)a2 dialogToken:(unsigned short)a3 superSpeedPlusDescriptors:(id)a4;

@end
