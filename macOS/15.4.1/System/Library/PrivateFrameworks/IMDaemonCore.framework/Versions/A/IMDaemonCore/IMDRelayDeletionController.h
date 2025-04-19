@class NSArray, NSString, IMDService, IMMultiQueue;

@interface IMDRelayDeletionController : NSObject <IMDRelayPushHandlerListener>

@property (retain, nonatomic) IMMultiQueue *incomingMessageMultiQueue;
@property (readonly, nonatomic) IMDService *service;
@property (readonly, nonatomic) NSArray *accounts;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void).cxx_destruct;
- (id)chatRegistry;
- (id)relayController;
- (void)_blocklistIfNeededForChatDict:(id)a0;
- (id)_chatsForDeleteAndRecoveryChatMetadataDictionary:(id)a0;
- (void)_doClearChats:(id)a0;
- (void)_enqueueBlock:(id /* block */)a0 withTimeout:(double)a1;
- (id)_groupChatsByService:(id)a0;
- (void)_handleDeleteCommandWithMessageDictionary:(id)a0;
- (void)_updateLastMessageTimeStampForChat:(id)a0 broadcaster:(id)a1;
- (id)broadcasterForChatListenersForService:(id)a0;
- (id)broadcasterForChatListenersForService:(id)a0 withBlackholeStatus:(BOOL)a1;
- (void)deleteChatsForCommandDictionary:(id)a0;
- (id)deleteCommandDictionaryWithIncomingDictionary:(id)a0 inferredRecoverableDeleteForLegacyCommandsWithDate:(id)a1;
- (void)deleteMessagePartsForCommandDictionary:(id)a0;
- (void)deleteMessagesForCommandDictionary:(id)a0;
- (void)handler:(id)a0 deleteCommand:(id)a1 toIdentifier:(id)a2 fromIdentifier:(id)a3 fromToken:(id)a4 fromIDSID:(id)a5 timeStamp:(id)a6 needsDeliveryReceipt:(id)a7 deliveryContext:(id)a8 storageContext:(id)a9;
- (void)handler:(id)a0 recoverCommand:(id)a1 toIdentifier:(id)a2 fromIdentifier:(id)a3 fromToken:(id)a4 fromIDSID:(id)a5 timeStamp:(id)a6 needsDeliveryReceipt:(id)a7 deliveryContext:(id)a8 storageContext:(id)a9;
- (void)recoverChatsForCommandDictionary:(id)a0;
- (BOOL)shouldInferRecoverableDeleteForCommandDictionary:(id)a0;

@end
