@class NSProcessInfo, NSArray, NSDictionary, NSString;

@interface _NSSwiftProcessInfo : NSProcessInfo {
    void /* unknown type, empty encoding */ _state;
    void /* unknown type, empty encoding */ _processInfo;
}

@property (class, nonatomic, readonly) NSProcessInfo *processInfo;

@property (nonatomic) BOOL automaticTerminationSupportEnabled;
@property (nonatomic, readonly) long long thermalState;
@property (nonatomic, readonly) BOOL lowPowerModeEnabled;
@property (nonatomic, readonly) struct { long long x0; long long x1; long long x2; } macCatalystVersion;
@property (nonatomic, readonly) NSArray *arguments;
@property (nonatomic, readonly) NSDictionary *environment;
@property (nonatomic, readonly) NSString *globallyUniqueString;
@property (nonatomic, readonly) int processIdentifier;
@property (nonatomic, copy) NSString *processName;
@property (nonatomic, readonly) BOOL macCatalystApp;
@property (nonatomic, readonly) BOOL iOSAppOnMac;
@property (nonatomic, readonly) NSString *userName;
@property (nonatomic, readonly) NSString *fullUserName;
@property (nonatomic, readonly) long long processorCount;
@property (nonatomic, readonly) long long activeProcessorCount;
@property (nonatomic, readonly) unsigned long long physicalMemory;
@property (nonatomic, readonly) double systemUptime;
@property (nonatomic, readonly) NSString *hostName;
@property (nonatomic, readonly) NSString *operatingSystemVersionString;
@property (nonatomic, readonly) struct { long long x0; long long x1; long long x2; } operatingSystemVersion;

+ (void)cancelPowerStateNotifyNotification;
+ (void)cancelThermalStateNotifyNotification;
+ (void)updatePowerState:(unsigned long long)a0;
+ (void)updateThermalState:(unsigned long long)a0;

- (id)init;
- (void).cxx_destruct;
- (void)_setShouldRelaunchDueToAutomaticTerminationStateChangedHandler:(id /* block */)a0;
- (void)_enableAutomaticTerminationSupport;
- (void)_exitIfSuddenTerminationEnabledWithStatus:(int)a0;
- (void)_exitWhenSuddenTerminationEnabledWithStatus:(int)a0;
- (BOOL)_isAutoQuittable;
- (void)_reactivateActivity:(id)a0;
- (BOOL)_shouldDisableRelaunchOnLoginDueToAutomaticTermination;
- (BOOL)_supportsAutomaticTermination;
- (id)beginActivityWithOptions:(unsigned long long)a0 reason:(id)a1;
- (void)disableAutomaticTermination:(id)a0;
- (void)disableSuddenTermination;
- (void)enableAutomaticTermination:(id)a0;
- (void)enableSuddenTermination;
- (void)endActivity:(id)a0;
- (BOOL)isLowPowerModeEnabled;
- (BOOL)isMacCatalystApp;
- (BOOL)isOperatingSystemAtLeastVersion:(struct { long long x0; long long x1; long long x2; })a0;
- (BOOL)isiOSAppOnMac;
- (BOOL)macCatalystVersionIsAtLeastVersion:(struct { long long x0; long long x1; long long x2; })a0;
- (void)performActivityWithOptions:(unsigned long long)a0 reason:(id)a1 block:(id /* block */)a2;
- (void)performExpiringActivityWithReason:(id)a0 usingBlock:(id /* block */)a1;

@end
