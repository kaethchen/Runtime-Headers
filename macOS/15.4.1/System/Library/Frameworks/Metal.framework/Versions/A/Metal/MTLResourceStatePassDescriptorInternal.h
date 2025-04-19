@class MTLResourceStatePassSampleBufferAttachmentDescriptorArrayInternal;

@interface MTLResourceStatePassDescriptorInternal : MTLResourceStatePassDescriptor {
    struct MTLResourceStatePassDescriptorPrivate { MTLResourceStatePassSampleBufferAttachmentDescriptorArrayInternal *sampleBufferAttachments; } _private;
}

+ (id)resourceStatePassDescriptor;

- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (id)init;
- (BOOL)isEqual:(id)a0;
- (const struct MTLResourceStatePassDescriptorPrivate { id x0; } *)_descriptorPrivate;
- (id)sampleBufferAttachments;

@end
