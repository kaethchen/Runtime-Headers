@class NSObject;
@protocol OS_dispatch_queue;

@interface CSAttSiriStateMonitor : CSEventMonitor

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (nonatomic) unsigned long long attendingState;

+ (id)sharedInstance;

- (id)init;
- (void).cxx_destruct;
- (void)updateState:(unsigned long long)a0;
- (void)_stopMonitoring;
- (void)_startMonitoringWithQueue:(id)a0;
- (unsigned long long)getAttendingState;
- (BOOL)isAttending;
- (BOOL)isAttendingForDictation;

@end
