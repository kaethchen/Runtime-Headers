@class NSArray, IMMessageItem;

@interface IMItemsController : NSObject

@property (nonatomic) struct __CFArray { } *items;
@property (readonly, copy, nonatomic) NSArray *_items;
@property (nonatomic) unsigned long long capacity;
@property (readonly, nonatomic) BOOL isMoreToLoad;
@property (readonly, nonatomic) IMMessageItem *lastIncomingFinishedMessageItem;

+ (id)_charactersToIgnoreWhenParsingTextContent;

- (void)dealloc;
- (id)init;
- (void)_removeAllItems;
- (unsigned long long)_indexOfItem:(id)a0;
- (void)_removeItem:(id)a0;
- (id)_initWithItems:(id)a0;
- (BOOL)_isSentMessage:(id)a0;
- (id)_appendArchivedItemsToItemsArray:(id)a0;
- (void)_didReplaceItem:(struct __CFArray { } *)a0 oldItem:(id)a1 idx:(long long)a2;
- (id)_firstMessage;
- (void)_handleItem:(id)a0 forChatStyle:(unsigned char)a1;
- (void)_handleItem:(id)a0 forChatStyle:(unsigned char)a1 keepExistingIndex:(BOOL)a2;
- (id)_itemForGUID:(id)a0;
- (void)_itemsDidChange:(id)a0;
- (id)_lastFinishedMessage;
- (id)_lastIncomingFinishedMessageItemWithTextContent;
- (id)_lastIncomingMessage;
- (id)_lastInterworkedMessage;
- (id)_lastMessage;
- (id)_lastMessageItemMatchingCriteria:(id /* block */)a0;
- (id)_lastMessageItemWithService:(id)a0;
- (id)_lastMessageItemWithServiceCapability:(id)a0;
- (id)_lastPendingSatelliteSendMessage;
- (id)_lastRelatedIncomingFinishedMessageTextContentWithLimit:(long long)a0;
- (id)_lastSentMessage;
- (void)_mergeItems:(id)a0;
- (void)_replaceAndSortItemsWithUnsortedItems:(id)a0;
- (void)_replaceItems:(id)a0;
- (void)_replaceItems:(id)a0 skipCallToItemsDidChange:(BOOL)a1;
- (void)_replaceStaleTypingMessage;
- (void)_resortItems;
- (id)_sentMessagesSinceInterworking;
- (void)_setSortID:(id)a0;
- (BOOL)_shouldPinUnsentMessagesToBottom;
- (BOOL)_trimIfNeeded;
- (id)_typingMessage;
- (void)assignSortIDsToItems:(id)a0;
- (void)assignSortIDsToItems:(id)a0 shouldRecalculateSortIDForAllMessages:(BOOL)a1;

@end
