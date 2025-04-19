@class NSString, IDSBatchIDQueryController, GCDTimer;

@interface MSPSharedTripIDSCapabilityFetchingQueue : MSPSharedTripCapabilityFetchingQueue <IDSBatchIDQueryControllerDelegate> {
    NSString *_service;
    unsigned long long _capabilityType;
    IDSBatchIDQueryController *_batchIDQueryController;
    GCDTimer *_retryAfterBackoffTimer;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)batchQueryController:(id)a0 updatedDestinationsStatus:(id)a1 onService:(id)a2 error:(id)a3;
- (void)_processPendingHandles;
- (id)_processUpdates:(id)a0;
- (void)_retryAfterBackoff;
- (id)initWithIDSService:(id)a0 capabilityType:(unsigned long long)a1 delegate:(id)a2 queue:(id)a3 label:(id)a4;

@end
