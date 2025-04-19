@class NSPredicate, NSMutableDictionary;

@interface SignpostSupportSubsystemCategoryFilter : NSObject <SignpostPredicateProducer>

@property (readonly, nonatomic) NSMutableDictionary *subsystemsDict;
@property (readonly, nonatomic) unsigned long long _compoundPredicateType;
@property (readonly, nonatomic) BOOL _wantsNotSubsystem;
@property (readonly, nonatomic) NSPredicate *predicateEquivalent;

- (id)debugDescription;
- (void).cxx_destruct;
- (void)addEntry:(id)a0;
- (void)addFilter:(id)a0;
- (void)_fixupToSupportFramerateCalculation;
- (void)_forceInclusionOfSubsystem:(id)a0 category:(id)a1;
- (id)_initWithEntries:(id)a0;
- (id)_predicateEquivalent;
- (id)_subpredicatesForSubsystems;
- (void)addSubsystem:(id)a0 category:(id)a1;
- (id)liveStreamingPredicate;
- (BOOL)matchesSubsystem:(id)a0 category:(id)a1;
- (BOOL)passesSubsystem:(id)a0 category:(id)a1;

@end
