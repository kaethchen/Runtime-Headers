@interface MAUSBStandardConfigurationDescriptor : MAUSBDescriptor

@property (readonly) unsigned short wTotalLength;
@property (readonly) unsigned char bNumInterfaces;
@property (readonly) unsigned char bConfigurationValue;
@property (readonly) unsigned char iConfiguration;
@property (readonly) unsigned char bmAttributes;
@property (readonly) unsigned char bMaxPower;

- (id)data;
- (id)initWithBuffer:(id)a0;
- (unsigned char)configurationDescriptorType;
- (id)descriptionWithTabDepth:(unsigned int)a0;
- (id)initWithConfigurationDescriptorType:(unsigned char)a0 totalLength:(unsigned short)a1 numInterfaces:(unsigned char)a2 configurationValue:(unsigned char)a3 configurationIndex:(unsigned char)a4 attributes:(unsigned char)a5 maxPower:(unsigned char)a6;
- (id)initWithTotalLength:(unsigned short)a0 numInterfaces:(unsigned char)a1 configurationValue:(unsigned char)a2 configurationIndex:(unsigned char)a3 attributes:(unsigned char)a4 maxPower:(unsigned char)a5;

@end
