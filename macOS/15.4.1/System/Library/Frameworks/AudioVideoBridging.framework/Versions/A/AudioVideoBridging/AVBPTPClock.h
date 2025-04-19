@class AVBClock, AVBClockManager;

@interface AVBPTPClock : AVBClock {
    struct { BOOL syncInfoValid; unsigned char syncFlags; unsigned long long timeSyncTime; struct IOAVB_U128 { unsigned long long lo; unsigned long long hi; } domainTime; unsigned long long cumulativeScaledRate; unsigned long long inverseCumulativeScaledRate; unsigned long long grandmasterID; unsigned short localPortNumber; } _timeInfo[8];
    _Atomic long long _validIndex;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _updateLock;
    int _internalLockState;
    AVBClock *_translationClock;
    AVBClockManager *_clockManager;
    BOOL _addedTranslationClock;
}

- (void)dealloc;
- (void).cxx_destruct;
- (id).cxx_construct;
- (unsigned long long)convertFromDomainTimeToTimeSyncTime:(unsigned long long)a0 grandmasterUsed:(unsigned long long *)a1 portNumber:(unsigned short *)a2;
- (unsigned long long)convertFromTimeSyncTimeToDomainTime:(unsigned long long)a0 grandmasterUsed:(unsigned long long *)a1 portNumber:(unsigned short *)a2;
- (BOOL)convertFrom32BitASTime:(unsigned int *)a0 toTimeSyncTime:(unsigned long long *)a1 withCount:(unsigned int)a2;
- (unsigned long long)convertFrom32BitASToTimeSyncTime:(unsigned int)a0;
- (unsigned long long)convertFromDomainIntervalToTimeSyncTimeInterval:(unsigned long long)a0;
- (BOOL)convertFromDomainTime:(unsigned long long *)a0 toTimeSyncTime:(unsigned long long *)a1 withCount:(unsigned int)a2;
- (unsigned long long)convertFromDomainToTimeSyncTime:(unsigned long long)a0;
- (BOOL)convertFromTimeSyncTime:(unsigned long long *)a0 toDomainTime:(unsigned long long *)a1 withCount:(unsigned int)a2;
- (unsigned long long)convertFromTimeSyncTimeIntervalToDomainInterval:(unsigned long long)a0;
- (unsigned long long)convertFromTimeSyncToDomainTime:(unsigned long long)a0;
- (BOOL)getTimeSyncTimeRateRatioNumerator:(unsigned long long *)a0 denominator:(unsigned long long *)a1 timeSyncAnchor:(unsigned long long *)a2 andDomainAnchor:(unsigned long long *)a3 forGrandmasterIdentity:(unsigned long long *)a4 portNumber:(unsigned short *)a5 withError:(id *)a6;
- (BOOL)getTimeSyncTimeRateRatioNumerator:(unsigned long long *)a0 denominator:(unsigned long long *)a1 timeSyncAnchor:(unsigned long long *)a2 andDomainAnchor:(unsigned long long *)a3 withError:(id *)a4;
- (id)initWithClockIdentifier:(unsigned long long)a0;
- (void)updateLockState:(int)a0;
- (void)updateWithSyncInfoValid:(BOOL)a0 syncFlags:(unsigned char)a1 timeSyncTime:(unsigned long long)a2 domainTimeHi:(unsigned long long)a3 domainTimeLo:(unsigned long long)a4 cumulativeScaledRate:(unsigned long long)a5 inverseCumulativeScaledRate:(unsigned long long)a6 grandmasterID:(unsigned long long)a7 localPortNumber:(unsigned short)a8;
- (unsigned long long)convertFrom128BitPTPTimeToTimeSyncTime:(struct { unsigned long long x0; unsigned long long x1; })a0 grandmasterUsed:(unsigned long long *)a1 portNumber:(unsigned short *)a2;
- (struct { unsigned long long x0; unsigned long long x1; })convertFromTimeSyncTimeTo128BitPTPTime:(unsigned long long)a0 grandmasterUsed:(unsigned long long *)a1 portNumber:(unsigned short *)a2;
- (struct { unsigned long long x0; unsigned long long x1; })convertFromTimeSyncTimeTo128BitPTPTime:(unsigned long long)a0 grandmasterUsed:(unsigned long long *)a1 portNumber:(unsigned short *)a2 flags:(unsigned long long *)a3;
- (id)ptpTimeFromTimeSyncTime:(unsigned long long)a0;
- (unsigned long long)timeSyncTimeFromPTPTime:(id)a0;

@end
