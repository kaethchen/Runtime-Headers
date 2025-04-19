@class _NSScrollingPerfLogger, _NSScrollingPredominantAxisFilter;
@protocol _NSScrollStateEventListener;

@interface _NSScrollingConcurrentEventMonitor : NSObject {
    struct { unsigned char shouldUseUnacceleratedDelta : 1; unsigned char shouldCoalesceDeltas : 1; unsigned char shouldIgnoreConsumption : 1; unsigned char wantsGestureEvents : 1; unsigned char shouldStopMonitoringOnMomentumEnd : 1; unsigned char didProcessMomentumEnd : 1; unsigned char didPostPhysicalBegan : 1; unsigned char didPostMomentumBegan : 1; unsigned char deltaIsAccelerated : 1; unsigned int reserved : 23; } _flags;
    id _monitorID;
    BOOL *_isCancelledPtr;
    unsigned long long _originalGestureMask;
    id /* block */ _eventProcessingHandler;
    id<_NSScrollStateEventListener> _scrollStateDelegate;
    _NSScrollingPerfLogger *_perfLogger;
    _NSScrollingPredominantAxisFilter *_predominantAxisFilter;
    _NSScrollingPredominantAxisFilter *_backupPredominantAxisFilter;
    struct CGPoint { double x; double y; } _delta;
    struct CGPoint { double x; double y; } _velocity;
    struct CGPoint { double x; double y; } _backupVelocity;
    long long _deviceType;
}

@property (readonly, nonatomic) long long deviceType;
@property (readonly, nonatomic) struct CGPoint { double x0; double x1; } delta;
@property (readonly, nonatomic) struct CGPoint { double x0; double x1; } velocity;
@property (nonatomic) BOOL shouldUseUnacceleratedDelta;
@property (nonatomic) BOOL shouldCoalesceDeltas;
@property (nonatomic) BOOL shouldIgnoreConsumption;
@property (nonatomic) BOOL wantsGestureEvents;
@property (nonatomic) BOOL shouldStopMonitoringOnMomentumEnd;
@property (readonly, nonatomic) BOOL deltaIsAccelerated;
@property (nonatomic) long long predominantAxisMode;
@property (copy, nonatomic) id /* block */ eventProcessingHandler;
@property (weak, nonatomic) id<_NSScrollStateEventListener> scrollStateDelegate;
@property (weak, nonatomic) _NSScrollingPerfLogger *perfLogger;

- (void)dealloc;
- (void).cxx_destruct;
- (void)startMonitoring;
- (void)_monitorEvent:(id)a0;
- (struct { struct CGPoint { double x0; double x1; } x0; struct CGPoint { double x0; double x1; } x1; })dataConsumingDelta;
- (id)initWithEvent:(id)a0 predominantAxisMode:(long long)a1;
- (void)stopMonitoring;

@end
