@class BMSource, NSString;

@interface _DKApplicationMonitor : _DKApplicationMonitorBase {
    void *_launchServicesNotificationID;
    BMSource *_appInFocusSource;
    NSString *_lastFocalApplication;
}

+ (id)entitlements;

- (void).cxx_destruct;
- (void)launchServicesNotification:(int)a0 info:(id)a1 atTime:(double)a2 affectedASNRef:(struct __LSASN { } *)a3 session:(int)a4;
- (void)obtainCurrentValue;
- (void)platformSpecificStart;
- (void)platformSpecificStop;

@end
