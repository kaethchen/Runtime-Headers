@interface WBSTwoClassMemoryRule : WBSMemoryRule

- (id)_detailedRuleTypeForLeakSignature;
- (id)_detailedRuleTypeForLeakSummaryWithInstanceCounts:(id)a0;
- (Class)_rightClass;
- (id)initWithDictionary:(id)a0 logger:(id)a1;
- (id)leakInfoWithInstanceCounts:(id)a0;

@end
