@class NSString, IMItem;

@interface IMReplyContextAggregateAttachmentMessagePartChatItem : IMAggregateAttachmentMessagePartChatItem <IMReplyContext>

@property (retain, nonatomic) IMItem *_parentItem;
@property (nonatomic) BOOL replyIsFromMe;
@property (copy, nonatomic) NSString *replyMessageGUID;

- (void).cxx_destruct;
- (BOOL)canDelete;
- (id)_initWithItem:(id)a0 parentItem:(id)a1 replyMessageGUID:(id)a2 replyIsFromMe:(BOOL)a3 text:(id)a4 index:(long long)a5 messagePartRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a6 transferGUIDs:(id)a7 chatContext:(id)a8;
- (id)_initWithItem:(id)a0 parentItem:(id)a1 replyMessageGUID:(id)a2 replyIsFromMe:(BOOL)a3 text:(id)a4 index:(long long)a5 messagePartRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a6 transferGUIDs:(id)a7 chatContext:(id)a8 visibleAssociatedMessageChatItems:(id)a9;
- (BOOL)isReplyContextPreview;

@end
