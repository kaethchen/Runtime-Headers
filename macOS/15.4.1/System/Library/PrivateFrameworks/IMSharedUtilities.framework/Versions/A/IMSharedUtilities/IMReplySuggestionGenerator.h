@interface IMReplySuggestionGenerator : NSObject

+ (id)combinedPlainTextOfMessageItem:(id)a0;
+ (void)_annotatedRepliesForMessages:(id)a0 senderMessages:(id)a1 recipientHandles:(id)a2 languageCode:(id)a3 languageCodeChangeDate:(id)a4 loadAsync:(BOOL)a5 completion:(id /* block */)a6;
+ (void)_contextualRepliesForMessages:(id)a0 senderMessages:(id)a1 recipientHandles:(id)a2 languageCode:(id)a3 languageCodeChangeDate:(id)a4 loadAsync:(BOOL)a5 includeDynamicSuggestions:(BOOL)a6 completion:(id /* block */)a7;
+ (void)_repliesForMessages:(id)a0 senderMessages:(id)a1 recipientHandles:(id)a2 languageCode:(id)a3 languageCodeChangeDate:(id)a4 loadAsync:(BOOL)a5 fetchUsingContactsFramework:(BOOL)a6 completion:(id /* block */)a7;
+ (long long)_tintColorForMetadata:(id)a0;
+ (void)annotatedRepliesForMessages:(id)a0 senderMessages:(id)a1 recipientHandles:(id)a2 languageCode:(id)a3 languageCodeChangeDate:(id)a4 completion:(id /* block */)a5;
+ (BOOL)includeSmartReplies;
+ (void)primeResponseKitIfNeeded;
+ (id)recentIncomingMessagesWithTextContentForReplySuggestions:(id)a0;
+ (id)recentOugoingMessagesWithTextContentForReplySuggestions:(id)a0;
+ (id)repliesForMessages:(id)a0 senderMessages:(id)a1 recipientHandles:(id)a2 languageCode:(id)a3 languageCodeChangeDate:(id)a4;
+ (void)repliesForMessages:(id)a0 senderMessages:(id)a1 recipientHandles:(id)a2 languageCode:(id)a3 languageCodeChangeDate:(id)a4 completion:(id /* block */)a5;
+ (void)repliesForMessages:(id)a0 senderMessages:(id)a1 recipientHandles:(id)a2 languageCode:(id)a3 languageCodeChangeDate:(id)a4 fetchUsingContactsFramework:(BOOL)a5 completion:(id /* block */)a6;
+ (id)textMessageItemsFilteredByIsOutgoing:(id)a0 isOutgoingContent:(BOOL)a1;

@end
