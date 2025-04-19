@class BMSource, NSString, BMAppInFocus;

@interface _DKApplicationMonitorBase : _DKMonitor {
    NSString *_lastFocalApplicationForContext;
    BMAppInFocus *_currentAppInFocusEvent;
}

@property (retain) BMSource *appInFocusSource;

+ (id)entitlements;
+ (id)eventStream;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (void)start;
- (void)stop;
- (void)deactivate;
- (void)synchronouslyReflectCurrentValue;
- (id)_eventWithTimestamp:(id)a0 bundleIdentifier:(id)a1 launchReason:(id)a2 shortVersionString:(id)a3 exactBundleVersion:(id)a4;
- (BOOL)lookupApplication:(id)a0 shortVersionString:(id *)a1 exactBundleVersion:(id *)a2;
- (void)obtainCurrentValue;
- (void)platformSpecificStart;
- (void)platformSpecificStop;
- (void)updateBiomeAppInFocusWithStopEventAtTimestamp:(id)a0 reason:(id)a1;
- (void)updateBiomeWithAppInFocusStartEvent:(id)a0;
- (void)updateContextStoreWithFocalApplication:(id)a0 launchReason:(id)a1;

@end
