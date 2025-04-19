@class NSObject;
@protocol NFTNEPReaderDelegate, NFSecureTransactionServicesHandoverSessionDelegate, NFTNEPTagDeviceDelegate;

@interface NFSecureTransactionServicesHandoverSession : NFSession

@property (retain, nonatomic) NSObject<NFTNEPTagDeviceDelegate> *tagDeviceDelegate;
@property (retain, nonatomic) NSObject<NFTNEPReaderDelegate> *tagReaderDelegate;
@property (weak) id<NFSecureTransactionServicesHandoverSessionDelegate> delegate;

- (void).cxx_destruct;
- (id)deselectService;
- (void)handleSessionResumed;
- (void)handleSessionSuspended:(id)a0;
- (id)restartPolling;
- (id)selectService:(id)a0;
- (void)singleResponseCommunicationReaderSend:(id)a0 completionHandler:(id /* block */)a1;
- (void)singleResponseCommunicationTagSend:(id)a0 completionHandler:(id /* block */)a1;
- (void)startSTSNotificationListenerWithEndpoint:(id)a0;
- (id)startTNEPReaderWithDelegate:(id)a0;
- (id)startTNEPTagDeviceWithService:(id)a0 optionalRecords:(id)a1 delegate:(id)a2;
- (void)stopTNEPOperation;

@end
