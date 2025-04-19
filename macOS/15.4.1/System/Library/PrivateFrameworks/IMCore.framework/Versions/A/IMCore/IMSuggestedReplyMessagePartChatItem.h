@class IMChipReply;

@interface IMSuggestedReplyMessagePartChatItem : IMAttachmentMessagePartChatItem

@property (readonly, copy, nonatomic) IMChipReply *suggestedReply;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithItem:(id)a0 suggestedReply:(id)a1;

@end
