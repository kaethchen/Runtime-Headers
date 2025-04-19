@interface MAUSBDescriptor : MAUSBStructure

@property (readonly) unsigned char bLength;
@property (readonly) unsigned char bDescriptorType;

- (id)data;
- (id)initWithBuffer:(id)a0;
- (id)initWithType:(unsigned char)a0 length:(unsigned char)a1;
- (unsigned short)structureLength;
- (id)descriptionWithTabDepth:(unsigned int)a0;

@end
