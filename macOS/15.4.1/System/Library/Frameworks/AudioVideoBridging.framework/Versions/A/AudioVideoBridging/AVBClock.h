@class NSString, NSPointerArray, AVBIOKClockSync;

@interface AVBClock : NSObject {
    struct { unsigned long long timeSyncTime; unsigned long long domainTime; unsigned long long timeSyncTimeInterval; unsigned long long domainTimeInterval; } _timeInfo[8];
    _Atomic long long _validIndex;
    NSPointerArray *_clients;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _clientsLock;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _updateLock;
    int _internalLockState;
    AVBIOKClockSync *_clockSync;
}

@property (nonatomic) unsigned long long clockIdentifier;
@property (nonatomic) int lockState;
@property (readonly, copy, nonatomic) NSString *clockName;

+ (id)clockWithIdentifier:(unsigned long long)a0;
+ (id)diagnosticDescriptionForInfo:(id)a0 withIndent:(id)a1;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (void)addClient:(id)a0;
- (void)removeClient:(id)a0;
- (unsigned long long)convertFromDomainIntervalToTimeSyncTimeInterval:(unsigned long long)a0;
- (BOOL)convertFromDomainTime:(unsigned long long *)a0 toTimeSyncTime:(unsigned long long *)a1 withCount:(unsigned int)a2;
- (unsigned long long)convertFromDomainToTimeSyncTime:(unsigned long long)a0;
- (BOOL)convertFromTimeSyncTime:(unsigned long long *)a0 toDomainTime:(unsigned long long *)a1 withCount:(unsigned int)a2;
- (unsigned long long)convertFromTimeSyncTimeIntervalToDomainInterval:(unsigned long long)a0;
- (unsigned long long)convertFromTimeSyncToDomainTime:(unsigned long long)a0;
- (BOOL)getTimeSyncTimeRateRatioNumerator:(unsigned long long *)a0 denominator:(unsigned long long *)a1 timeSyncAnchor:(unsigned long long *)a2 andDomainAnchor:(unsigned long long *)a3 withError:(id *)a4;
- (id)initWithClockIdentifier:(unsigned long long)a0;
- (void)postLockStateChange:(int)a0;
- (void)updateLockState:(int)a0;
- (void)updateTimeSyncTime:(unsigned long long)a0 timeSyncInterval:(unsigned long long)a1 domainTime:(unsigned long long)a2 domainInterval:(unsigned long long)a3;
- (void)changedClockMaster;
- (void)resetClock;

@end
