@class NSNumber;

@interface scoredRule : NSObject

@property (nonatomic) long long ruleLabel;
@property (nonatomic) float ruleScore;
@property (retain, nonatomic) NSNumber *recipientUniqueID;

- (void).cxx_destruct;
- (long long)compare:(id)a0;
- (id)initWithLabel:(long long)a0 score:(float)a1 recipientUniqueID:(id)a2;

@end
