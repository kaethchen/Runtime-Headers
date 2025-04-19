@class FCPersonalizationTreatment;
@protocol FCReadonlyPersonalizationAggregateStore;

@interface FCReadonlyPersonalizationAggregateStoreBasedUserVectorAggregateVectorProvider : NSObject <FCUserVectorAggregateVectorProvider>

@property (retain, nonatomic) FCPersonalizationTreatment *personalizationTreatment;
@property (retain, nonatomic) id<FCReadonlyPersonalizationAggregateStore> aggregateStore;

- (void).cxx_destruct;
- (id)aggregateVectorForTags:(id)a0;
- (id)initWithReadonlyPersonalizationAggregateStore:(id)a0 personalizationTreatment:(id)a1;

@end
