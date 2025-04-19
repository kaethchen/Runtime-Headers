@class NSString, NSMutableArray, NSArray;

@interface AMSFeatureFlagGroup : NSObject

@property (retain, nonatomic) NSMutableArray *mutableFlags;
@property (copy, nonatomic) NSString *name;
@property (readonly, nonatomic) NSArray *flags;

+ (BOOL)disableFlagGroupWithName:(id)a0 error:(id *)a1;
+ (id)_normalizedFlagGroupsFromFlagGroups:(id)a0;
+ (id)allFlagGroups;
+ (id)allFlagGroupsIncludingHidden:(BOOL)a0;
+ (id)allFlagGroupsIncludingHidden:(BOOL)a0 searchDirectory:(id)a1;
+ (BOOL)enableFlagGroupWithName:(id)a0 error:(id *)a1;
+ (id)fetchFlagGroupWithName:(id)a0;
+ (id)flagGroupWithName:(id)a0 includingHidden:(BOOL)a1;
+ (id)groupsFromDomainData:(id)a0 domain:(id)a1;
+ (id)groupsFromDomainData:(id)a0 domain:(id)a1 mutableFeatures:(id)a2 profileFeatures:(id)a3 includesHidden:(BOOL)a4;
+ (void)resetAllFlagGroups;
+ (BOOL)setFlagGroupWithName:(id)a0 enabled:(BOOL)a1 error:(id *)a2;

- (void).cxx_destruct;
- (id)initWithName:(id)a0;
- (void)reset;
- (id)_completedFlags;
- (id)_developmentFlags;
- (id)_groupKeyForDevelopmentPhase:(long long)a0;
- (id)_groupKeyForType:(long long)a0;
- (id)_testableFlags;
- (id)activateFlagsIfNeededForDevelopmentPhase:(long long)a0;
- (id)activateFlagsIfNeededForType:(long long)a0;
- (void)activateITFEs;
- (id)allITFEs;
- (void)appendFlag:(id)a0;
- (id)completedFlags;
- (id)developmentFlags;
- (id)fetchAllGroupKeys;
- (id)flagsForDevelopmentPhase:(long long)a0;
- (id)flagsForType:(long long)a0;
- (id)initWithName:(id)a0 domain:(id)a1;
- (BOOL)isDevelopmentPhaseEnabled:(long long)a0;
- (BOOL)isGroupTypeEnabled:(long long)a0;
- (void)setFlagsForDevelopmentPhase:(long long)a0 enabled:(BOOL)a1;
- (void)setGroupType:(long long)a0 enabled:(BOOL)a1;
- (id)testableFlags;

@end
