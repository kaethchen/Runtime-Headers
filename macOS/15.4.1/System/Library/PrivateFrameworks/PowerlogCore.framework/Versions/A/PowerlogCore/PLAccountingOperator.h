@class NSSet, NSMutableDictionary;

@interface PLAccountingOperator : PLOperator

@property (retain, nonatomic) NSSet *rules;
@property (retain) NSMutableDictionary *ruleIDToPendingJobs;

+ (void)load;
+ (id)entryAggregateDefinitionEnergy;
+ (id)entryAggregateDefinitionQualificationEnergy;
+ (id)entryAggregateDefinitions;
+ (id)entryEventBackwardDefinitionDistributionEvents;
+ (id)entryEventBackwardDefinitionPowerEvents;
+ (id)entryEventBackwardDefinitionQualificationEvents;
+ (id)entryEventBackwardDefinitions;
+ (id)entryEventForwardDefinitionDistributionEvents;
+ (id)entryEventForwardDefinitionPowerEvents;
+ (id)entryEventForwardDefinitionQualificationEvents;
+ (id)entryEventForwardDefinitions;
+ (id)entryEventIntervalDefinitionDistributionEvents;
+ (id)entryEventIntervalDefinitionEnergyEstimateEvents;
+ (id)entryEventIntervalDefinitionPowerEvents;
+ (id)entryEventIntervalDefinitionQualificationEvents;
+ (id)entryEventIntervalDefinitions;
+ (id)entryEventNoneDefinitionDistributionRules;
+ (id)entryEventNoneDefinitionNodes;
+ (id)entryEventNoneDefinitionQualificationRules;
+ (id)entryEventNoneDefinitions;
+ (id)entryEventPointDefinitionDistributionEvents;
+ (id)entryEventPointDefinitionQualificationEvents;
+ (id)entryEventPointDefinitions;

- (id)init;
- (void).cxx_destruct;
- (void)startAccounting;
- (void)initOperatorDependancies;
- (void)stopAccounting;
- (id)trimConditionsForEntryKey:(id)a0 forTrimDate:(id)a1;

@end
