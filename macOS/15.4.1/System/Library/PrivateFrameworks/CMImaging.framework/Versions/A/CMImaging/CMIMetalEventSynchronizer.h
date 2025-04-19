@class NSMapTable;

@interface CMIMetalEventSynchronizer : NSObject {
    NSMapTable *_signals;
    NSMapTable *_events;
    _Atomic unsigned long long _currentSignal;
}

+ (void)initialize;
+ (id)getSharedInstance;

- (void).cxx_destruct;
- (id)_init;
- (void)signalEventOnCommandBuffer:(id)a0 forResource:(id)a1;
- (void)waitForEventOnCommandBuffer:(id)a0 forResource:(id)a1;

@end
