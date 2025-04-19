@class TSClock, _TSF_TSDClockManager, NSPointerArray, TSDCTranslationClock;

@interface TSClockManager : NSObject {
    _TSF_TSDClockManager *_impl;
    TSDCTranslationClock *_translationClockDC;
    struct mach_timebase_info { unsigned int numer; unsigned int denom; } _timebaseInfo;
    NSPointerArray *_clients;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _clientLock;
}

@property (readonly, nonatomic) unsigned long long translationClockIdentifier;
@property (readonly, nonatomic) BOOL timeSyncTimeIsMachAbsoluteTime;
@property (readonly, nonatomic) TSClock *timeSyncClock;
@property (readonly, nonatomic) TSClock *translationClock;
@property (readonly, nonatomic) unsigned long long timeSyncTimeClockIdentifier;

+ (void)initialize;
+ (id)diagnosticInfo;
+ (id)sharedClockManager;
+ (id)clockManager;
+ (id)diagnosticDescriptionForClockIdentifier:(unsigned long long)a0 withIndent:(id)a1;
+ (id)diagnosticDescriptionForInfo:(id)a0 withIndent:(id)a1;
+ (id)diagnosticInfoForClockIdentifier:(unsigned long long)a0;
+ (id)frameworkClassNameForDaemonClassName:(id)a0;
+ (id)keyPathsForValuesAffectingTimeSyncTimeClockIdentifier;
+ (id)keyPathsForValuesAffectingTimeSyncTimeIsMachAbsoluteTime;
+ (id)keyPathsForValuesAffectingTranslationClockIdentifier;
+ (void)notifyWhenClockManagerIsAvailable:(id /* block */)a0;
+ (void)notifyWhenClockManagerIsUnavailable:(id /* block */)a0;
+ (id)sharedClockManagerSyncWithTimeout:(unsigned long long)a0;
+ (void)swiftClockManagerIsAvailable:(id /* block */)a0;
+ (id)timeSyncAudioClockDeviceUIDForClockIdentifier:(unsigned long long)a0;

- (id)init;
- (void).cxx_destruct;
- (void)addClient:(id)a0;
- (void)removeClient:(id)a0;
- (id)clockWithClockIdentifier:(unsigned long long)a0;
- (unsigned long long)machAbsoluteTicksToNanoseconds:(unsigned long long)a0;
- (BOOL)addTSNCaptureServicesWithError:(id *)a0;
- (unsigned long long)machAbsoluteNanosecondsToTicks:(unsigned long long)a0;
- (BOOL)removeMappingFromClockIDToCoreAudioClockDomainForClockID:(unsigned long long)a0 error:(id *)a1;
- (BOOL)addMappingFromClockID:(unsigned long long)a0 toCoreAudioClockDomain:(unsigned int *)a1 error:(id *)a2;
- (unsigned long long)addUserFilteredClockWithMachInterval:(unsigned long long)a0 domainInterval:(unsigned long long)a1 usingFilterShift:(unsigned char)a2 isAdaptive:(BOOL)a3 error:(id *)a4;
- (BOOL)addgPTPServicesWithError:(id *)a0;
- (id)availableClockIdentifiers;
- (BOOL)getConnectionForClockWithClockIdentifier:(unsigned long long)a0 daemonClockClassName:(id *)a1 endpoint:(id *)a2;
- (BOOL)getConnectionForPortWithClockIdentifier:(unsigned long long)a0 portNumber:(unsigned short)a1 daemonPortClassName:(id *)a2 endpoint:(id *)a3;
- (void)interruptedClockManager;
- (unsigned long long)machAbsoluteToNanoseconds:(unsigned long long)a0;
- (unsigned long long)nanosecondsToMachAbsolute:(unsigned long long)a0;
- (BOOL)nextAvailableDynamicClockID:(unsigned long long *)a0 error:(id *)a1;
- (BOOL)releaseDynamicClockID:(unsigned long long)a0 error:(id *)a1;
- (BOOL)removeTSNCaptureServicesWithError:(id *)a0;
- (BOOL)removeUserFilteredClockWithIdentifier:(unsigned long long)a0 error:(id *)a1;
- (BOOL)removegPTPServicesWithError:(id *)a0;
- (unsigned long long)timeSyncTimeClockIdentifier;
- (BOOL)timeSyncTimeIsMachAbsoluteTime;
- (unsigned long long)translationClockIdentifier;

@end
