@class NSMutableDictionary, NSObject;
@protocol OS_dispatch_queue;

@interface SDEventMonitor : NSObject

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (retain, nonatomic) NSMutableDictionary *eventHandlers;

+ (id)sharedInstance;

- (id)init;
- (void).cxx_destruct;
- (id)_init;
- (void)startMonitoringEvents;
- (void)unregisterHandler:(id /* block */)a0 forEventName:(id)a1;
- (void)_startMonitoringEventsForStream:(unsigned long long)a0;
- (void)registerHandler:(id /* block */)a0 forEventName:(id)a1;

@end
