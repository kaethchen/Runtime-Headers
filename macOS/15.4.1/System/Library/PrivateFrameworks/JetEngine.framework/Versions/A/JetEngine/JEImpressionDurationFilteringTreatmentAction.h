@class NSPredicate;

@interface JEImpressionDurationFilteringTreatmentAction : JETreatmentAction

@property (readonly, nonatomic) long long durationThreshold;
@property (readonly, nonatomic) NSPredicate *filters;

- (void).cxx_destruct;
- (id)filteredDurationArray:(id)a0;
- (id)filteredViewedInfoDetailed:(id)a0;
- (id)initWithField:(id)a0 configuration:(id)a1;
- (id)performAction:(id)a0 context:(id)a1;
- (id)updatedImpression:(id)a0;

@end
