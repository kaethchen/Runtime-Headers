@class MTLResourceAddressRangeArray;

@interface MTLHeapDescriptorInternal : MTLHeapDescriptor {
    struct MTLHeapDescriptorPrivate { unsigned long long x0; unsigned long long x1; unsigned long long x2; long long x3; BOOL x4; long long x5; unsigned long long x6; unsigned long long x7; unsigned long long x8; unsigned long long x9; } *_private;
    MTLResourceAddressRangeArray *_addressRanges;
}

@property (nonatomic) long long sparsePageSize;
@property (nonatomic) BOOL sparsePageAccessCountersEnabled;

- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (id)init;
- (BOOL)isEqual:(id)a0;
- (void)setType:(long long)a0;
- (long long)type;
- (void)setSize:(unsigned long long)a0;
- (unsigned long long)resourceOptions;
- (id)addressRanges;
- (unsigned long long)cpuCacheMode;
- (const struct MTLHeapDescriptorPrivate { unsigned long long x0; unsigned long long x1; unsigned long long x2; long long x3; BOOL x4; long long x5; unsigned long long x6; unsigned long long x7; unsigned long long x8; unsigned long long x9; } *)descriptorPrivate;
- (id)formattedDescription:(unsigned long long)a0;
- (unsigned long long)hazardTrackingMode;
- (unsigned long long)memoryPoolId;
- (unsigned long long)protectionOptions;
- (void)setProtectionOptions:(unsigned long long)a0;
- (void)setResourceOptions:(unsigned long long)a0;
- (unsigned long long)size;
- (unsigned long long)storageMode;
- (void)setStorageMode:(unsigned long long)a0;
- (void)setCpuCacheMode:(unsigned long long)a0;
- (void)setHazardTrackingMode:(unsigned long long)a0;
- (unsigned long long)pinnedGPUAddress;
- (void)setAddressRanges:(id)a0;
- (void)setMemoryPoolId:(unsigned long long)a0;
- (void)setPinnedGPUAddress:(unsigned long long)a0;
- (BOOL)validateWithDevice:(id)a0;

@end
