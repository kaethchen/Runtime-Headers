@interface AMSBoolean : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly) BOOL value;

+ (id)booleanWithBool:(BOOL)a0;

- (BOOL)isEqual:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithBool:(BOOL)a0;
- (BOOL)isEqualToBool:(id)a0;

@end
