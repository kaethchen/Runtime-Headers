@interface MAUSBClearTransfersInformationBlock : MAUSBStructure

@property (readonly) unsigned short endpointHandle;
@property (readonly) unsigned short streamID;
@property (readonly) unsigned char startRequestID;

- (id)data;
- (id)initWithBuffer:(id)a0;
- (unsigned short)structureLength;
- (id)descriptionWithTabDepth:(unsigned int)a0;
- (id)initWithEndpointHandle:(unsigned short)a0 streamID:(unsigned short)a1 startRequestID:(unsigned char)a2;

@end
