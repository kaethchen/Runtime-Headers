@interface MAUSBCancelTransferResponsePacket : MAUSBManagementPacket

@property (readonly) unsigned short endpointHandle;
@property (readonly) unsigned short streamID;
@property (readonly) unsigned char requestID;
@property (readonly) unsigned char cancellationStatus;
@property (readonly) unsigned int deliveredSequenceNumber;
@property (readonly) unsigned int deliveredByteOffset;

- (id)data;
- (id)initWithBuffer:(id)a0;
- (BOOL)parseBuffer:(id)a0;
- (unsigned short)structureLength;
- (id)descriptionWithTabDepth:(unsigned int)a0;
- (id)initWithHandle:(unsigned short)a0 deviceAddress:(unsigned char)a1 ssid:(unsigned char)a2 statusCode:(unsigned char)a3 endpointHandle:(unsigned short)a4 streamID:(unsigned short)a5 requestID:(unsigned char)a6 cancellationStatus:(unsigned char)a7 deliveredSequenceNumber:(unsigned int)a8 deliveredByteOffset:(unsigned int)a9;

@end
