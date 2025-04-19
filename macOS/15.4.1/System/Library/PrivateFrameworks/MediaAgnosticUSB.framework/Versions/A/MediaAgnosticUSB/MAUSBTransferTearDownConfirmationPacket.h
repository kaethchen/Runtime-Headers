@interface MAUSBTransferTearDownConfirmationPacket : MAUSBControlPacket

@property (readonly) unsigned char linkType;
@property (readonly) unsigned short connectionID;

- (id)data;
- (id)initWithBuffer:(id)a0;
- (id)descriptionWithTabDepth:(unsigned int)a0;
- (id)initWithHost:(BOOL)a0 retry:(BOOL)a1 handle:(id)a2 deviceAddress:(unsigned char)a3 ssid:(unsigned char)a4 linkType:(unsigned char)a5 connectionID:(unsigned short)a6;

@end
