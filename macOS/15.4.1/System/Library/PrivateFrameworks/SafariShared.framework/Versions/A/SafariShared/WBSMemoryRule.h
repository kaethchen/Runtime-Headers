@class NSArray;

@interface WBSMemoryRule : NSObject

@property (readonly, nonatomic) long long ruleType;
@property (readonly, nonatomic) NSArray *classes;
@property (readonly, nonatomic) NSArray *constants;
@property (readonly, nonatomic) NSArray *subrules;

+ (id)_ruleTypeEnumToString:(long long)a0;
+ (long long)_ruleTypeStringToEnum:(id)a0;
+ (id)_validateValueForKey:(id)a0 ruleDict:(id)a1 isConstant:(BOOL)a2 logger:(id)a3;
+ (id)createRuleWithDictionary:(id)a0 logger:(id)a1;

- (void).cxx_destruct;
- (id)initWithType:(long long)a0 classes:(id)a1 constants:(id)a2;
- (id)_leakSummaryWithInstanceCounts:(id)a0;
- (id)_detailedRuleTypeForLeakSignature;
- (id)_detailedRuleTypeForLeakSummaryWithInstanceCounts:(id)a0;
- (id)_leakSignature;
- (Class)_leftClass;
- (id)initWithDictionary:(id)a0 logger:(id)a1;
- (id)initWithType:(long long)a0 classes:(id)a1;
- (id)initWithType:(long long)a0 classes:(id)a1 constants:(id)a2 subrules:(id)a3;
- (id)initWithType:(long long)a0 classes:(id)a1 subrules:(id)a2;
- (BOOL)isViolatedByInstanceCounts:(id)a0;
- (id)leakInfoWithInstanceCounts:(id)a0;

@end
