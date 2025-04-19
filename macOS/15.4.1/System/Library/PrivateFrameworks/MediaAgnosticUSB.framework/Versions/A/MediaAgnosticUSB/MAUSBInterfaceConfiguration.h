@class NSArray, MAUSBStandardInterfaceDescriptor;

@interface MAUSBInterfaceConfiguration : MAUSBObject

@property (readonly) MAUSBStandardInterfaceDescriptor *descriptor;
@property (readonly) NSArray *endpoints;

- (void).cxx_destruct;
- (id)descriptionWithTabDepth:(unsigned int)a0;
- (id)initWithDescriptor:(id)a0 endpoints:(id)a1;

@end
