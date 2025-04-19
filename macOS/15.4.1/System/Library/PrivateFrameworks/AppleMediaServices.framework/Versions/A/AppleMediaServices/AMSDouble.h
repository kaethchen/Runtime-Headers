@interface AMSDouble : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly) double value;

+ (id)doubleWithDouble:(double)a0;

- (BOOL)isEqual:(id)a0;
- (id)initWithDouble:(double)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (BOOL)isEqualToDouble:(id)a0;

@end
