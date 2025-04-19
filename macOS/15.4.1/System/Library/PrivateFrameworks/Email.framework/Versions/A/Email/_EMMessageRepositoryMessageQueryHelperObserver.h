@class EMInMemoryThreadCollection, NSString, EMObjectID, EMMessageRepository;
@protocol EMMessageListItemQueryResultsObserver;

@interface _EMMessageRepositoryMessageQueryHelperObserver : NSObject <EMMessageQueryHelperObserver_xpc, EMRecoverableObserver>

@property (readonly, weak, nonatomic) EMInMemoryThreadCollection *threadCollection;
@property (weak, nonatomic) EMMessageRepository *repository;
@property (readonly, weak, nonatomic) id<EMMessageListItemQueryResultsObserver> resultsObserver;
@property (readonly, nonatomic) EMObjectID *observationIdentifier;
@property (nonatomic) BOOL didUseThreadCollection;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)cancel;
- (void)queryHelperBusinessIDDidChangeForMessages:(id)a0 fromBusinessID:(long long)a1;
- (void)queryHelperConversationIDDidChangeForMessages:(id)a0 fromConversationID:(long long)a1;
- (void)queryHelperConversationNotificationLevelDidChangeForConversation:(long long)a0 conversationID:(long long)a1;
- (void)queryHelperDidAddMessages:(id)a0;
- (void)queryHelperDidDeleteMessages:(id)a0;
- (void)queryHelperDidFindAllMessages;
- (void)queryHelperDidFindMessages:(id)a0;
- (void)queryHelperDidFinishRemoteSearch;
- (void)queryHelperDidUpdateMessages:(id)a0 forKeyPaths:(id)a1;
- (void)queryHelperMessageFlagsDidChangeForMessages:(id)a0;
- (void)queryHelperNeedsRestart;
- (void)queryHelperObjectIDDidChangeForMessage:(id)a0 oldObjectID:(id)a1 oldConversationID:(long long)a2;
- (void)_addMessagesToThreadCollection:(id)a0;
- (id)initWithThreadCollection:(id)a0 repository:(id)a1 observer:(id)a2 observationIdentifier:(id)a3;
- (void)performWithRemoteConnection:(id)a0;
- (void)recoverWithRemoteConnection:(id)a0;

@end
