@interface MAUSBSuperSpeedPlusIsochEndpointCompanionDescriptor : MAUSBDescriptor

@property (readonly) unsigned int dwBytesPerInterval;

- (id)data;
- (id)initWithBuffer:(id)a0;
- (id)descriptionWithTabDepth:(unsigned int)a0;
- (id)initWithBytesPerInterval:(unsigned int)a0;

@end
