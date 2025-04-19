@class NSString;

@interface CNReputationHandle : NSObject <NSCopying>

@property (readonly, copy, nonatomic) NSString *stringValue;
@property (readonly, nonatomic) long long type;

+ (id)descriptionForType:(long long)a0;
+ (id)handleWithEmailAddress:(id)a0;
+ (id)handleWithPhoneNumber:(id)a0;
+ (id)handleWithStringValue:(id)a0;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)configureBuilder:(id)a0;
- (id)initWithStringValue:(id)a0 type:(long long)a1;

@end
