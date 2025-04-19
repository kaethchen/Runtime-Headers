@interface AVBIntervalFilter128 : NSObject {
    struct IOAVB_U128 { unsigned long long lo; unsigned long long hi; } _expectedInterval;
    unsigned int _multiIntervalCount;
    unsigned long long _filterCount;
    struct IOAVB_U128 { unsigned long long x0; unsigned long long x1; } *_filteredTimestamps;
    unsigned int _timestampIndex;
    _Atomic unsigned long long _timestampCount[8];
    struct { _Atomic unsigned long long hi; _Atomic unsigned long long lo; } _timestampIntervals[8];
    _Atomic long long _validEntry;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
    unsigned char _filterSize;
    struct IOAVB_U128 { unsigned long long lo; unsigned long long hi; } _filterOffset;
    struct IOAVB_U256 { struct IOAVB_U128 { unsigned long long lo; unsigned long long hi; } lo; struct IOAVB_U128 { unsigned long long lo; unsigned long long hi; } hi; } _filteredSnapshot;
    struct IOAVB_U256 { struct IOAVB_U128 { unsigned long long lo; unsigned long long hi; } lo; struct IOAVB_U128 { unsigned long long lo; unsigned long long hi; } hi; } _filteredOffset;
}

@property (readonly, nonatomic) unsigned long long multiIntervalTimeHi;
@property (readonly, nonatomic) unsigned long long multiIntervalTimeLo;
@property (readonly, nonatomic) unsigned long long filterCount;

- (void)dealloc;
- (id).cxx_construct;
- (void)resetFilter;
- (unsigned long long)filterCount;
- (struct IOAVB_U128 { unsigned long long x0; unsigned long long x1; })_calculateNewTimestamp:(struct IOAVB_U128 { unsigned long long x0; unsigned long long x1; })a0;
- (void)changeToNewFilterSize:(unsigned char)a0;
- (unsigned long long)filterCountForEntry:(long long)a0;
- (struct IOAVB_U128 { unsigned long long x0; unsigned long long x1; })multiIntervalTime;
- (struct IOAVB_U128 { unsigned long long x0; unsigned long long x1; })multiIntervalTimeForEntry:(long long)a0;
- (struct { unsigned long long x0; unsigned long long x1; })addTimestampHi:(unsigned long long)a0 timestampLo:(unsigned long long)a1;
- (struct { unsigned long long x0; unsigned long long x1; })addTimestampHi:(unsigned long long)a0 timestampLo:(unsigned long long)a1 entry:(long long *)a2;
- (struct { unsigned long long x0; unsigned long long x1; })addTimestampHi:(unsigned long long)a0 timestampLo:(unsigned long long)a1 entry:(long long *)a2 intervals:(struct { unsigned long long x0; unsigned long long x1; } *)a3;
- (id)initWithExpectedIntervalHi:(unsigned long long)a0 expectedIntervalLo:(unsigned long long)a1 multiIntervalCount:(unsigned int)a2 filterSize:(unsigned char)a3;
- (unsigned long long)multiIntervalTimeHi;
- (unsigned long long)multiIntervalTimeHiForEntry:(long long)a0;
- (unsigned long long)multiIntervalTimeLo;
- (unsigned long long)multiIntervalTimeLoForEntry:(long long)a0;
- (void)resetFilterWithNewExpectedIntervalHi:(unsigned long long)a0 expectedIntervalLo:(unsigned long long)a1;
- (void)resetFilterWithNewExpectedIntervalHi:(unsigned long long)a0 expectedIntervalLo:(unsigned long long)a1 multiIntervalCount:(unsigned int)a2;

@end
