@interface MAUSBCancelTransfersStatusBlock : MAUSBStructure

@property (readonly) unsigned short endpointHandle;
@property (readonly) unsigned short streamID;
@property (readonly) BOOL cancellationStatus;
@property (readonly) BOOL partialDelivery;
@property (readonly) unsigned char lastRequestID;
@property (readonly) unsigned int deliveredSequenceNumber;
@property (readonly) unsigned int deliveredByteOffset;

- (id)data;
- (id)initWithBuffer:(id)a0;
- (unsigned short)structureLength;
- (id)descriptionWithTabDepth:(unsigned int)a0;
- (id)initWithEndpointHandle:(unsigned short)a0 streamID:(unsigned short)a1 cancellationStatus:(BOOL)a2 partialDelivery:(BOOL)a3 lastRequestID:(unsigned char)a4 deliveredSequenceNumber:(unsigned int)a5 deliveredByteOffset:(unsigned int)a6;

@end
