@class IMRichCards;

@interface IMRichLinkCardMessagePartChatItem : IMAttachmentMessagePartChatItem

@property (readonly, copy, nonatomic) IMRichCards *richCards;
@property (readonly, nonatomic) long long selectedIndex;

- (void).cxx_destruct;
- (void)_setSelectedIndex:(long long)a0;
- (id)initWithItem:(id)a0 richCards:(id)a1 selectedIndex:(long long)a2;

@end
