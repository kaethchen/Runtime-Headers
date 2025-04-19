@class NSString;

@interface RTHealthKitManager : RTService <RTDiagnosticProvider>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)stringFromRTHealthKitWorkoutActivityType:(long long)a0;
+ (id)stringFromRTWorkoutEndReminderAlertDismissedReason:(unsigned long long)a0;
+ (id)workoutSessionStateToString:(unsigned long long)a0;

- (void)_fetchEmergencyContactsWithHandler:(id /* block */)a0;
- (void)_setupEvalMode;
- (void)fetchEmergencyContactsWithHandler:(id /* block */)a0;
- (id)initWithContactsManager:(id)a0 defaultsManager:(id)a1 distanceCalculator:(id)a2 platform:(id)a3;
- (void)sendDiagnosticsToURL:(id)a0 options:(id)a1 handler:(id /* block */)a2;

@end
