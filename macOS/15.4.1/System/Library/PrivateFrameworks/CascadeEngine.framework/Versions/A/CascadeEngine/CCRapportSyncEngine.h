@class CCDataResourceReadAccess, NSString, CCRapportManager, NSOperationQueue, CCRapportRequest, NSObject, CCRapportFileTransferManager;
@protocol OS_dispatch_queue, CCDonateServiceProvider;

@interface CCRapportSyncEngine : NSObject <CCRapportManagerDelegate> {
    NSString *_personaIdentifier;
    CCRapportManager *_rapportManager;
    CCDataResourceReadAccess *_readAcccess;
    NSObject<CCDonateServiceProvider> *_donateServiceProvider;
    NSObject<OS_dispatch_queue> *_queue;
    CCRapportFileTransferManager *_fileTransferSessionManager;
    NSOperationQueue *_operationQueue;
    CCRapportRequest *_currentRequest;
    NSString *_siteSuffix;
}

@property (retain, nonatomic) NSString *siteSuffix;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)teardown;
- (id)initWithQueue:(id)a0;
- (unsigned int)protocolVersion;
- (void)startClient;
- (void)addOperationsToFetchMergeableDeltasFromDevice:(id)a0 isReciprocal:(BOOL)a1;
- (id)buildBasePeerToPeerMessage;
- (id)buildDoneFetchingMergeableDeltasMessageToDevice:(id)a0 withIsReciprocal:(BOOL)a1;
- (id)buildMergeableDeltasRequestForSet:(id)a0;
- (void)completeRequestAsDeliveredToDevices:(id)a0 withErrors:(id)a1;
- (void)completeRequestIfDeliveredToAllNearbyDevices;
- (void)deleteDanglingFilesFromFileTransferDirectory;
- (id /* block */)doneFetchingMergeableDeltasRequestHandler;
- (id /* block */)fetchMergeableDeltasRequestHandler;
- (void)fetchMergeableDeltasWithReason:(unsigned long long)a0 activity:(id)a1 completionHandler:(id /* block */)a2;
- (void)fetchReciprocalMergeableDeltasFromDevice:(id)a0 completionHandler:(id /* block */)a1;
- (void)handleIncomingMergeableDeltaFileTransfer:(id)a0 fromDevice:(id)a1;
- (id)initWithQueue:(id)a0 rapportManager:(id)a1 rapportFileTransferManager:(id)a2 readAccess:(id)a3 donateServiceProvider:(id)a4;
- (id)lookupSetConfigurationForSet:(id)a0;
- (void)rapportManager:(id)a0 didDiscoverCCRapportDevice:(id)a1;
- (void)rapportManager:(id)a0 didLoseNearbyCCRapportDevice:(id)a1;
- (BOOL)rapportManager:(id)a0 isDeviceSupported:(id)a1;
- (void)rapportManager:(id)a0 localDeviceUpdated:(id)a1;
- (void)rapportManagerDiscoveryTimedOut:(id)a0;
- (void)registerRequests;
- (void)sendDoneFetchingMergeableDeltasRequest:(id)a0 toDevice:(id)a1 completionHandler:(id /* block */)a2;
- (void)sendFetchMergeableDeltasRequest:(id)a0 toDevice:(id)a1 completionHandler:(id /* block */)a2;
- (void)sendSetDiscoveryRequest:(id)a0 toDevice:(id)a1 completionHandler:(id /* block */)a2;
- (id /* block */)setDiscoveryRequestHandler;
- (id)setUUIDsSupportingSync;
- (void)startServerWithCompletion:(id /* block */)a0;
- (void)syncNowWithReason:(unsigned long long)a0 activity:(id)a1 completionHandler:(id /* block */)a2;

@end
