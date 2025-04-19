@class NSString, GCDTimer, NSMutableDictionary, MSPSharedTripIDSCapabilityFetchingQueue, MSPSharedTripMessagesCapabilityFetchingQueue, NSObject, NSXPCListener, NSMapTable, IDSBatchIDQueryController;
@protocol OS_dispatch_queue;

@interface MSPSharedTripCapabilityFetchingServer : NSObject <NSXPCListenerDelegate, MSPSharedTripCapabilityFetchingQueueDelegate> {
    NSXPCListener *_listener;
    NSMapTable *_peersByConnection;
    NSObject<OS_dispatch_queue> *_workQueue;
    NSMutableDictionary *_identifierToMapsStatus;
    NSMutableDictionary *_identifierToMessagesStatus;
    NSMutableDictionary *_identifierToTextMessageStatus;
    IDSBatchIDQueryController *_messagesBatchController;
    MSPSharedTripIDSCapabilityFetchingQueue *_mapsStatusFetchQueue;
    MSPSharedTripIDSCapabilityFetchingQueue *_messagesStatusFetchQueue;
    MSPSharedTripMessagesCapabilityFetchingQueue *_textMessageStatusFetchQueue;
    id _blockListMonitoringObserver;
    GCDTimer *_blockListCoalescingTimer;
    GCDTimer *_purgeTimer;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (BOOL)listener:(id)a0 shouldAcceptNewConnection:(id)a1;
- (void)_checkBlockList;
- (void)_verifyCurrentlyBlockedStatuses;
- (void)_performBlockOnAllCachedStatus:(id /* block */)a0;
- (BOOL)_connectionCanControlSharing:(id)a0;
- (void)_notifyPeersForIDSHandlesIfNeeded:(id)a0;
- (void)_performBlockOnAllQueues:(id /* block */)a0;
- (void)_purgeExpiredStatuses;
- (void)_removePeerForConnection:(id)a0;
- (id)_resolvedStatusForHandle:(id)a0;
- (void)_scheduleCoalescedBlockListCheckIfNeeded;
- (BOOL)_shouldPermitFetchingHandle:(id)a0;
- (void)_startMonitoringSystemBlockListIfNeeded;
- (void)_stopMonitoringSystemBlockList;
- (void)_systemBlockListDidUpdate;
- (void)_verifyCurrentlyUnblockedStatuses;
- (void)cancelFetchCapabilitiesForContacts:(id)a0;
- (void)capabilityFetchingQueue:(id)a0 didFetchStatusForHandles:(id)a1;
- (void)cleanConnections;
- (void)createXPCListener;
- (void)fetchCapabilitiesForContacts:(id)a0;

@end
