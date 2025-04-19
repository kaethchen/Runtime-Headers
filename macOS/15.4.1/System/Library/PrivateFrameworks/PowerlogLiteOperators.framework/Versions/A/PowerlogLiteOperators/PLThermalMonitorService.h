@class PLXPCResponderOperatorComposition, PLEntryNotificationOperatorComposition, PLNSNotificationOperatorComposition, NSDate;

@interface PLThermalMonitorService : PLService

@property (retain) PLEntryNotificationOperatorComposition *smcNotification;
@property (retain) PLXPCResponderOperatorComposition *sysdiagnoseResponder;
@property (retain) PLXPCResponderOperatorComposition *powerHUDResponder;
@property (retain) PLNSNotificationOperatorComposition *thermalNotification;
@property (retain) NSDate *lastSMCThermalTrigger;

+ (void)load;

- (id)init;
- (void).cxx_destruct;
- (void)initOperatorDependancies;
- (void)performLogging:(id)a0;
- (id)handlePowerHUDCallback:(id)a0;
- (void)handleSMCCallback:(id)a0;
- (id)handleSysdiagnoseCallback:(id)a0;

@end
