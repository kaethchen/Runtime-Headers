@class NSMutableArray, AVWeakReference, NSDate, NSObject, AVPlayerItemIntegratedTimelineSnapshot;
@protocol OS_dispatch_queue, AVPlayerItemIntegratedTimelineSeekDelegate;

@interface AVPlayerItemIntegratedTimeline : NSObject {
    struct OpaqueFigItemIntegratedTimeline { } *_figTimeline;
    AVWeakReference *_weakReference;
    AVWeakReference *_weakReferenceToPrimaryItem;
    AVWeakReference *_weakReferenceToInterstitialPlayer;
    struct OpaqueFigSimpleMutex { } *_seekIDMutex;
    int _nextSeekIDToGenerate;
    int _pendingSeekID;
    struct { long long value; int timescale; unsigned int flags; long long epoch; } _pendingSeekTime;
    id /* block */ _seekCompletionHandler;
    int _initialSeekID;
    struct { long long value; int timescale; unsigned int flags; long long epoch; } _initialTime;
    NSDate *_initialDate;
    struct { long long value; int timescale; unsigned int flags; long long epoch; } _initialToleranceBefore;
    struct { long long value; int timescale; unsigned int flags; long long epoch; } _initialToleranceAfter;
    struct __CFDictionary { } *_initialOptions;
    NSObject<OS_dispatch_queue> *_stateQueue;
    NSMutableArray *_observers;
    id<AVPlayerItemIntegratedTimelineSeekDelegate> _seekDelegate;
}

@property (weak, nonatomic) id<AVPlayerItemIntegratedTimelineSeekDelegate> seekDelegate;
@property (readonly) AVPlayerItemIntegratedTimelineSnapshot *currentSnapshot;
@property (readonly) struct { long long x0; int x1; unsigned int x2; long long x3; } currentTime;
@property (readonly) NSDate *currentDate;

+ (void)initialize;

- (void)dealloc;
- (void).cxx_destruct;
- (id)_initInternal;
- (void)seekToTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a0 toleranceBefore:(struct { long long x0; int x1; unsigned int x2; long long x3; })a1 toleranceAfter:(struct { long long x0; int x1; unsigned int x2; long long x3; })a2 completionHandler:(id /* block */)a3;
- (void)_addInterstitialPlayerListeners;
- (void)_addListener;
- (void)_attachCoordinator:(struct OpaqueFigPlayerInterstitialCoordinator { } *)a0;
- (void)_attachInterstitialPlayer:(id)a0;
- (void)_attachToItem:(id)a0;
- (void)_cancelPendingSeekAndRegisterSeekID:(int)a0 seekTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a1 withCompletionHandler:(id /* block */)a2;
- (void)_cancelPendingSeeks;
- (void)_clearCachedSeek;
- (int)_createSeekID;
- (id)_currentItemForCurrentSegment;
- (id)_currentItemForSegmentType:(long long)a0;
- (long long)_currentSegmentTypeOfCurrentSnapshot;
- (void)_ensureObserversAreScheduledForItem:(id)a0;
- (void)_ensureObserversHandleSnapshotSegmentsChanged;
- (int)_getPendingSeekID;
- (struct { long long x0; int x1; unsigned int x2; long long x3; })_getPendingSeekTime;
- (void)_informDelegateOfSeekForTimeIfNecessary:(struct { long long x0; int x1; unsigned int x2; long long x3; })a0;
- (id)_interstitialPlayer;
- (void)_issueCachedSeekIfNecessary;
- (id)_primaryItem;
- (void)_removeInterstitialPlayerListeners;
- (void)_removeListeners;
- (void)_resetPlaybackCoordinatorTimelineExpectations:(struct __CFDictionary { } *)a0;
- (void)_seekToDate:(id)a0 options:(struct __CFDictionary { } *)a1 completionHandler:(id /* block */)a2;
- (void)_seekToTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a0 toleranceBefore:(struct { long long x0; int x1; unsigned int x2; long long x3; })a1 toleranceAfter:(struct { long long x0; int x1; unsigned int x2; long long x3; })a2 options:(struct __CFDictionary { } *)a3 completionHandler:(id /* block */)a4;
- (void)_setInitialSeekState:(int)a0 time:(struct { long long x0; int x1; unsigned int x2; long long x3; })a1 date:(id)a2 toleranceBefore:(struct { long long x0; int x1; unsigned int x2; long long x3; })a3 toleranceAfter:(struct { long long x0; int x1; unsigned int x2; long long x3; })a4 options:(struct __CFDictionary { } *)a5;
- (void)_unregisterInvokeAndReleasePendingSeekCompletionHandlerForSeekID:(int)a0 finished:(BOOL)a1;
- (id)addBoundaryTimeObserverForSegment:(id)a0 offsetsIntoSegment:(id)a1 queue:(id)a2 usingBlock:(id /* block */)a3;
- (id)addPeriodicTimeObserverForInterval:(struct { long long x0; int x1; unsigned int x2; long long x3; })a0 queue:(id)a1 usingBlock:(id /* block */)a2;
- (void)removeTimeObserver:(id)a0;
- (void)seekToDate:(id)a0 completionHandler:(id /* block */)a1;

@end
