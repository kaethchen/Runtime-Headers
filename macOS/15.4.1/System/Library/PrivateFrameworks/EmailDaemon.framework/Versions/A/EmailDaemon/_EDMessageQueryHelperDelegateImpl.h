@class NSString;
@protocol EMMessageQueryHelperObserver_xpc;

@interface _EDMessageQueryHelperDelegateImpl : NSObject <EDMessageQueryHelperDelegate>

@property (readonly, nonatomic) id<EMMessageQueryHelperObserver_xpc> observer;
@property (copy, nonatomic) id /* block */ didFindAllMessagesBlock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)initWithMessageQueryHelperObserver:(id)a0 didFindAllMessagesBlock:(id /* block */)a1;
- (void)queryHelper:(id)a0 businessIDDidChangeForMessages:(id)a1 fromBusinessID:(long long)a2;
- (void)queryHelper:(id)a0 conversationIDDidChangeForMessages:(id)a1 fromConversationID:(long long)a2;
- (void)queryHelper:(id)a0 conversationNotificationLevelDidChangeForConversation:(long long)a1 conversationID:(long long)a2;
- (void)queryHelper:(id)a0 didAddMessages:(id)a1;
- (void)queryHelper:(id)a0 didDeleteMessages:(id)a1;
- (void)queryHelper:(id)a0 didFindMessages:(id)a1 forInitialBatch:(BOOL)a2;
- (void)queryHelper:(id)a0 didUpdateMessages:(id)a1 forKeyPaths:(id)a2;
- (void)queryHelper:(id)a0 messageFlagsDidChangeForMessages:(id)a1 previousMessages:(id)a2;
- (void)queryHelper:(id)a0 objectIDDidChangeForMessage:(id)a1 oldObjectID:(id)a2 oldConversationID:(long long)a3;
- (void)queryHelperDidFindAllMessages:(id)a0;
- (void)queryHelperDidFinishRemoteSearch:(id)a0;
- (void)queryHelperNeedsRestart:(id)a0;

@end
