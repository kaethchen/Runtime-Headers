@class NSString, NSMutableArray, NSObject;
@protocol OS_dispatch_queue;

@interface PFTemporaryBuffer : NSObject {
    unsigned long long _roundTo;
    float _maximumWaste;
    unsigned long long _maximumRetiredCount;
    NSObject<OS_dispatch_queue> *_recentQueue;
    NSMutableArray *_recentList;
    _Atomic int _currentPartition;
    NSObject<OS_dispatch_queue> *_retiredQueue[4];
    NSMutableArray *_retiredList[4];
    _Atomic long long _recentBytes;
    _Atomic int _recentCount;
    _Atomic long long _recentHitBytes;
    _Atomic int _recentHitCount;
    _Atomic long long _retiredBytes;
    _Atomic int _retiredCount;
    _Atomic long long _retiredHitBytes;
    _Atomic int _retiredHitCount;
    _Atomic long long _newTemporaryBuffersBytes;
    _Atomic int _newTemporaryBuffersCount;
    _Atomic long long _purgedBytes;
    _Atomic int _purgedCount;
    _Atomic long long _recycledBytes;
    _Atomic int _recycledCount;
    _Atomic long long _recycledPurgableBytes;
    _Atomic int _recycledPurgableCount;
    _Atomic long long _recycledPurgedBytes;
    _Atomic int _recycledPurgedCount;
    BOOL _retireRecentScheduled;
    BOOL _retiredMaximumScheduled[4];
}

@property (readonly) NSString *name;
@property (readonly) unsigned long long maximumSize;

+ (void)flush;
+ (id)newBuffer:(unsigned long long)a0;
+ (id)newRecycledPurgeableDataWithMinimumSize:(unsigned long long)a0;
+ (id)obtainBuffer:(unsigned long long)a0;
+ (void)recylePurgeableData:(id)a0;
+ (id)temporaryBufferFactoryForSize:(unsigned long long)a0;
+ (id)temporaryBuffers;
+ (void)withTemporaryBufferOfSize:(unsigned long long)a0 block:(id /* block */)a1;

- (void)dealloc;
- (void).cxx_destruct;
- (id)statistics;
- (void)flush;
- (void)_scheduleEnforceRetiredMaximum:(int)a0;
- (void)_enforceRetiredMaximum:(int)a0;
- (void)_pruneRetired:(int)a0;
- (void)_retireRecent;
- (void)_scheduleRetireRecent;
- (id)initWithName:(id)a0 maximumSize:(unsigned long long)a1 maximumRetiredCount:(unsigned long long)a2 roundTo:(unsigned long long)a3 maximumWaste:(float)a4;
- (id)newBufferWithSize:(unsigned long long)a0;
- (id)newFindRecycledDataWithMinimumSize:(unsigned long long)a0;
- (void)recylePurgeableData:(id)a0;

@end
