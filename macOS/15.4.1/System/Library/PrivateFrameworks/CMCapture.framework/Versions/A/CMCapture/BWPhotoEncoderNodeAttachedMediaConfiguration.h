@interface BWPhotoEncoderNodeAttachedMediaConfiguration : NSObject

@property (readonly, nonatomic) float mainImageDownscalingFactor;
@property (readonly, nonatomic) struct { int width; int height; } dimensions;
@property (nonatomic) long long propagationMode;
@property (readonly, nonatomic) BOOL propagatesDownstream;
@property (readonly, nonatomic) BOOL requiresEncoding;

- (id)description;
- (id)initWithDimensions:(struct { int x0; int x1; })a0 propagationMode:(long long)a1;
- (id)initWithMainImageDownscalingFactor:(float)a0 propagationMode:(long long)a1;

@end
