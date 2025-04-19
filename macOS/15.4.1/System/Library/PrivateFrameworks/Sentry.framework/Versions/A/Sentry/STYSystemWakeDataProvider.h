@class STYIOPMNotificationMonitor, NSString, NSDictionary, STYHIDWakeEventFetcher, SignpostSupportObjectExtractor;
@protocol STYWakeDataConsumer;

@interface STYSystemWakeDataProvider : NSObject <STYIOPMNotificationDelegate, STYWakeDataProvider> {
    SignpostSupportObjectExtractor *_signpostExtractor;
    NSDictionary *_signpostMap;
    unsigned int _ioRegEntryForPM;
    STYIOPMNotificationMonitor *_iopmNotificationMonitor;
    STYHIDWakeEventFetcher *_hidWakeEventFetcher;
}

@property (weak) id<STYWakeDataConsumer> consumer;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (void).cxx_destruct;
- (void)startMonitoring;
- (id)initWithConsumer:(id)a0;
- (void)handleSignpostInterval:(id)a0;
- (void)handleSignpost:(id)a0;
- (unsigned long long)firstHidWakeEventAfter:(unsigned long long)a0 before:(unsigned long long)a1;
- (void)handleSignpostProcessingCompletion:(id)a0;
- (unsigned long long)lastWakeTime:(unsigned long long *)a0;
- (void)receivedPowerManagerNotification:(unsigned long long)a0 atTimestamp:(unsigned long long)a1;
- (unsigned long long)sleepType;
- (void)startMonitoringWakeSignposts;
- (void)stopMonitoringWakeSignposts;

@end
