@class MTLResourceAddressRangeArray;

@interface MTLBufferDescriptor : NSObject <NSCopying>

@property (nonatomic) unsigned long long pinnedGPUAddress;
@property (nonatomic) unsigned long long parentGPUAddress;
@property (nonatomic) unsigned long long parentGPUSize;
@property (nonatomic) unsigned long long pointerTag;
@property (retain, nonatomic) MTLResourceAddressRangeArray *addressRanges;
@property (nonatomic) unsigned long long length;
@property (nonatomic) unsigned long long resourceOptions;
@property (nonatomic) unsigned long long cpuCacheMode;
@property (nonatomic) unsigned long long storageMode;
@property (nonatomic) unsigned long long hazardTrackingMode;
@property (nonatomic) void *contents;
@property (nonatomic) BOOL noCopy;
@property (nonatomic) id /* block */ deallocator;
@property (nonatomic) unsigned long long alignment;
@property (nonatomic) struct __IOSurface { } *iosurface;

- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (id)init;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)cpuCacheMode;
- (unsigned long long)hazardTrackingMode;
- (unsigned long long)storageMode;
- (void)setStorageMode:(unsigned long long)a0;
- (void)setCpuCacheMode:(unsigned long long)a0;
- (void)setHazardTrackingMode:(unsigned long long)a0;

@end
