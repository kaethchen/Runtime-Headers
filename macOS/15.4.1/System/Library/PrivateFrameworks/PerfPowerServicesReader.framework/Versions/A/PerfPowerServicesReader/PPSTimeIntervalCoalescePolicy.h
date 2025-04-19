@interface PPSTimeIntervalCoalescePolicy : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly) short numberPolicy;
@property (readonly) short stringPolicy;

+ (id)legacyPolicy;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithNumberCoalescePolicy:(short)a0 stringCoalescePolicy:(short)a1;

@end
