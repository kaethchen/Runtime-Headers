@class MAUSBStandardEndpointDescriptor, MAUSBSuperSpeedEndpointCompanionDescriptor;

@interface MAUSBEndpointHandleRequestSuperSpeedDescriptor : MAUSBStructure

@property (readonly) MAUSBStandardEndpointDescriptor *standardDescriptor;
@property (readonly) MAUSBSuperSpeedEndpointCompanionDescriptor *superSpeedDescriptor;

- (void).cxx_destruct;
- (id)data;
- (id)initWithBuffer:(id)a0;
- (unsigned short)structureLength;
- (id)descriptionWithTabDepth:(unsigned int)a0;
- (id)initWithStandardDescriptor:(id)a0 superSpeedDescriptor:(id)a1;

@end
