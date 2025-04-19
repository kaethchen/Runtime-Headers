@class NSString, AVPlayerItemIntegratedTimeline, AVPeriodicTimebaseObserver, NSObject;
@protocol OS_dispatch_queue;

@interface AVPlayerItemIntegratedTimelinePeriodicObserver : NSObject <AVPlayerItemIntegratedTimelineObserver_Internal> {
    struct OpaqueFigSimpleMutex { } *_mutex;
    struct { long long value; int timescale; unsigned int flags; long long epoch; } _interval;
    NSObject<OS_dispatch_queue> *_queue;
    id /* block */ _block;
    struct { struct { struct { long long value; int timescale; unsigned int flags; long long epoch; } start; struct { long long value; int timescale; unsigned int flags; long long epoch; } duration; } source; struct { struct { long long value; int timescale; unsigned int flags; long long epoch; } start; struct { long long value; int timescale; unsigned int flags; long long epoch; } duration; } target; } _observedTimeMapping;
    AVPeriodicTimebaseObserver *_periodicObserver;
    BOOL _hasBeenScheduled;
    AVPlayerItemIntegratedTimeline *_integratedTimeline;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (void).cxx_destruct;
- (BOOL)_doesTimeResideInItemIntegratedTimelineOffsets:(struct { long long x0; int x1; unsigned int x2; long long x3; })a0 withOffsets:(id)a1 timeMappingOut:(struct { struct { struct { long long x0; int x1; unsigned int x2; long long x3; } x0; struct { long long x0; int x1; unsigned int x2; long long x3; } x1; } x0; struct { struct { long long x0; int x1; unsigned int x2; long long x3; } x0; struct { long long x0; int x1; unsigned int x2; long long x3; } x1; } x1; } *)a2;
- (struct { long long x0; int x1; unsigned int x2; long long x3; })_getNextPeriodicFireTimeFromIntegratedCurrentTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a0;
- (BOOL)hasObserverBeenScheduledYet;
- (id)initWithInterval:(struct { long long x0; int x1; unsigned int x2; long long x3; })a0 queue:(id)a1 block:(id /* block */)a2 integratedTimeline:(id)a3;
- (void)rescheduleObserverWithSnapshot:(id)a0 itemToSchedule:(id)a1;

@end
