@class NSArray;

@interface IMSuggestedRepliesMessagePartChatItem : IMAttachmentMessagePartChatItem

@property (readonly, copy, nonatomic) NSArray *suggestedRepliesList;
@property (readonly, nonatomic) long long selectedIndex;

+ (id)suggestedRepliesChatItemGUIDPrefix;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithItem:(id)a0 suggestedRepliesList:(id)a1 selectedIndex:(long long)a2;

@end
