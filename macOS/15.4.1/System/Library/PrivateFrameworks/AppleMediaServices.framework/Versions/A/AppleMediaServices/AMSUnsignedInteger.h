@interface AMSUnsignedInteger : NSObject

@property (readonly) unsigned long long value;

+ (id)unsignedIntegerWithUnsignedInteger:(unsigned long long)a0;

- (BOOL)isEqual:(id)a0;
- (id)initWithUnsignedInteger:(unsigned long long)a0;
- (BOOL)isEqualToUnsignedInteger:(id)a0;

@end
