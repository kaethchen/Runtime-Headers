@class AVPlayerItemSegment, NSString, NSArray, AVOccasionalTimebaseObserver, NSObject;
@protocol OS_dispatch_queue;

@interface AVPlayerItemIntegratedTimelineBoundaryObserver : NSObject <AVPlayerItemIntegratedTimelineObserver_Internal> {
    struct OpaqueFigSimpleMutex { } *_mutex;
    AVPlayerItemSegment *_segment;
    NSArray *_offsetTimes;
    NSObject<OS_dispatch_queue> *_queue;
    id /* block */ _block;
    struct { struct { struct { long long value; int timescale; unsigned int flags; long long epoch; } start; struct { long long value; int timescale; unsigned int flags; long long epoch; } duration; } source; struct { struct { long long value; int timescale; unsigned int flags; long long epoch; } start; struct { long long value; int timescale; unsigned int flags; long long epoch; } duration; } target; } _observedTimeMapping;
    AVOccasionalTimebaseObserver *_boundaryObserver;
    BOOL _segmentWasRemoved;
    BOOL _hasBeenScheduled;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (id)_currentInterstitialIDForSnapshot:(id)a0;
- (BOOL)_ensureItemTimeOffsetLiesInSegment:(id)a0 item:(id)a1;
- (BOOL)_isItemCurrentTimeWithinZeroOffsetBoundaryThreshold:(id)a0 offset:(struct { long long x0; int x1; unsigned int x2; long long x3; })a1;
- (void)ensureBoundaryObserverSegmentStillExistsWithNewSnapshot:(id)a0;
- (BOOL)hasObserverBeenScheduledYet;
- (id)initWithSegment:(id)a0 offsetTimes:(id)a1 queue:(id)a2 block:(id /* block */)a3;
- (void)rescheduleObserverWithSnapshot:(id)a0 itemToSchedule:(id)a1;
- (id)scheduledSegment;

@end
