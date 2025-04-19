@class IDSXPCDaemonController, NSString, NSSet, NSHashTable, NSMutableDictionary;

@interface IDSServerMessagingController : NSObject <IDSXPCServerMessagingClient>

@property (readonly, nonatomic) NSString *topic;
@property (readonly, nonatomic) NSSet *commands;
@property (retain, nonatomic) NSHashTable *delegateMap;
@property (retain, nonatomic) IDSXPCDaemonController *daemonController;
@property (nonatomic) struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } daemonControllerLock;
@property (retain, nonatomic) NSString *uuid;
@property (retain, nonatomic) NSMutableDictionary *inFlightRequests;
@property (nonatomic) struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } inFlightLock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)addDelegate:(id)a0;
- (id)initWithTopic:(id)a0;
- (void)_failMessages;
- (void)_sendData:(id)a0 withOptions:(id)a1 identifier:(id)a2 completion:(id /* block */)a3;
- (void)_setupInterruptionHandler;
- (void)_setupXPC;
- (void)cancelMessageWithIdentifier:(id)a0 completion:(id /* block */)a1;
- (void)handleReceivedFinalStorageIndication;
- (void)handleReceivedIncomingMessageData:(id)a0 identifier:(id)a1 context:(id)a2;
- (id)initWithTopic:(id)a0 commands:(id)a1;
- (id)initWithTopic:(id)a0 commands:(id)a1 daemonController:(id)a2;
- (void)performXPC:(id /* block */)a0;
- (void)sendCertifiedDeliveryReceipt:(id)a0;
- (void)sendMessageData:(id)a0 withOptions:(id)a1 identifier:(id *)a2 completion:(id /* block */)a3;
- (void)sendServerStorageFetchWithCompletion:(id /* block */)a0;

@end
