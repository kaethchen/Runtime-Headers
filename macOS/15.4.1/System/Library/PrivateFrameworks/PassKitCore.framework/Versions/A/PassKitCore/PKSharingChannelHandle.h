@class NSObject, PKSharingMessage, NSMutableSet, NSMutableArray, PKXPCService;
@protocol OS_dispatch_queue;

@interface PKSharingChannelHandle : NSObject {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
    PKXPCService *_remoteService;
    unsigned long long _actionAssertionCount;
    id /* block */ _didInvalidateReply;
    id /* block */ _pendingOwnershipTransfer;
    NSMutableArray *_invalidationCompletions;
    unsigned long long _status;
    PKSharingMessage *_messageBeingHandled;
    NSMutableSet *_receivedMessageIdentifiers;
    NSMutableArray *_outstandingMessages;
}

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *replyQueue;
@property (copy, nonatomic) id /* block */ invalidationHandler;
@property (copy, nonatomic) id /* block */ messageReceivedHandler;
@property (readonly, nonatomic) BOOL hasOutstandingMessage;
@property (readonly, nonatomic) BOOL isInvalid;

+ (id)createHandleForDescriptor:(id)a0 queue:(id)a1;
+ (void)descriptorsForAccountDevices:(id /* block */)a0;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (void)invalidate;
- (void)didInvalidate;
- (void)invalidateWithCompletion:(id /* block */)a0;
- (void)pingWithCompletion:(id /* block */)a0;
- (void)sendMessage:(id)a0 completion:(id /* block */)a1;
- (id)_initWithQueue:(id)a0;
- (void)_didReceiveMessage;
- (BOOL)_lock_isStatusValidForAction:(BOOL)a0;
- (void)attachAndFetchMessage:(id /* block */)a0;
- (void)attachWithCompletion:(id /* block */)a0;
- (void)closeWithCompletion:(id /* block */)a0;
- (id)createActionAssertion;
- (id)createActionAssertionAllowWhileTransferring:(BOOL)a0;
- (void)detachHandleForTransfer:(id /* block */)a0;
- (void)didReceiveMessages:(id)a0;
- (void)fetchHandleTransferToken:(id /* block */)a0;
- (void)handleOutstandingMessage:(id /* block */)a0;
- (void)invalidateWithRemoteWithCompletion:(id /* block */)a0;
- (void)invalidateWithSource:(unsigned long long)a0 completion:(id /* block */)a1;
- (void)markMessageAsHandled:(id)a0;
- (void)relinquishWithCompletion:(id /* block */)a0;
- (void)remoteDeviceInformation:(id /* block */)a0;
- (void)sendMessageAndWaitForReply:(id)a0 timeout:(double)a1 messageHandler:(id /* block */)a2 invalidationHandler:(id /* block */)a3;
- (void)startProximityAdvertisementOfType:(unsigned long long)a0 completion:(id /* block */)a1;
- (void)startProximityDetectionForAdvertisement:(id)a0 completion:(id /* block */)a1;
- (id)transportIdentifier;
- (void)waitForMessageWithTimeout:(double)a0 messageHandler:(id /* block */)a1 invalidationHandler:(id /* block */)a2;

@end
