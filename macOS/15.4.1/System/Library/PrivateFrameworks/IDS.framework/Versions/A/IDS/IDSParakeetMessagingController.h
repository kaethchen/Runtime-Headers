@class NSMutableDictionary, NSString, NSMutableSet, IDSServerMessagingController, NSObject;
@protocol OS_dispatch_queue, IDSParakeetMessagingControllerDelegate;

@interface IDSParakeetMessagingController : NSObject <IDSServerMessagingControllerDelegate>

@property (readonly, nonatomic) IDSServerMessagingController *IPServerMessagingController;
@property (readonly, nonatomic) IDSServerMessagingController *offGridServerMessagingController;
@property (retain, nonatomic) NSMutableDictionary *stopStateMachineByIdentifier;
@property (nonatomic) unsigned long long emptyStorageState;
@property (retain, nonatomic) NSMutableSet *incomingMessagesWithoutAcks;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (weak, nonatomic) id<IDSParakeetMessagingControllerDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void).cxx_destruct;
- (void)_noteAckTimerFiredForIdentifier:(id)a0;
- (void)_noteAckedMessageWithMessageIdentifier:(id)a0;
- (void)_noteCanceledFetchForIdentifier:(id)a0 success:(BOOL)a1 error:(id)a2;
- (void)_noteReceivedStopResponseForIdentifier:(id)a0 success:(BOOL)a1 error:(id)a2;
- (void)_noteSentFetchForIdentifier:(id)a0 success:(BOOL)a1 error:(id)a2;
- (void)_noteSentStopForIdentifier:(id)a0 success:(BOOL)a1 error:(id)a2;
- (void)cancelParakeetSessionStopWithUUID:(id)a0 completion:(id /* block */)a1;
- (void)controller:(id)a0 receivedIncomingMessageData:(id)a1 context:(id)a2;
- (id)initWithIPServerMessagingController:(id)a0 offGridServerMessagingController:(id)a1 queue:(id)a2;
- (void)sendCertifiedDeliveryReceipt:(id)a0;
- (void)stopParakeetSessionWithUUID:(id)a0 completion:(id /* block */)a1;

@end
