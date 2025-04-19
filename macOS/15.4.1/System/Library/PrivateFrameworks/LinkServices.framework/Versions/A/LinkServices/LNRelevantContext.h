@class NSArray, NSString;

@interface LNRelevantContext : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) NSArray *conditions;
@property (readonly) NSString *analyticsDescription;
@property (readonly) long long priority;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)init;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)_init;
- (id)initWithPriority:(long long)a0;
- (id)asCondition;

@end
