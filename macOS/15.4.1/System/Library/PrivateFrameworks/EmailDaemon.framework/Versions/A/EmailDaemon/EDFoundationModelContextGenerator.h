@interface EDFoundationModelContextGenerator : NSObject

+ (id)log;
+ (id)_messageInReplyToMessage:(id)a0 messagePersistence:(id)a1 error:(id *)a2;
+ (id)originalContentMessageForMessage:(id)a0 limitOfInReplyToAncestors:(unsigned long long)a1 checkForForwardedMessages:(BOOL)a2 condenseEmptyLines:(BOOL)a3 messagePersistence:(id)a4 htmlStringFromMessage:(id /* block */)a5 error:(id *)a6;
+ (id)originalContentMessageForPersistedMessage:(id)a0 condenseEmptyLines:(BOOL)a1 preserveQuotedForwardedContent:(BOOL)a2 htmlStringFromMessage:(id /* block */)a3;
+ (id)originalContentMessagesForPersistedMessages:(id)a0 condenseEmptyLines:(BOOL)a1 preserveQuotedForwardedContent:(BOOL)a2 htmlStringFromMessage:(id /* block */)a3;

@end
