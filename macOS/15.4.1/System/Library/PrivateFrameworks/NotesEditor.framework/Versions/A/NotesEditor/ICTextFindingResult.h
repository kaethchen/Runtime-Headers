@interface ICTextFindingResult : NSObject

@property (nonatomic) struct _NSRange { unsigned long long location; unsigned long long length; } range;
@property (nonatomic, getter=isAttachmentResult) BOOL attachmentResult;

- (long long)compare:(id)a0;
- (id)containingViewInTextView:(id)a0;
- (id)framesForHighlightInTextView:(id)a0;
- (void)scrollToVisibleInTextView:(id)a0;
- (void)selectInTextView:(id)a0;

@end
