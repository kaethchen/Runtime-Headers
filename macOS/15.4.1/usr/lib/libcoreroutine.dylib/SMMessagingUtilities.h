@interface SMMessagingUtilities : NSObject

+ (id)_canonicalHandleMapFromHandles:(id)a0;
+ (BOOL)handlesInConversation1:(id)a0 canonicallyEqualsHandlesInConversation2:(id)a1;
+ (id)_canonicalizeHandles:(id)a0;
+ (id)canonicalIDSIDsForAddress:(id)a0;
+ (id)conversationFromHandlesInConversation1:(id)a0 canonicallyIntersectedWithHandlesInConversation2:(id)a1;
+ (id)conversationFromHandlesInConversation1:(id)a0 canonicallyMappedToHandlesInConversation2:(id)a1;
+ (void)queryChatWithGroupID:(id)a0 queue:(id)a1 handler:(id /* block */)a2;

@end
