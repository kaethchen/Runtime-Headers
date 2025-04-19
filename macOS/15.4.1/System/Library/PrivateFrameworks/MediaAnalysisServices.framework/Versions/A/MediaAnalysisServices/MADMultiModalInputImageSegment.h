@class NSNumber, IOSurface;

@interface MADMultiModalInputImageSegment : MADMultiModalInputSegment

@property (readonly, nonatomic) IOSurface *surface;
@property (readonly, nonatomic) NSNumber *seed;

+ (BOOL)supportsSecureCoding;

- (id)description;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (long long)type;
- (id)initWithSurface:(id)a0 seed:(id)a1;

@end
