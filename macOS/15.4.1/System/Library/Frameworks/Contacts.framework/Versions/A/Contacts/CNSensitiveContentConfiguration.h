@interface CNSensitiveContentConfiguration : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) long long override;

+ (id)log;
+ (id)configurationWithOverride:(long long)a0;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)dataRepresentation;
- (id)initWithDataRepresentation:(id)a0;
- (id)initWithSensitiveContentOverride:(long long)a0;
- (id)updatedWithOverride:(long long)a0;

@end
