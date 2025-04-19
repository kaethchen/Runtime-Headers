@class TUConversationManager, _PASLock;

@interface PPQuickTypeURLServant : NSObject <PPQuickTypeServantProtocol> {
    TUConversationManager *_conversationManager;
    _PASLock *_dataLock;
}

- (id)init;
- (void).cxx_destruct;
- (id)initWithConversationManager:(id)a0;
- (id)quickTypeItemsWithQuery:(id)a0 limit:(unsigned long long)a1 explanationSet:(id)a2;
- (void)registerFeedback:(id)a0;

@end
