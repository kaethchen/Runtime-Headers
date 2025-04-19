@class MTLResourceStatePassSampleBufferAttachmentDescriptorInternal;

@interface MTLResourceStatePassSampleBufferAttachmentDescriptorArrayInternal : MTLResourceStatePassSampleBufferAttachmentDescriptorArray {
    MTLResourceStatePassSampleBufferAttachmentDescriptorInternal *_sampleDescriptors[4];
}

- (void)dealloc;
- (id)objectAtIndexedSubscript:(unsigned long long)a0;
- (void)setObject:(id)a0 atIndexedSubscript:(unsigned long long)a1;
- (id)_descriptorAtIndex:(unsigned long long)a0;

@end
