@class NSObject, PPCalendarInternPool, PPEventStorage, _PASLock;
@protocol OS_dispatch_queue, OS_dispatch_source;

@interface PPEventCache : NSObject {
    PPEventStorage *_storage;
    _PASLock *_data;
    PPCalendarInternPool *_calendarInternPool;
    struct atomic_flag { _Atomic BOOL _Value; } _cacheBackingFileUpdateScheduled;
    NSObject<OS_dispatch_queue> *_queue;
    NSObject<OS_dispatch_source> *_memoryPressureSource;
    unsigned long long _memoryPressureStatus;
}

- (void).cxx_destruct;
- (void)removeAllObjects;
- (id)objectForRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0;
- (id)cachedEventHighlightForEvent:(id)a0 rankingOptions:(int)a1 trialWrapper:(id)a2;
- (void)evictAllEventsNotInRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0;
- (id)initWithEventStorage:(id)a0;
- (id)refreshCacheWithChanges:(id)a0;
- (void)setEventHighlight:(id)a0;
- (void)setExtraSecondsToBackfill:(unsigned long long)a0;

@end
