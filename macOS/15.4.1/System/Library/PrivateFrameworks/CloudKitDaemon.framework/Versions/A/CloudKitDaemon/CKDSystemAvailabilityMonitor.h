@class NSMutableArray;

@interface CKDSystemAvailabilityMonitor : NSObject {
    NSMutableArray *_watcherWrappersInRegistrationOrder;
}

@property unsigned long long availabilityState;
@property unsigned long long simulatedAvailabilityState;

+ (void)initialize;
+ (id)sharedMonitor;

- (void)dealloc;
- (void).cxx_destruct;
- (id)initInternal;
- (void)simulateFirstUnlockForUnitTests;
- (void)_clearVanishedWatchers;
- (void)_logAvailabilityDescription;
- (void)_systemMayNowBeReady;
- (void)assertAvailability:(unsigned long long)a0;
- (id)availabilityDescription;
- (unsigned long long)currentAvailabilityState;
- (BOOL)registerWatcher:(id)a0;
- (void)removeNotifications;
- (void)resetToUnavailableForUnitTests;
- (void)simulateBuddyCompletedForUnitTests;

@end
