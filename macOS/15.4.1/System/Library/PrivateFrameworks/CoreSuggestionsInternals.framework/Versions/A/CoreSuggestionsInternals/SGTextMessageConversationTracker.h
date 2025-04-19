@class SGConversationTracker;

@interface SGTextMessageConversationTracker : NSObject {
    SGConversationTracker *_conversationTracker;
}

+ (id)instance;
+ (id)getMergedPrompt:(id)a0 withParams:(id)a1;

- (id)init;
- (void).cxx_destruct;
- (void)clear;
- (id)addTextMessageItem:(id)a0;
- (id)conversationForIdentifier:(id)a0;

@end
