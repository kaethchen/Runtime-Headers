@class PKDiscoveryRelevantDateRange, NSString, PKOSVersionRequirementRange, PKHardwareVersionRange;

@interface PKDiscoveryObject : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSString *identifier;
@property (nonatomic) long long version;
@property (copy, nonatomic) NSString *ruleIdentifier;
@property (copy, nonatomic) NSString *triggerRuleIdentifier;
@property (retain, nonatomic) PKOSVersionRequirementRange *osVersionRange;
@property (retain, nonatomic) PKHardwareVersionRange *hardwareVersionRange;
@property (retain, nonatomic) PKDiscoveryRelevantDateRange *relevantDateRange;
@property (nonatomic) long long maxViewCount;
@property (nonatomic) long long maxViewCountLargeCard;
@property (nonatomic) long long status;
@property (nonatomic) long long viewCount;

+ (id)convertEngagementRequestToDictionary:(id)a0;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithDictionary:(id)a0;
- (BOOL)hasTrigger;
- (BOOL)isValidForTime:(id)a0;
- (void)incrementViewCount;
- (BOOL)isTerminalStatus;
- (void)updateForRuleResult:(BOOL)a0;
- (BOOL)updateWithDiscoveryObject:(id)a0;
- (void)updatedStatusForAction:(long long)a0;

@end
