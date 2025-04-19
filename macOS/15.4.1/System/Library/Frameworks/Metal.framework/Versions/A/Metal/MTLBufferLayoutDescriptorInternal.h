@interface MTLBufferLayoutDescriptorInternal : MTLBufferLayoutDescriptor {
    unsigned long long _stride;
    unsigned long long _stepFunction;
    unsigned long long _instanceStepRate;
}

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)init;
- (unsigned long long)stride;
- (void)setStepFunction:(unsigned long long)a0;
- (void)setStride:(unsigned long long)a0;
- (BOOL)isStrideDynamic;
- (void)setStepRate:(unsigned long long)a0;
- (unsigned long long)stepFunction;
- (unsigned long long)stepRate;

@end
