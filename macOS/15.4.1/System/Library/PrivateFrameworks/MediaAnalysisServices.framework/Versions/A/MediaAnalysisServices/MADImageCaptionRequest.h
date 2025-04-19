@interface MADImageCaptionRequest : MADRequest

@property (readonly, nonatomic) long long modelType;
@property (readonly, nonatomic) long long safetyType;

+ (BOOL)supportsSecureCoding;

- (id)description;
- (id)init;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithModelType:(long long)a0 safetyType:(long long)a1;

@end
