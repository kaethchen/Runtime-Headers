@class GCDTimer, NSMutableDictionary;

@interface MSPSharedTripMessagesCapabilityFetchingQueue : MSPSharedTripCapabilityFetchingQueue {
    NSMutableDictionary *_fetchedStatusesByHandle;
    GCDTimer *_batchDelayTimer;
    double _batchDelayInterval;
    unsigned long long _batchSize;
}

- (void).cxx_destruct;
- (void)_fetchTextMessageReachability:(id)a0;
- (void)_notifyDelegateIfNeeded;
- (void)_notifyDelegateNow;
- (void)_processFetchedServiceName:(id)a0 forHandle:(id)a1 permittedServiceNames:(id)a2;
- (void)_processFetchedStatus:(id)a0 forHandle:(id)a1;
- (void)_processPendingHandles;
- (void)_resetAfterLastHandleFetched;
- (void)_resetIfNeeded;
- (void)_scheduleBatchDelayTimerWithInterval:(double)a0;
- (id)initWithDelegate:(id)a0 queue:(id)a1 label:(id)a2;

@end
