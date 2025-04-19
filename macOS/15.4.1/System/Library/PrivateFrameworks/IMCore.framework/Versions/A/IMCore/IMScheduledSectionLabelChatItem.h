@class IMScheduledSectionDateChatItem;

@interface IMScheduledSectionLabelChatItem : IMTranscriptChatItem

@property (retain, nonatomic) IMScheduledSectionDateChatItem *dateChatItem;

- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithAssociatedDateChatItem:(id)a0;
- (BOOL)isEqualToScheduledLabelChatItem:(id)a0;

@end
