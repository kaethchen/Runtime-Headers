@class NSString;
@protocol MTLCounterSet;

@interface MTLCounterSampleBufferDescriptorInternal : MTLCounterSampleBufferDescriptor <NSCopying> {
    id<MTLCounterSet> _counterSet;
    unsigned long long _storageMode;
    NSString *_label;
    unsigned long long _sampleCount;
}

- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void)setSampleCount:(unsigned long long)a0;
- (id)label;
- (unsigned long long)sampleCount;
- (void)setLabel:(id)a0;
- (unsigned long long)storageMode;
- (void)setStorageMode:(unsigned long long)a0;
- (id)counterSet;
- (void)setCounterSet:(id)a0;

@end
