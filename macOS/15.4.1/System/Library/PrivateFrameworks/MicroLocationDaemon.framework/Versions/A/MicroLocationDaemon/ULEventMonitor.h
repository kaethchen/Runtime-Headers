@class NSMutableDictionary, NSObject;
@protocol OS_dispatch_queue;

@interface ULEventMonitor : NSObject

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (retain, nonatomic) NSMutableDictionary *observersMap;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (void)removeObserver:(id)a0;
- (void)startMonitoring:(id)a0;
- (void)stopMonitoring:(id)a0;
- (void)postEvent:(id)a0;
- (void)addObserver:(id)a0 selector:(SEL)a1 eventName:(id)a2;
- (unsigned long long)getNumberOfObserversForEventName:(id)a0;
- (id)latestEventAfterAddingObserverForEventName:(id)a0;
- (void)removeObserver:(id)a0 fromEventName:(id)a1;

@end
