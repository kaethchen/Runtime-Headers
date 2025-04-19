@class _TSF_TSDKernelClock, NSMutableArray, _TSF_IODConnection;

@interface _TSF_TSDClockManager : NSObject {
    _TSF_IODConnection *_connection;
    NSMutableArray *_clockPersonalities;
    struct mach_timebase_info { unsigned int numer; unsigned int denom; } _timebaseInfo;
    int _pid;
}

@property (readonly, nonatomic) unsigned long long translationClockIdentifier;
@property (readonly, nonatomic) BOOL timeSyncTimeIsMachAbsoluteTime;
@property (readonly, nonatomic) _TSF_TSDKernelClock *translationClock;
@property (readonly, nonatomic) unsigned long long timeSyncTimeClockIdentifier;

+ (void)initialize;
+ (id)diagnosticInfo;
+ (id)sharedClockManager;
+ (id)clockManager;
+ (id)daemonClassNameForClockIdentifier:(unsigned long long)a0;
+ (id)defaultClockPersonalities;
+ (id)diagnosticInfoForClockIdentifier:(unsigned long long)a0 daemonClassName:(id *)a1;
+ (void)notifyWhenClockManagerIsAvailable:(id /* block */)a0;
+ (void)notifyWhenClockManagerIsUnavailable:(id /* block */)a0;
+ (id)timeSyncAudioClockDeviceUIDForClockIdentifier:(unsigned long long)a0;

- (id)init;
- (void).cxx_destruct;
- (id)initWithPid:(int)a0;
- (id)clockWithClockIdentifier:(unsigned long long)a0;
- (unsigned long long)machAbsoluteTicksToNanoseconds:(unsigned long long)a0;
- (BOOL)addTSNCaptureServicesWithError:(id *)a0;
- (unsigned long long)machAbsoluteNanosecondsToTicks:(unsigned long long)a0;
- (BOOL)removeMappingFromClockIDToCoreAudioClockDomainForClockID:(unsigned long long)a0 error:(id *)a1;
- (BOOL)addMappingFromClockID:(unsigned long long)a0 toCoreAudioClockDomain:(unsigned int *)a1 error:(id *)a2;
- (unsigned long long)addUserFilteredClockWithMachInterval:(unsigned long long)a0 domainInterval:(unsigned long long)a1 usingFilterShift:(unsigned char)a2 isAdaptive:(BOOL)a3 error:(id *)a4;
- (BOOL)addgPTPServicesWithError:(id *)a0;
- (id)availableClockIdentifiers;
- (id)classNameForClockService:(id)a0;
- (BOOL)getTimeSyncTimeClockID:(unsigned long long *)a0 error:(id *)a1;
- (BOOL)getTimeSyncTimeIsMachAbsolute:(BOOL *)a0 error:(id *)a1;
- (BOOL)nextAvailableDynamicClockID:(unsigned long long *)a0 error:(id *)a1;
- (BOOL)releaseDynamicClockID:(unsigned long long)a0 error:(id *)a1;
- (BOOL)removeTSNCaptureServicesWithError:(id *)a0;
- (BOOL)removeUserFilteredClockWithIdentifier:(unsigned long long)a0 error:(id *)a1;
- (BOOL)removegPTPServicesWithError:(id *)a0;

@end
