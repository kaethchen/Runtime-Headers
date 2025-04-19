@protocol SCRValueChangeMonitorDelegate;

@interface SCRValueChangeMonitor : NSObject

@property (readonly, nonatomic) double _pollDuration;
@property (weak, nonatomic, setter=_setPollDelegate:) id<SCRValueChangeMonitorDelegate> _pollDelegate;
@property (readonly, nonatomic) double _pollInterval;
@property (nonatomic, setter=_setCurrentPollCount:) int _currentPollCount;

- (void)dealloc;
- (void).cxx_destruct;
- (void)startPolling;
- (void)_stopPolling;
- (void)_continuePolling;
- (id)initWithPollDuration:(double)a0 pollDelegate:(id)a1;
- (void)invalidatePollDelegate;

@end
