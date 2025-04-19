@class ICInlineAttachment, NSAttributedString;

@interface ICInlineTextFindingResult : ICTextFindingResult

@property (weak, nonatomic) ICInlineAttachment *attachment;
@property (retain, nonatomic) NSAttributedString *findableString;
@property (nonatomic) struct _NSRange { unsigned long long location; unsigned long long length; } displayTextRange;

- (void).cxx_destruct;
- (long long)compare:(id)a0;
- (id)framesForHighlightInTextView:(id)a0;
- (void)imageUsingPreviewProvider:(id)a0 inTextView:(id)a1 completion:(id /* block */)a2;
- (id)inlineAttachmentViewControllerInTextView:(id)a0;
- (id)inlineTextAttachmentViewProviderInTextView:(id)a0;

@end
