@interface CSTUPhoneCallStateMonitor : CSPhoneCallStateMonitor

+ (id)sharedInstance;

- (id)init;
- (void)_stopMonitoring;
- (void)_startMonitoringWithQueue:(id)a0;
- (BOOL)firstPartyCall;
- (unsigned long long)phoneCallState;

@end
