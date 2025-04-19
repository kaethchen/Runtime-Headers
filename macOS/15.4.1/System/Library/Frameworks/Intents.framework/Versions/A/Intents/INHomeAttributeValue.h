@class NSString, INHomeAttributeRange;

@interface INHomeAttributeValue : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly) long long type;
@property (readonly) BOOL boolValue;
@property (readonly) double doubleValue;
@property (readonly) long long integerValue;
@property (readonly, copy) NSString *stringValue;
@property (readonly) long long limitValue;
@property (readonly) long long unit;
@property (readonly) INHomeAttributeRange *rangeValue;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithDoubleValue:(double)a0 unit:(long long)a1;
- (id)initWithBoolValue:(BOOL)a0;
- (id)initWithIntegerValue:(long long)a0 unit:(long long)a1;
- (id)initWithLimitValue:(long long)a0;
- (id)initWithRangeValue:(id)a0;
- (id)initWithStringValue:(id)a0 unit:(long long)a1;
- (id)initWithType:(long long)a0 boolValue:(BOOL)a1 doubleValue:(double)a2 integerValue:(long long)a3 stringValue:(id)a4 limitValue:(long long)a5 unit:(long long)a6 rangeValue:(id)a7;

@end
