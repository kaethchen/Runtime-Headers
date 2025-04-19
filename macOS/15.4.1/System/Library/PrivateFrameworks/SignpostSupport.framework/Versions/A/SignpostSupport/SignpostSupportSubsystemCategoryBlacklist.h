@interface SignpostSupportSubsystemCategoryBlacklist : SignpostSupportSubsystemCategoryFilter

- (id)initWithEntries:(id)a0;
- (unsigned long long)_compoundPredicateType;
- (void)_forceInclusionOfSubsystem:(id)a0 category:(id)a1;
- (BOOL)_wantsNotSubsystem;
- (id)liveStreamingPredicate;
- (BOOL)passesSubsystem:(id)a0 category:(id)a1;

@end
