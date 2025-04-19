@interface _DKEligibleForPredictionTombstoneRequirement : _DKTombstoneRequirement

- (id)identifier;
- (id)predicate;
- (void)assignPropertiesToTombstone:(id)a0 extractedFromEvent:(id)a1;
- (void)assignPropertiesToTombstone:(id)a0 extractedFromPartialEvent:(id)a1;
- (id)eligibleForPredictionKey;
- (id)eventPredicate;
- (id)propertiesToFetch;

@end
