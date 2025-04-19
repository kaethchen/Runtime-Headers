@interface AVBIntervalFilter : NSObject {
    unsigned long long _expectedInterval;
    unsigned int _multiIntervalCount;
    unsigned long long _filterCount;
    unsigned long long *_filteredTimestamps;
    unsigned int _timestampIndex;
    _Atomic unsigned long long _timestampCount[8];
    _Atomic unsigned long long _timestampIntervals[8];
    _Atomic long long _validEntry;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
    unsigned char _filterSize;
    unsigned long long _filterOffset;
    struct IOAVB_U128 { unsigned long long lo; unsigned long long hi; } _filteredSnapshot;
    struct IOAVB_U128 { unsigned long long lo; unsigned long long hi; } _filteredOffset;
}

@property (readonly, nonatomic) unsigned long long multiIntervalTime;
@property (readonly, nonatomic) unsigned long long filterCount;

- (void)dealloc;
- (id).cxx_construct;
- (unsigned long long)addTimestamp:(unsigned long long)a0;
- (void)resetFilter;
- (unsigned long long)filterCount;
- (unsigned long long)_calculateNewTimestamp:(unsigned long long)a0;
- (unsigned long long)addTimestamp:(unsigned long long)a0 entry:(long long *)a1;
- (void)changeToNewFilterSize:(unsigned char)a0;
- (unsigned long long)filterCountForEntry:(long long)a0;
- (id)initWithExpectedInterval:(unsigned long long)a0 multiIntervalCount:(unsigned int)a1 filterSize:(unsigned char)a2;
- (unsigned long long)multiIntervalTime;
- (unsigned long long)multiIntervalTimeForEntry:(long long)a0;
- (void)resetFilterWithNewExpectedInterval:(unsigned long long)a0;
- (void)resetFilterWithNewExpectedInterval:(unsigned long long)a0 multiIntervalCount:(unsigned int)a1;

@end
