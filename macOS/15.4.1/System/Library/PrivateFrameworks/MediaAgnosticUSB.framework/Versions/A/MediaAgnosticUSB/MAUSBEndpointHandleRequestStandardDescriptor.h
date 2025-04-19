@class MAUSBStandardEndpointDescriptor;

@interface MAUSBEndpointHandleRequestStandardDescriptor : MAUSBStructure

@property (readonly) MAUSBStandardEndpointDescriptor *standardDescriptor;

- (void).cxx_destruct;
- (id)data;
- (id)initWithBuffer:(id)a0;
- (unsigned short)structureLength;
- (id)descriptionWithTabDepth:(unsigned int)a0;
- (id)initWithStandardDescriptor:(id)a0;

@end
