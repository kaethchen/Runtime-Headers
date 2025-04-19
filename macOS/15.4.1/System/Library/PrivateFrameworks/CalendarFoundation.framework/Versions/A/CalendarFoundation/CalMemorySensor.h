@class NSObject;
@protocol OS_dispatch_source;

@interface CalMemorySensor : NSObject {
    unsigned long long _interval;
    NSObject<OS_dispatch_source> *_timer;
}

@property (copy, nonatomic) id /* block */ fireBlock;
@property (readonly, nonatomic) unsigned long long usage;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (void)_monitorMemory;
- (void)_setupTimer;
- (void)defaultMessageTraceForApp:(id)a0;
- (id)initWithMonitorInterval:(unsigned long long)a0;
- (void)logMemoryUsageForApp:(id)a0 memoryUsageWarning:(id)a1;
- (void)startMonitoringMemory;
- (void)stopMonitoringMemory;

@end
