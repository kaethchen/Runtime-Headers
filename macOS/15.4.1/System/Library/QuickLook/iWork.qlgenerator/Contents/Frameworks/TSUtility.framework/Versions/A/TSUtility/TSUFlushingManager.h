@class TSURetainedPointerKeyDictionary, NSThread, NSCondition, TSUPointerKeyDictionary;
@protocol TSUiOSMemoryWarningFlushable;

@interface TSUFlushingManager : NSObject {
    TSURetainedPointerKeyDictionary *_objects;
    void *_sortedObjects;
    void *_sortedNewObjects;
    TSUPointerKeyDictionary *_inactiveObjects;
    unsigned int _clock;
    BOOL _alwaysFlushing;
    BOOL _stopFlushing;
    BOOL _stopFlushingWhenQueueEmpty;
    BOOL _isFlushing;
    id<TSUiOSMemoryWarningFlushable> _flushingObject;
    NSCondition *_cond;
    NSCondition *_isFlushingCond;
    NSThread *_bgThread;
}

+ (id)allocWithZone:(struct _NSZone { } *)a0;
+ (id)sharedManager;
+ (id)_singletonAlloc;

- (oneway void)release;
- (void)dealloc;
- (id)autorelease;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)init;
- (id)retain;
- (unsigned long long)retainCount;
- (void)addObject:(id)a0;
- (void)removeObject:(id)a0;
- (void)didEnterBackground;
- (void)willEnterForeground;
- (void)_bgThreadActive;
- (void)_bgTaskFinished;
- (void)doneWithObject:(id)a0;
- (void)_backgroundThread:(id)a0;
- (void)_bgTaskStarted;
- (void)_bgThreadInactive;
- (void)_didUseObject:(id)a0;
- (void)_flushAllEligible;
- (void)_startFlushingObjects;
- (void)_stopFlushingObjects;
- (void)advanceClock;
- (BOOL)controlsActiveObject:(id)a0;
- (BOOL)controlsInactiveObject:(id)a0;
- (void)didReceiveMemoryWarning;
- (struct TSUFlushableObjectInfo { id x0; int x1; int x2; int x3; unsigned int x4[2]; } *)eraseInfoForObject:(id)a0;
- (void)insertObjectInfo:(struct TSUFlushableObjectInfo { id x0; int x1; int x2; int x3; unsigned int x4[2]; } *)a0;
- (BOOL)isNewObject:(struct TSUFlushableObjectInfo { id x0; int x1; int x2; int x3; unsigned int x4[2]; } *)a0;
- (void)safeToFlush:(id)a0 wasAccessed:(BOOL)a1;
- (void)transferNewObjects;
- (void)unsafeToFlush:(id)a0;

@end
