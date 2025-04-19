@protocol MTLCommandQueue;

@interface PTEffectDescriptor : NSObject <NSCopying>

@property (retain, nonatomic) id<MTLCommandQueue> metalCommandQueue;
@property BOOL syncInitialization;
@property struct CGSize { double width; double height; } colorSize;
@property struct CGSize { double width; double height; } externalDisparitySize;
@property unsigned long long availableEffectTypes;
@property unsigned long long activeEffectType;
@property long long effectQuality;
@property BOOL prewarmOnly;
@property BOOL laguna;
@property BOOL externalHandDetectionsEnabled;
@property BOOL allowSkipOutColorBufferWrite;
@property BOOL externalCamera;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;

@end
