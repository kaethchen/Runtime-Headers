@interface PSUIntentMessageHistorySearcher : NSObject <PSUMessageHistorySearcher>

- (void)recentMessagesSinceDate:(id)a0 conversationIdentifier:(id)a1 appBundleId:(id)a2 incomingMessageID:(id)a3 limit:(long long)a4 options:(unsigned long long)a5 completionHandler:(id /* block */)a6;

@end
