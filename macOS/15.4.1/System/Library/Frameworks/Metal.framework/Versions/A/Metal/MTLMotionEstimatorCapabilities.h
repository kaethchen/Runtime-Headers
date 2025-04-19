@interface MTLMotionEstimatorCapabilities : NSObject <NSCopying>

@property (readonly, nonatomic) unsigned long long minTextureWidth;
@property (readonly, nonatomic) unsigned long long maxTextureWidth;
@property (readonly, nonatomic) unsigned long long minTextureHeight;
@property (readonly, nonatomic) unsigned long long maxTextureHeight;
@property (readonly, nonatomic) unsigned long long macroBlockWidth;
@property (readonly, nonatomic) unsigned long long macroBlockHeight;
@property (readonly, nonatomic) unsigned long long regionWidth;
@property (readonly, nonatomic) unsigned long long regionHeight;
@property (readonly, nonatomic) unsigned long long precisionNumerator;
@property (readonly, nonatomic) unsigned long long precisionDenominator;

+ (id)alloc;
+ (id)allocWithZone:(struct _NSZone { } *)a0;

- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
