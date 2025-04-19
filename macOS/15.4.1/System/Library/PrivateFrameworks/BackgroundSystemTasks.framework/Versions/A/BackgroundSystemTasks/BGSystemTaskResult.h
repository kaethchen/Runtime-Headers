@class NSString;

@interface BGSystemTaskResult : NSObject

@property (readonly, copy, nonatomic) NSString *identifier;
@property (readonly, nonatomic) unsigned long long count;

- (id)description;
- (void).cxx_destruct;
- (id)asDASActivityResult;
- (id)initWithIdentifier:(id)a0 consumptionCount:(unsigned long long)a1;
- (id)initWithIdentifier:(id)a0 cumulativeProductionCount:(unsigned long long)a1;

@end
