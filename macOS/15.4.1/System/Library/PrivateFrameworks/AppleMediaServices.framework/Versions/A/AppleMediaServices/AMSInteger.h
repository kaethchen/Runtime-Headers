@interface AMSInteger : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly) long long value;

+ (id)integerWithInteger:(long long)a0;

- (BOOL)isEqual:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithInteger:(long long)a0;
- (BOOL)isEqualToInteger:(id)a0;

@end
