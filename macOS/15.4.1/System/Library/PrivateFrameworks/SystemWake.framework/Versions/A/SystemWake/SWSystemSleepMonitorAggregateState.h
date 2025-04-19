@interface SWSystemSleepMonitorAggregateState : NSObject

@property (readonly) unsigned long long sleepMonitorState;
@property (readonly) unsigned long long sleepMonitorStateTimestamp;
@property (readonly) unsigned long long powerManagementPhase;
@property (readonly) unsigned long long powerManagementPhaseTimestamp;
@property (readonly, getter=hasSleepBeenRequested) BOOL sleepRequested;
@property (readonly, getter=isSleepImminent) BOOL sleepImminent;
@property (readonly, getter=isAwakeOrAbortingSleep) BOOL awakeOrAbortingSleep;

- (id)description;
- (id)descriptionForTimestamp:(unsigned long long)a0;
- (id)initWithSleepMonitorState:(unsigned long long)a0 stateTimestamp:(unsigned long long)a1 powerManagementPhase:(unsigned long long)a2 phaseTimestamp:(unsigned long long)a3;

@end
