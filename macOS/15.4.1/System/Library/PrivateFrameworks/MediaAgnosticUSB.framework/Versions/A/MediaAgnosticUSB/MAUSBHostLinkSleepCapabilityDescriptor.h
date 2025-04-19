@interface MAUSBHostLinkSleepCapabilityDescriptor : MAUSBHostCapabilityDescriptor

@property (readonly) BOOL linkSleepCapable;

- (id)data;
- (id)initWithBuffer:(id)a0;
- (id)descriptionWithTabDepth:(unsigned int)a0;
- (id)initWithLinkSleepCapable:(BOOL)a0;

@end
