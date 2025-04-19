@interface MAUSBHostSynchronizationCapabilityDescriptor : MAUSBHostCapabilityDescriptor

@property (readonly) BOOL mediaTimeAvailable;

- (id)data;
- (id)initWithBuffer:(id)a0;
- (id)descriptionWithTabDepth:(unsigned int)a0;
- (id)initWithMediaTimeAvailable:(BOOL)a0;

@end
