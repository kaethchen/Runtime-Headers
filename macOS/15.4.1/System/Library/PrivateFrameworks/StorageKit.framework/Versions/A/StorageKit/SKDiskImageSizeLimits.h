@interface SKDiskImageSizeLimits : NSObject

@property unsigned long long currentBytes;
@property unsigned long long minBytes;
@property unsigned long long maxBytes;

+ (BOOL)isSupportedWholeDisk:(id)a0;

- (unsigned long long)physicalStoreMinimumSizeFromStore:(id)a0;

@end
