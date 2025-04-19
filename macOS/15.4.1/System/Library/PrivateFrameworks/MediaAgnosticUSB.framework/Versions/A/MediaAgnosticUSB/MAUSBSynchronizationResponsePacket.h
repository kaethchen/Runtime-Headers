@interface MAUSBSynchronizationResponsePacket : MAUSBManagementPacket

@property (readonly) BOOL mtdValid;
@property (readonly) unsigned int mausbGlobalTime;
@property (readonly) unsigned int mediaTimeTransmissionDelay;

- (id)data;
- (id)initWithBuffer:(id)a0;
- (BOOL)parseBuffer:(id)a0;
- (unsigned short)structureLength;
- (id)descriptionWithTabDepth:(unsigned int)a0;
- (id)initWithDeviceAddress:(unsigned char)a0 ssid:(unsigned char)a1 mtdValid:(BOOL)a2 mausbGlobalTime:(unsigned int)a3 mediaTimeTransmissionDelay:(unsigned int)a4;

@end
