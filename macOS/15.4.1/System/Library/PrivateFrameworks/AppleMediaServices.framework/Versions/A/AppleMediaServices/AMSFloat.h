@interface AMSFloat : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly) float value;

+ (id)floatWithFloat:(float)a0;

- (BOOL)isEqual:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithFloat:(float)a0;
- (BOOL)isEqualToFloat:(id)a0;

@end
