@class MAUSBStandardEndpointDescriptor, MAUSBSuperSpeedEndpointCompanionDescriptor, MAUSBSuperSpeedPlusIsochEndpointCompanionDescriptor;

@interface MAUSBEndpointConfiguration : MAUSBObject

@property (readonly) MAUSBStandardEndpointDescriptor *descriptor;
@property (readonly) MAUSBSuperSpeedEndpointCompanionDescriptor *superSpeedDescriptor;
@property (readonly) MAUSBSuperSpeedPlusIsochEndpointCompanionDescriptor *superSpeedIsochDescriptor;

- (void).cxx_destruct;
- (id)descriptionWithTabDepth:(unsigned int)a0;
- (id)initWitDescriptor:(id)a0 superSpeedDescriptor:(id)a1 superSpeedIsochDescriptor:(id)a2;

@end
