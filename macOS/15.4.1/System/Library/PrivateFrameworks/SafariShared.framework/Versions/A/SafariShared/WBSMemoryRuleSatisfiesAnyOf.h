@interface WBSMemoryRuleSatisfiesAnyOf : WBSMemoryRule

- (id)_detailedRuleTypeForLeakSignature;
- (id)_detailedRuleTypeForLeakSummaryWithInstanceCounts:(id)a0;
- (id)initWithDictionary:(id)a0 logger:(id)a1;
- (BOOL)isViolatedByInstanceCounts:(id)a0;
- (id)leakInfoWithInstanceCounts:(id)a0;

@end
