@class NSString, NSImage, NSURL, NSDate, NSLock;

@interface NSRunningApplication : NSObject {
    void *_asn;
    void **_helpers;
    id _obsInfo;
    NSLock *_lock;
    NSString *_bundleID;
    NSString *_localizedName;
    NSURL *_bundleURL;
    NSURL *_executableURL;
    NSDate *_launchDate;
    NSImage *_icon;
    int _pid;
    unsigned int _lastSeed;
    unsigned int _activeSeed;
    unsigned int _staleSeed;
    unsigned long long _obsMask;
    struct { unsigned char fetchedDynamic : 1; unsigned char deadToUs : 1; unsigned char terminated : 1; unsigned char finishedLaunching : 1; unsigned char hidden : 1; unsigned char active : 1; unsigned char ownsMenuBar : 1; unsigned char arch : 3; unsigned char activationPolicy : 3; unsigned int reserved1 : 19; } _aflags;
}

@property (class, readonly) NSRunningApplication *currentApplication;

@property (readonly, getter=isTerminated) BOOL terminated;
@property (readonly, getter=isFinishedLaunching) BOOL finishedLaunching;
@property (readonly, getter=isHidden) BOOL hidden;
@property (readonly, getter=isActive) BOOL active;
@property (readonly) BOOL ownsMenuBar;
@property (readonly) long long activationPolicy;
@property (readonly, copy) NSString *localizedName;
@property (readonly, copy) NSString *bundleIdentifier;
@property (readonly, copy) NSURL *bundleURL;
@property (readonly, copy) NSURL *executableURL;
@property (readonly) int processIdentifier;
@property (readonly, copy) NSDate *launchDate;
@property (readonly) NSImage *icon;
@property (readonly) long long executableArchitecture;

+ (void)initialize;
+ (id)_TALTerminatedApplications;
+ (id)_allApplications;
+ (id)_allRunningApplications;
+ (void)_dumpRunningApplicationObservationInfo;
+ (id)_frontmostApplicationExcludingSelf;
+ (id)_transformASNArrayToAppArrayWithRelease:(struct __CFArray { } *)a0;
+ (void)_yieldToApplication:(id)a0;
+ (id)runningApplicationWithAuditToken:(struct { unsigned int x0[8]; })a0;
+ (id)runningApplicationWithProcessIdentifier:(int)a0;
+ (id)runningApplicationsWithBundleIdentifier:(id)a0;
+ (void)terminateAutomaticallyTerminableApplications;

- (void)dealloc;
- (id)description;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void)setObservationInfo:(void *)a0;
- (void *)observationInfo;
- (void)addObserver:(id)a0 forKeyPath:(id)a1 options:(unsigned long long)a2 context:(void *)a3;
- (void)removeObserver:(id)a0 forKeyPath:(id)a1;
- (BOOL)terminate;
- (BOOL)_isUnresponsive;
- (void)_applyInformationFromLSDictionary:(id)a0 includeDynamicProperties:(BOOL)a1;
- (void)_applyPropertyChanges:(unsigned long long)a0 fromDictionary:(struct __CFDictionary { } *)a1;
- (void)_changeObservingNotificationMask:(unsigned long long)a0 to:(BOOL)a1;
- (void)_checkForUnecessaryLSNotifications;
- (void)_fetchDynamicProperties;
- (void)_fetchDynamicPropertiesIfNecessary;
- (void)_fetchDynamicPropertiesIfNecessaryOrAppSeedIsOutOfDate;
- (void)_fetchStaticInformationWithAtLeastKey:(struct __CFString { } *)a0;
- (id)_fetchValueForKey:(void *)a0;
- (BOOL)_getProcessSerialNumber:(struct ProcessSerialNumber { unsigned int x0; unsigned int x1; } *)a0;
- (BOOL)_hasASN:(struct __LSASN { } *)a0;
- (id)_initDeadWithLSDictionary:(struct __CFDictionary { } *)a0 forASN:(struct __LSASN { } *)a1;
- (BOOL)_isAppPropertyUpdatedByLSNotifications:(int)a0;
- (BOOL)_isLSStopped;
- (BOOL)_isProxiedByTalagent;
- (void)_observeChangeInKey:(int)a0 withDataRef:(void *)a1;
- (BOOL)_performWithPSN:(id /* block */)a0;
- (void)_postWillOrDidChangeNotificationsForKeyIndex:(int)a0 isWill:(BOOL)a1;
- (void)_preserveStaleDynamicPropertiesForRemainderOfRunLoop;
- (BOOL)_preservingStaleProperties;
- (BOOL)_quittingWillBeNoisyOrLoseData;
- (id)_reasonThatQuittingWillBeNoisyOrLoseData;
- (void)_updateActiveAndMenuBarOwnerProperties;
- (void)_updateObservationMask;
- (void)_updateOrStaleProperty:(int)a0;
- (BOOL)activateFromApplication:(id)a0;
- (BOOL)activateFromApplication:(id)a0 options:(unsigned long long)a1;
- (BOOL)activateWithOptions:(unsigned long long)a0;
- (struct __LSASN { } *)applicationSerialNumber;
- (BOOL)applyPendingPropertyChanges;
- (BOOL)forceTerminate;
- (BOOL)hide;
- (id)initWithApplicationSerialNumber:(struct __LSASN { } *)a0;
- (BOOL)unhide;

@end
