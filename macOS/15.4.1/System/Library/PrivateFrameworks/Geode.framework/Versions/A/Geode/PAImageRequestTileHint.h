@interface PAImageRequestTileHint : NSObject

@property struct PFIntSize_st { unsigned long long width; unsigned long long height; } tileThreshold;

+ (id)defaultTileHint;
+ (id)noTileHint;

- (id)description;
- (struct PFIntSize_st { unsigned long long x0; unsigned long long x1; })tileSizeForImageSize:(struct PFIntSize_st { unsigned long long x0; unsigned long long x1; })a0;

@end
