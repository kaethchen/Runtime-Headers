@protocol MTLCounterSampleBuffer;

@interface MTLComputePassSampleBufferAttachmentDescriptorInternal : MTLComputePassSampleBufferAttachmentDescriptor {
    struct MTLComputePassSampleBufferAttachmentDescriptorPrivate { id<MTLCounterSampleBuffer> sampleBuffer; unsigned long long startOfEncoderSampleIndex; unsigned long long endOfEncoderSampleIndex; } _private;
}

- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (id)init;
- (BOOL)isEqual:(id)a0;
- (const struct MTLComputePassSampleBufferAttachmentDescriptorPrivate { id x0; unsigned long long x1; unsigned long long x2; } *)_descriptorPrivate;
- (unsigned long long)endOfEncoderSampleIndex;
- (id)sampleBuffer;
- (void)setSampleBuffer:(id)a0;
- (unsigned long long)startOfEncoderSampleIndex;
- (void)setEndOfEncoderSampleIndex:(unsigned long long)a0;
- (void)setStartOfEncoderSampleIndex:(unsigned long long)a0;

@end
