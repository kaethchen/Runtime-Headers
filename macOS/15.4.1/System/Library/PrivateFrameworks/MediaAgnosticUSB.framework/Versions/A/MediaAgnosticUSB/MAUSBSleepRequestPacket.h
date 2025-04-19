@interface MAUSBSleepRequestPacket : MAUSBManagementPacket

@property (readonly) unsigned int managementRequestTimeout;
@property (readonly) unsigned int dataRequestTimeout;

- (id)data;
- (id)initWithBuffer:(id)a0;
- (BOOL)parseBuffer:(id)a0;
- (unsigned short)structureLength;
- (id)descriptionWithTabDepth:(unsigned int)a0;
- (id)initWithHost:(BOOL)a0 deviceAddress:(unsigned char)a1 ssid:(unsigned char)a2 dialogToken:(unsigned short)a3 managementRequestTimeout:(unsigned int)a4 dataRequestTimeout:(unsigned int)a5;

@end
