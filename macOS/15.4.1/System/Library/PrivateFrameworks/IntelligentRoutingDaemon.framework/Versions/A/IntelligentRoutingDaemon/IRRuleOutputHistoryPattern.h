@class NSDictionary;

@interface IRRuleOutputHistoryPattern : IRRuleOutput

@property (retain, nonatomic) NSDictionary *scoreForCandidates;
@property (nonatomic) unsigned long long numberOfEventsInHistory;

- (void).cxx_destruct;
- (id)initWithRule:(id)a0;
- (id)evaluateRuleOutputWithCandidateIdentifier:(id)a0;

@end
