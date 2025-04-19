@interface MAUSBCancelTransferRequestPacket : MAUSBManagementPacket

@property (readonly) unsigned short endpointHandle;
@property (readonly) unsigned short streamID;
@property (readonly) unsigned char requestID;

- (id)data;
- (id)initWithBuffer:(id)a0;
- (BOOL)parseBuffer:(id)a0;
- (unsigned short)structureLength;
- (id)descriptionWithTabDepth:(unsigned int)a0;
- (id)initWithHandle:(unsigned short)a0 deviceAddress:(unsigned char)a1 ssid:(unsigned char)a2 endpointHandle:(unsigned short)a3 streamID:(unsigned short)a4 requestID:(unsigned char)a5;

@end
