@interface MAUSBHostCapabilityDescriptor : MAUSBStructure

@property (readonly) unsigned char type;
@property (readonly) unsigned char length;

- (id)data;
- (id)initWithBuffer:(id)a0;
- (id)initWithType:(unsigned char)a0 length:(unsigned char)a1;
- (unsigned short)structureLength;
- (id)descriptionWithTabDepth:(unsigned int)a0;

@end
