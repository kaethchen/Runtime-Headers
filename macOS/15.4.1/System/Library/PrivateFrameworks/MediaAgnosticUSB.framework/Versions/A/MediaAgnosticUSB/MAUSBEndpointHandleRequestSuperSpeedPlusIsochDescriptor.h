@class MAUSBStandardEndpointDescriptor, MAUSBSuperSpeedEndpointCompanionDescriptor, MAUSBSuperSpeedPlusIsochEndpointCompanionDescriptor;

@interface MAUSBEndpointHandleRequestSuperSpeedPlusIsochDescriptor : MAUSBStructure

@property (readonly) MAUSBStandardEndpointDescriptor *standardDescriptor;
@property (readonly) MAUSBSuperSpeedEndpointCompanionDescriptor *superSpeedDescriptor;
@property (readonly) MAUSBSuperSpeedPlusIsochEndpointCompanionDescriptor *superSpeedPlusDescriptor;

- (void).cxx_destruct;
- (id)data;
- (id)initWithBuffer:(id)a0;
- (unsigned short)structureLength;
- (id)descriptionWithTabDepth:(unsigned int)a0;
- (id)initWithStandardDescriptor:(id)a0 superSpeedDescriptor:(id)a1 superSpeedPlusDescriptor:(id)a2;

@end
