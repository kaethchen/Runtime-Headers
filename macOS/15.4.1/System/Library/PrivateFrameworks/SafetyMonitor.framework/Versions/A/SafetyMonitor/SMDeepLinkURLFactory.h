@interface SMDeepLinkURLFactory : NSObject

+ (id)createURLForSuggestionsWithRecipientHandle:(id)a0 appPayloadDataString:(id)a1 givenName:(id)a2 payloadType:(long long)a3 sessionStartEntryType:(unsigned long long)a4;
+ (id)_generateCommonQueryItemsWithPayloadType:(long long)a0 groupID:(id)a1 data:(id)a2 sessionStartEntryType:(unsigned long long)a3;
+ (id)createURLForGroupID:(id)a0 recipientHandles:(id)a1 payloadType:(long long)a2;
+ (id)createURLForRecipientHandle:(id)a0 payloadType:(long long)a1;
+ (id)createURLToConversationForGroupID:(id)a0;
+ (id)createURLToConversationForRecipientHandle:(id)a0;
+ (id)createURLToDetailViewForGroupID:(id)a0 recipientHandles:(id)a1;
+ (id)createURLToDetailViewForRecipientHandle:(id)a0;
+ (long long)resolvePayloadTypeFromURL:(id)a0;

@end
