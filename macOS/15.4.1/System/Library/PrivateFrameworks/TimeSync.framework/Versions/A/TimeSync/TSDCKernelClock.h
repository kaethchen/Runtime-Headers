@class _TSF_TSDKernelClock, TSClock, NSString, _TSF_TSDClockSync, NSObject, TSKernelClock;
@protocol OS_dispatch_queue;

@interface TSDCKernelClock : NSObject <TSDKernelClockClient, TSDClockSyncGeneralSyncClient> {
    struct { unsigned long long timeSyncTime; unsigned long long domainTime; unsigned long long timeSyncTimeInterval; unsigned long long domainTimeInterval; } _timeInfo[8];
    _TSF_TSDKernelClock *_kernelClock;
    _TSF_TSDClockSync *_clockSync;
}

@property (nonatomic) unsigned long long clockIdentifier;
@property (nonatomic) int lockState;
@property (nonatomic) double hostRateRatio;
@property (retain, nonatomic) TSClock *translationClock;
@property (nonatomic) struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } updateLock;
@property (readonly, copy, nonatomic) NSString *clockName;
@property (nonatomic) unsigned int validIndex;
@property (nonatomic) int internalLockState;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *propertyUpdateQueue;
@property (weak, nonatomic) TSKernelClock *client;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)clockWithIdentifier:(unsigned long long)a0;

- (void)dealloc;
- (void).cxx_destruct;
- (void)_getInitialSyncInfo;
- (unsigned long long)convertFromDomainIntervalToMachAbsoluteInterval:(unsigned long long)a0;
- (unsigned long long)convertFromDomainIntervalToTimeSyncTimeInterval:(unsigned long long)a0;
- (BOOL)convertFromDomainTime:(unsigned long long *)a0 toMachAbsoluteTime:(unsigned long long *)a1 withCount:(unsigned int)a2;
- (BOOL)convertFromDomainTime:(unsigned long long *)a0 toTimeSyncTime:(unsigned long long *)a1 withCount:(unsigned int)a2;
- (unsigned long long)convertFromDomainToMachAbsoluteTime:(unsigned long long)a0;
- (unsigned long long)convertFromDomainToTimeSyncTime:(unsigned long long)a0;
- (unsigned long long)convertFromMachAbsoluteIntervalToDomainInterval:(unsigned long long)a0;
- (BOOL)convertFromMachAbsoluteTime:(unsigned long long *)a0 toDomainTime:(unsigned long long *)a1 withCount:(unsigned int)a2;
- (unsigned long long)convertFromMachAbsoluteToDomainTime:(unsigned long long)a0;
- (BOOL)convertFromTimeSyncTime:(unsigned long long *)a0 toDomainTime:(unsigned long long *)a1 withCount:(unsigned int)a2;
- (unsigned long long)convertFromTimeSyncTimeIntervalToDomainInterval:(unsigned long long)a0;
- (unsigned long long)convertFromTimeSyncToDomainTime:(unsigned long long)a0;
- (void)didChangeClockMasterForClock:(id)a0;
- (void)didChangeLockStateTo:(int)a0 forClock:(id)a1;
- (void)didResetClock:(id)a0;
- (unsigned int)getCoreAudioReanchors;
- (BOOL)getMachAbsoluteRateRatioNumerator:(unsigned long long *)a0 denominator:(unsigned long long *)a1 machAnchor:(unsigned long long *)a2 andDomainAnchor:(unsigned long long *)a3 withError:(id *)a4;
- (id)getOsLog;
- (unsigned long long)getSignpostId;
- (BOOL)getTimeSyncTimeRateRatioNumerator:(unsigned long long *)a0 denominator:(unsigned long long *)a1 timeSyncAnchor:(unsigned long long *)a2 andDomainAnchor:(unsigned long long *)a3 withError:(id *)a4;
- (struct os_unfair_lock_s { unsigned int x0; } *)getUpdateLock;
- (id)initWithKernelClock:(id)a0;
- (void)postLockStateChange:(int)a0;
- (void)updateCoreAudioReanchors:(unsigned int)a0;
- (void)updateLockState:(int)a0;
- (void)updateTimeSyncTime:(unsigned long long)a0 timeSyncInterval:(unsigned long long)a1 domainTime:(unsigned long long)a2 domainInterval:(unsigned long long)a3;

@end
