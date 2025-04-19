@class NSArray, MAUSBStandardConfigurationDescriptor;

@interface MAUSBDeviceConfiguration : MAUSBObject

@property (readonly) MAUSBStandardConfigurationDescriptor *descriptor;
@property (readonly) NSArray *interfaces;

- (void).cxx_destruct;
- (id)descriptionWithTabDepth:(unsigned int)a0;
- (BOOL)findNextDescriptorOfType:(unsigned char)a0 inInputBuffer:(id)a1;
- (id)initWithConfigurationDescription:(id)a0;
- (BOOL)parseConfigurationData:(id)a0;

@end
