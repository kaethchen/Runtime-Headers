@class NSString;

@interface GEORingThrottler : NSObject <GEOThrottler> {
    struct vector<(anonymous namespace)::Timestamp, std::allocator<(anonymous namespace)::Timestamp>> { struct Timestamp *__begin_; struct Timestamp *__end_; struct __compressed_pair<(anonymous namespace)::Timestamp *, std::allocator<(anonymous namespace)::Timestamp>> { struct Timestamp *__value_; } __end_cap_; } _lastRequestTimes;
    unsigned int _currentIndex;
}

@property (readonly, nonatomic) double timeWindow;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id).cxx_construct;
- (BOOL)isExpired;
- (BOOL)addRequestTimestamp;
- (id)initWithCount:(unsigned long long)a0 interval:(double)a1;
- (unsigned int)maxReqCount;
- (unsigned long long)remainingEntries;
- (double)timeUntilReset;
- (id)userInfoForError;

@end
