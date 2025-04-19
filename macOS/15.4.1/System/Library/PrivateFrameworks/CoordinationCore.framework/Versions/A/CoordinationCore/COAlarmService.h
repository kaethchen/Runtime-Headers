@class NSString, COSignalsClientObserverSet;

@interface COAlarmService : COService <COAlarmManagerServiceInterface, COMeshAlarmAddOnDelegate>

@property (readonly, nonatomic) COSignalsClientObserverSet *observers;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)_isAllowedClient:(id)a0;
+ (id)serviceWithDelegate:(id)a0;

- (void).cxx_destruct;
- (void)dismissAlarmWithIdentifier:(id)a0 asAccessory:(id)a1 asInstance:(id)a2 withCallback:(id /* block */)a3;
- (void)addAlarm:(id)a0 asAccessory:(id)a1 asInstance:(id)a2 withCallback:(id /* block */)a3;
- (void)addObserverForNotificationName:(id)a0 asAccessory:(id)a1 asInstance:(id)a2 constraints:(id)a3 withCallback:(id /* block */)a4;
- (void)alarmsAsAccessory:(id)a0 asInstance:(id)a1 forAccessories:(id)a2 callback:(id /* block */)a3;
- (void)alarmsAsAccessory:(id)a0 asInstance:(id)a1 withCallback:(id /* block */)a2;
- (void)canDispatchAsAccessory:(id)a0 asInstance:(id)a1 reply:(id /* block */)a2;
- (void)removeAlarm:(id)a0 asAccessory:(id)a1 asInstance:(id)a2 withCallback:(id /* block */)a3;
- (void)removeObserverForNotificationName:(id)a0 asAccessory:(id)a1 asInstance:(id)a2 withCallback:(id /* block */)a3;
- (void)snoozeAlarmWithIdentifier:(id)a0 asAccessory:(id)a1 asInstance:(id)a2 withCallback:(id /* block */)a3;
- (void)updateAlarm:(id)a0 asAccessory:(id)a1 asInstance:(id)a2 withCallback:(id /* block */)a3;
- (void)_addOnAdded:(id)a0;
- (void)_addOnRemoved:(id)a0;
- (BOOL)_applicableToCluster:(id)a0;
- (void)_clientLost:(id)a0;
- (void)_completeDispatchabilityStallActivity:(id)a0;
- (void)_configureServiceInterfacesOnConnection:(id)a0;
- (void)_didResetAlarmAddOn:(id)a0;
- (void)_didStopCanDispatchUpdate:(id)a0;
- (id)_newClientForConnection:(id)a0;
- (void)_postCanDispatchChanged:(BOOL)a0 forAccessory:(id)a1 toObserver:(id)a2;
- (void)_postCanDispatchChangedAddOn:(id)a0;
- (void)_postNotificationName:(id)a0 connection:(id)a1 userInfo:(id)a2;
- (void)_postNotificationName:(id)a0 forAccessory:(id)a1 toAddOn:(id)a2;
- (void)_postNotificationName:(id)a0 forAlarms:(id)a1 toAddOn:(id)a2 requiresUserInfo:(BOOL)a3;
- (void)alarmAddOn:(id)a0 didAddAlarms:(id)a1;
- (void)alarmAddOn:(id)a0 didChangeAlarms:(id)a1;
- (void)alarmAddOn:(id)a0 didChangeFiringAlarms:(id)a1;
- (void)alarmAddOn:(id)a0 didDismissAlarms:(id)a1;
- (void)alarmAddOn:(id)a0 didFireAlarms:(id)a1;
- (void)alarmAddOn:(id)a0 didRemoveAlarms:(id)a1;
- (void)alarmAddOn:(id)a0 didUpdateAlarms:(id)a1;
- (void)alarmAddOn:(id)a0 resetAccesory:(id)a1;
- (void)didChangeCompositionForAlarmAddOn:(id)a0;
- (void)didResetAlarmAddOn:(id)a0;
- (id)initWithListenerProvider:(id)a0 addOnProvider:(id)a1 delegate:(id)a2;

@end
