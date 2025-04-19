@interface MPSNDArrayNormFusionDescriptor : NSObject <NSCopying>

@property (nonatomic) int normFusionType;
@property (nonatomic) float epsilon;
@property (nonatomic) BOOL isLeftFused;
@property (nonatomic) BOOL hasScale;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)init;

@end
