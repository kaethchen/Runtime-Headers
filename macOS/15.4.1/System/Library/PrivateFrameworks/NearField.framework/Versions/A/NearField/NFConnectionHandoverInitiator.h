@class NFTag, NSString, NFConnectionHandoverRequest, NSData, NFTimer, NSObject, NFReaderSession;
@protocol NFConnectionHandoverInitiatorDelegate;

@interface NFConnectionHandoverInitiator : NFConnectionHandoverController <NFReaderSessionDelegate, NFSessionDelegate> {
    NFReaderSession *_readerSession;
    NFTag *_connectedTag;
    NFConnectionHandoverRequest *_delayRequest;
    id /* block */ _delayRequestCompletion;
    NFTimer *_delayRequestTimer;
    NFTimer *_tagConnectionTimer;
    NSData *_ecpFrame;
}

@property (weak, nonatomic) NSObject<NFConnectionHandoverInitiatorDelegate> *delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)initiatorWithDelegate:(id)a0;
+ (id)initiatorWithDelegate:(id)a0 callbackQueue:(id)a1;

- (void).cxx_destruct;
- (id)initWithDelegate:(id)a0;
- (void)start;
- (void)stop;
- (void)handleSessionSuspended:(id)a0 token:(id)a1 reason:(long long)a2 field:(id)a3;
- (void)readerSession:(id)a0 didDetectTags:(id)a1;
- (void)readerSession:(id)a0 externalReaderFieldNotification:(id)a1;
- (void)readerSessionDidEndUnexpectedly:(id)a0;
- (void)readerSessionDidEndUnexpectedly:(id)a0 reason:(id)a1;
- (void)_stopWithError:(id)a0;
- (id)initWithDelegate:(id)a0 callbackQueue:(id)a1;
- (void)_delayRequestDidExpire;
- (BOOL)_processSelectResponse:(id)a0;
- (void)_processSelectRetry:(id)a0 originalRequest:(id)a1 responseHandler:(id /* block */)a2;
- (void)_startWithCustomBroadcastData:(id)a0;
- (void)_tagConnectionDidExpire;
- (void)_triggerDelayRequestCompletionWithSelect:(id)a0 error:(id)a1;
- (void)send:(id)a0 responseHandler:(id /* block */)a1;
- (void)sendHandoverRequest:(id)a0 responseHandler:(id /* block */)a1;
- (void)startWithCustomBroadcastData:(id)a0;

@end
