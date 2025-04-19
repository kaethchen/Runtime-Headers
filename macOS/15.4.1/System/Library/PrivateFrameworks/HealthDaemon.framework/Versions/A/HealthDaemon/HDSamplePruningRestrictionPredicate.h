@class NSNumber, NSSet, NSDate;

@interface HDSamplePruningRestrictionPredicate : NSObject

@property (readonly, nonatomic) NSNumber *maximumAnchor;
@property (readonly, nonatomic) NSDate *startDate;
@property (readonly, nonatomic) NSDate *endDate;
@property (readonly, nonatomic) NSSet *excludedSyncIdentities;

- (id)init;
- (void).cxx_destruct;
- (id)initWithMaximumAnchor:(id)a0 startDate:(id)a1 endDate:(id)a2 excludedSyncIdentities:(id)a3;

@end
