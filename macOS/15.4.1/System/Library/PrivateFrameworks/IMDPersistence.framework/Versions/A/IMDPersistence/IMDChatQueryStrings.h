@class NSString;

@interface IMDChatQueryStrings : NSObject

@property (class, nonatomic, readonly) NSString *allColumns;
@property (class, nonatomic, readonly) NSString *selectAllColumns;
@property (class, nonatomic, readonly) NSString *copyAllChatsQuery;
@property (class, nonatomic, readonly) NSString *copyAllNamedChatsQuery;
@property (class, nonatomic, readonly) NSString *remapChatsWithLastAddressedSIMIDToNewLastAddressedIDsQuery;
@property (class, nonatomic, readonly) NSString *chatRowIDsSortedByLastMessageDate;
@property (class, nonatomic, readonly) NSString *copyAllActiveChatsQuery;
@property (class, nonatomic, readonly) NSString *copyChatForGUIDQuery;
@property (class, nonatomic, readonly) NSString *copyChatForGUIDUnlockedQuery;
@property (class, nonatomic, readonly) NSString *copyChatGUIDsWithUnreadMessagesQuery;
@property (class, nonatomic, readonly) NSString *copyChatsWithUnreadMessagesQuery;

+ (id)copyChatsWithUnreadMessagesWithLimit:(long long)a0;
+ (id)copyRecentChatsQueryWithFilterCount:(int)a0;

- (id)init;

@end
