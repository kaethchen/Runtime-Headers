@interface _DKAppUsageTombstoneRequirement : _DKTombstoneRequirement

- (id)predicate;
- (void)assignPropertiesToTombstone:(id)a0 extractedFromEvent:(id)a1;
- (void)assignPropertiesToTombstone:(id)a0 extractedFromPartialEvent:(id)a1;
- (id)eventPredicate;
- (id)propertiesToFetch;

@end
