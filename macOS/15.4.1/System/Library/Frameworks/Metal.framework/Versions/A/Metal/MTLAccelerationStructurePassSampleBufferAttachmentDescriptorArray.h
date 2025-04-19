@class MTLAccelerationStructurePassSampleBufferAttachmentDescriptor;

@interface MTLAccelerationStructurePassSampleBufferAttachmentDescriptorArray : NSObject {
    MTLAccelerationStructurePassSampleBufferAttachmentDescriptor *_sampleDescriptors[4];
}

- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (id)objectAtIndexedSubscript:(unsigned long long)a0;
- (void)setObject:(id)a0 atIndexedSubscript:(unsigned long long)a1;
- (id)_descriptorAtIndex:(unsigned long long)a0;
- (void)copyFrom:(id)a0 withZone:(struct _NSZone { } *)a1;

@end
