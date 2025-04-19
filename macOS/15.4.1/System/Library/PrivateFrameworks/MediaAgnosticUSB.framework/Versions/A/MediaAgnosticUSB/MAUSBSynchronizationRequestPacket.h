@interface MAUSBSynchronizationRequestPacket : MAUSBManagementPacket

@property (readonly) BOOL mtdValid;
@property (readonly) BOOL responseRequired;
@property (readonly) unsigned int mausbTimestamp;
@property (readonly) unsigned int mediaTimeTransmissionDelay;

- (id)data;
- (id)initWithBuffer:(id)a0;
- (BOOL)parseBuffer:(id)a0;
- (unsigned short)structureLength;
- (id)descriptionWithTabDepth:(unsigned int)a0;
- (id)initWithDeviceAddress:(unsigned char)a0 ssid:(unsigned char)a1 mtdValid:(BOOL)a2 responseRequired:(BOOL)a3 mausbTimestamp:(unsigned int)a4 mediaTimeTransmissionDelay:(unsigned int)a5;

@end
