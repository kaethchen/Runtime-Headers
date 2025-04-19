@interface HMMediaSystemRole : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) unsigned long long type;

+ (id)leftRole;
+ (id)rightRole;
+ (BOOL)roleFromDictionary:(id)a0 roleOutput:(unsigned long long *)a1;

- (id)description;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithDictionary:(id)a0;
- (id)serialize;
- (id)initWithRole:(unsigned long long)a0;

@end
