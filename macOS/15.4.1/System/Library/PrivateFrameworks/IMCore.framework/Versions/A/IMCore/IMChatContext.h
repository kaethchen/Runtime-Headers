@class NSUUID, NSArray;

@interface IMChatContext : NSObject <NSCopying, NSMutableCopying>

@property (readonly, nonatomic) long long serviceVariant;
@property (readonly, nonatomic) long long filterCategory;
@property (readonly, nonatomic, getter=isSpam) BOOL spam;
@property (readonly, nonatomic, getter=areSendersUnknown) BOOL sendersUnknown;
@property (readonly, nonatomic, getter=hasResponded) BOOL responded;
@property (readonly, nonatomic) NSUUID *activeTelephonyConversationUUID;
@property (readonly, nonatomic) NSArray *showingEditHistoryForChatItemGUIDs;
@property (readonly, nonatomic, getter=isChatBot) BOOL isChatBot;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (id)_copyWithClass:(Class)a0 zone:(struct _NSZone { } *)a1;

@end
