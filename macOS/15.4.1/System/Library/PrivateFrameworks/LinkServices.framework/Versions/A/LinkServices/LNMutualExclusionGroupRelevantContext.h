@class NSString;

@interface LNMutualExclusionGroupRelevantContext : LNRelevantContext

@property (readonly, nonatomic) NSString *groupIdentifier;

+ (BOOL)supportsSecureCoding;

- (id)description;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithGroupIdentifier:(id)a0;
- (id)analyticsDescription;

@end
