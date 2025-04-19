@interface PLStorageOperator : PLOperator

+ (id)entryEventForwardDefinitionActivityStates;
+ (id)entryEventForwardDefinitionConfiguration;
+ (id)entryEventForwardDefinitionSchemaChange;
+ (id)entryEventForwardDefinitionSubmissionTag;
+ (id)entryEventForwardDefinitionTaskingMode;
+ (id)entryEventForwardDefinitionTimeOffset;
+ (id)entryEventForwardDefinitions;
+ (id)entryEventIntervalDefinitionCacheSize;
+ (id)entryEventIntervalDefinitions;
+ (id)entryEventNoneDefinitionActivity;
+ (id)entryEventNoneDefinitionAdditionalTablesTurnedOn;
+ (id)entryEventNoneDefinitions;
+ (id)entryEventPointDefinitionArchive;
+ (id)entryEventPointDefinitionCacheFlush;
+ (id)entryEventPointDefinitionOTA;
+ (id)entryEventPointDefinitionPLLog;
+ (id)entryEventPointDefinitionTimeCorrection;
+ (id)entryEventPointDefinitions;
+ (id)eventIntervalCacheSizeWithPayload:(id)a0 withEntryDate:(id)a1;
+ (id)eventPointCacheFlushWithPayload:(id)a0;

- (void)log;
- (void)initOperatorDependancies;
- (void)logEventForwardConfiguration:(id)a0;
- (void)logEventForwardSchemaChange:(id)a0;
- (void)logEventForwardTaskingMode:(id)a0;
- (void)logEventForwardTimeOffset:(id)a0;
- (void)logEventNoneAdditionalTablesTurnedOn:(id)a0;
- (void)logEventPointArchive:(id)a0;
- (void)logEventPointCacheFlush:(id)a0;
- (void)logEventPointOTA:(id)a0;
- (void)logEventPointPLLog:(id)a0;
- (void)logEventPointPreUnlock:(id)a0;
- (void)logEventPointTimeCorrection:(id)a0;
- (id)trimConditionsForEntryKey:(id)a0 forTrimDate:(id)a1;

@end
