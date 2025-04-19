@class MTLBlitPassSampleBufferAttachmentDescriptorArrayInternal;

@interface MTLBlitPassDescriptorInternal : MTLBlitPassDescriptor {
    struct MTLBlitPassDescriptorPrivate { MTLBlitPassSampleBufferAttachmentDescriptorArrayInternal *sampleBufferAttachments; } _private;
}

+ (id)blitPassDescriptor;

- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (id)init;
- (BOOL)isEqual:(id)a0;
- (const struct MTLBlitPassDescriptorPrivate { id x0; } *)_descriptorPrivate;
- (id)sampleBufferAttachments;

@end
