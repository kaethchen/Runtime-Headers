@class CHManager;

@interface RTTDatabaseManager : HCDatabaseManager {
    CHManager *_callHistoryManager;
}

+ (id)sharedManager;

- (id)init;
- (void).cxx_destruct;
- (id)containerIdentifier;
- (void)logMessage:(id)a0;
- (id)cloudKitContainer;
- (BOOL)contactIsTTYContact:(id)a0;
- (id)managedObjectModelName;
- (void)_callHistoryDBDidChange:(id)a0;
- (void)callHistoryDBDidChange:(id)a0;
- (BOOL)contactIDIsTTYContact:(id)a0;
- (BOOL)contactPathWasUsedForTTY:(id)a0;
- (id)conversationForCallUID:(id)a0;
- (BOOL)deleteConversationWithCallUID:(id)a0;
- (BOOL)deleteConversationsWithCallUIDs:(id)a0;
- (BOOL)saveConversation:(id)a0;

@end
