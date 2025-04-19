@class FCNewsPersonalizationAggregateModificationData;

@interface FCNewsPersonalizationAggregateModificationConfiguration : NSObject

@property (retain, nonatomic) FCNewsPersonalizationAggregateModificationData *baselineModificationData;
@property (retain, nonatomic) FCNewsPersonalizationAggregateModificationData *aggregateModificationData;

- (id)description;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0;

@end
