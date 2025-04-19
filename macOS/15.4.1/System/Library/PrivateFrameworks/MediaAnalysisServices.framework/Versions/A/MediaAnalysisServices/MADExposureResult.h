@interface MADExposureResult : MADResult

@property (readonly, nonatomic) double exposureScore;

+ (BOOL)supportsSecureCoding;
+ (id)resultWithExposureScore:(double)a0;

- (id)description;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithExposureScore:(double)a0;

@end
