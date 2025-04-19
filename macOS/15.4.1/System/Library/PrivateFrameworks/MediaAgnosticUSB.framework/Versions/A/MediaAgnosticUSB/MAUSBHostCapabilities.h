@interface MAUSBHostCapabilities : MAUSBObject

@property (readonly) unsigned short maxOutstandingManagementRequests;
@property (readonly) BOOL mediaTimeAvailable;
@property (readonly) BOOL linkSleepCapable;

+ (id)defaults;

- (id)descriptionWithTabDepth:(unsigned int)a0;
- (id)initWithCapabilityRequestPacket:(id)a0;
- (id)initWithMaxOutstandingManagementRequests:(unsigned short)a0 mediaTimeAvailable:(BOOL)a1 linkSleepCapable:(BOOL)a2;

@end
