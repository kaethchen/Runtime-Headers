@class NSString;

@interface SFSuggestedUser : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) long long usageFrequency;
@property (readonly, copy, nonatomic) NSString *value;
@property (readonly, nonatomic) long long type;

+ (id)suggestedUserWithValue:(id)a0 type:(long long)a1;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (id)init;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (long long)compare:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithValue:(id)a0 type:(long long)a1;

@end
