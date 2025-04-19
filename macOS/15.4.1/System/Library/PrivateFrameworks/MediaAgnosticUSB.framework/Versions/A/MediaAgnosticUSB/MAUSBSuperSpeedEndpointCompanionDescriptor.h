@interface MAUSBSuperSpeedEndpointCompanionDescriptor : MAUSBDescriptor

@property (readonly) unsigned char bMaxBurst;
@property (readonly) unsigned char bmAttributes;
@property (readonly) unsigned short wBytesPerInterval;

- (id)data;
- (id)initWithBuffer:(id)a0;
- (id)descriptionWithTabDepth:(unsigned int)a0;
- (id)initWithMaxBurst:(unsigned char)a0 attributes:(unsigned char)a1 bytesPerInterval:(unsigned short)a2;

@end
