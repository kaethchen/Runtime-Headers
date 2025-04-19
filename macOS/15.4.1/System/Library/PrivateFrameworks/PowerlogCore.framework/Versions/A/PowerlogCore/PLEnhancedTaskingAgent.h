@interface PLEnhancedTaskingAgent : PLAgent

+ (void)load;
+ (id)defaults;
+ (id)allowlistForSignpostAggregatedData;
+ (id)entryEventIntervalDefinitionInProcessAnimation;
+ (id)entryEventIntervalDefinitionScrollView;
+ (id)entryEventIntervalDefinitionUINavigationController;
+ (id)entryEventIntervalDefinitions;
+ (id)entryEventNoneDefinitionAppSwitchTrigger;
+ (id)entryEventNoneDefinitions;
+ (void)logAggregatedDataFromSignpostWithStartDate:(id)a0 withEndDate:(id)a1;

- (id)init;
- (void)log;
- (id)aggregatedSignpostDataWithEntryKey:(id)a0 withStartDate:(id)a1 withEndDate:(id)a2 withSignpostName:(id)a3 withProcess:(id)a4 withDataDict:(id)a5;
- (int)getSignpostNameValueGroupTypeFor:(id)a0;
- (void)initOperatorDependancies;
- (void)initTaskOperatorDependancies;
- (void)logAggregatedDataFromSignpostWithPayload:(id)a0 withStartDate:(id)a1 withEndDate:(id)a2;

@end
