@class PLEntryNotificationOperatorComposition;

@interface PLButtonAgent : PLAgent

@property (retain) PLEntryNotificationOperatorComposition *batteryLevelChanged;

+ (void)load;
+ (id)defaults;
+ (id)entryAggregateDefinitions;
+ (id)entryEventBackwardDefinitions;
+ (id)entryEventForwardDefinitions;
+ (id)entryEventIntervalDefinitions;
+ (id)entryEventNoneDefinitions;
+ (id)entryEventPointDefinitions;
+ (id)entryEventBackwardDefinitionTrackpadPowerState;
+ (id)entryEventForwardDefinitionActionButtonInteraction;
+ (id)entryEventForwardDefinitionActionButtonSelection;

- (id)init;
- (void).cxx_destruct;
- (void)log;
- (void)initOperatorDependancies;
- (unsigned int)getValue:(unsigned int)a0 inHIDReportBuffer:(char *)a1 withBufferSize:(long long)a2;
- (void)logEventBackwardTrackPadPower;

@end
