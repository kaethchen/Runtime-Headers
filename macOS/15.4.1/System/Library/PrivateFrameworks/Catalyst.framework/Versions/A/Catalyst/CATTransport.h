@class CATOperationQueue, NSString, CATStateMachine;
@protocol CATTransportDelegate;

@interface CATTransport : NSObject {
    CATStateMachine *mFSM;
    CATOperationQueue *mControlQueue;
    CATOperationQueue *mMessageQueue;
    CATTransport *mStrongSelf;
}

@property (copy, nonatomic) NSString *name;
@property (weak, nonatomic) id<CATTransportDelegate> delegate;

- (void)dealloc;
- (id)debugDescription;
- (id)description;
- (id)init;
- (void).cxx_destruct;
- (void)invalidate;
- (void)resume;
- (void)suspend;
- (void)sendMessage:(id)a0;
- (void)didInvalidate;
- (void)resumeConnection;
- (void)suspendConnection;
- (void)invalidateConnection;
- (void)resumeQueue;
- (void)cancelAndResumeQueuesAndEnqueueInvalidateConnection;
- (void)cancelHelloMessageAndResumeQueueOperations;
- (void)delegateDidInvalidate;
- (void)delegateDidResume;
- (void)didInterruptWithError:(id)a0;
- (void)didReceiveMessage:(id)a0;
- (void)enqueueDelegateCouldNotConnectWithError:(id)a0;
- (void)enqueueDelegateDidConnect;
- (void)enqueueDelegateDidInterruptWithError:(id)a0;
- (void)enqueueDelegateDidInvalidateAndFinalize;
- (void)enqueueDelegateDidReceiveMessage:(id)a0;
- (void)enqueueSendForMessage:(id)a0;
- (void)invalidSendForMessage:(id)a0;
- (id)operationToSendMessage:(id)a0;
- (void)resumeQueueAndConnection;
- (void)sendHelloMessageAndResumeQueue;
- (void)suspendQueue;
- (void)suspendQueueAndConnection;

@end
