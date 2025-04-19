@class PLDuetServiceDAS, PLDuetServiceImpl, PLDuetServiceLpmSource;

@interface PLDuetService : PLService

@property (readonly) PLDuetServiceLpmSource *lpmSource;
@property (readonly) PLDuetServiceDAS *dasEvent;
@property (readonly) PLDuetServiceImpl *impl;

+ (void)load;
+ (id)entryAggregateDefinitions;
+ (id)entryEventBackwardDefinitions;
+ (id)entryEventForwardDefinitions;
+ (id)entryEventIntervalDefinitions;
+ (id)entryEventNoneDefinitions;
+ (id)aggregateNameDuetEnergyAccumulator;
+ (id)entryEventForwardDefinitionBatterySaverMode;
+ (id)eventIntervalDefinitionComplicationEvents;
+ (id)eventIntervalDefinitionDuetEvents;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (void)initOperatorDependancies;
- (id)trimConditionsForEntryKey:(id)a0 forTrimDate:(id)a1;
- (void)handleBatterySaverModeToken:(int)a0 withNotification:(id)a1;
- (void)logEventForwardBatterySaverModeWithState:(BOOL)a0 fromNotification:(id)a1;
- (long long)registrationModeStringToEnum:(id)a0;
- (void)setupBatterySaverModeForNotification:(id)a0;

@end
