@class NSArray, NSPredicate;

@interface _DKTombstonePolicy : NSObject {
    NSArray *_requirements;
    NSPredicate *_predicateForEventsRequiredToBeTombstoned;
    NSArray *_propertiesToFetchForTombstones;
    NSPredicate *_eventPredicateForEventsRequiredToBeTombstoned;
}

@property (readonly, nonatomic) NSArray *requirements;
@property (readonly, nonatomic) NSPredicate *predicateForEventsRequiredToBeTombstoned;
@property (readonly, nonatomic) NSArray *propertiesToFetchForTombstones;

+ (id)defaultPolicy;

- (id)init;
- (void).cxx_destruct;
- (id)initWithRequirements:(id)a0;
- (id)tombstonesForEvents:(id)a0 resultingFromRequirementsWithIdentifiers:(id *)a1;
- (id)tombstonesForPartialEvents:(id)a0 resultingFromRequirementsWithIdentifiers:(id *)a1;

@end
