@class NSAttributedString, NSDate;

@interface IMTextMessagePartChatItem : IMMessagePartChatItem

@property (readonly, copy, nonatomic) NSAttributedString *subject;
@property (readonly, nonatomic) BOOL isShowingEditHistory;
@property (readonly, nonatomic) long long numberOfPreviousEdits;
@property (readonly, nonatomic) NSDate *lastEditDateForMessagePart;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (void).cxx_destruct;
- (unsigned char)contentType;
- (id)messageSummaryInfo;
- (BOOL)hasSubject;
- (id)_initWithItem:(id)a0 text:(id)a1 index:(long long)a2 messagePartRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a3 subject:(id)a4 isShowingEditHistory:(BOOL)a5;
- (id)_initWithItem:(id)a0 text:(id)a1 index:(long long)a2 messagePartRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a3 subject:(id)a4 shouldDisplayLink:(BOOL)a5 isShowingEditHistory:(BOOL)a6;
- (id)_initWithItem:(id)a0 text:(id)a1 index:(long long)a2 messagePartRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a3 subject:(id)a4 visibleAssociatedMessageChatItems:(id)a5 isShowingEditHistory:(BOOL)a6;
- (BOOL)canEditMessageText;
- (id)copyWithIsShowingEditHistory:(BOOL)a0;
- (void)enumerateEmojiTokensWithBlock:(id /* block */)a0;
- (id)replyContextPreviewChatItemForReply:(id)a0 chatContext:(id)a1;
- (void)setShouldDisplayRichLink:(BOOL)a0;
- (BOOL)shouldDisplayRichLink;
- (BOOL)supportsCommunicationSafety;
- (BOOL)supportsSuggestedActionsMenu;

@end
