@class IRRule;

@interface IRRuleOutput : NSObject

@property (readonly, nonatomic) IRRule *rule;

- (void).cxx_destruct;
- (id)initWithRule:(id)a0;
- (id)evaluateRuleOutputWithCandidateIdentifier:(id)a0;

@end
