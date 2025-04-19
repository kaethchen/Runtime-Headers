@interface FCStatelessPersonalizationEnablementRequirements : NSObject

@property (nonatomic) long long minimumAggregateCount;
@property (nonatomic) long long minimumEventCount;

- (id)description;
- (id)initWithDictionary:(id)a0;

@end
