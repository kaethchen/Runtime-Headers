@class ICAttachment;

@interface ICBaseTextAttachment : ICAbstractTextAttachment

@property (retain, nonatomic) ICAttachment *attachment;

- (id)image;
- (id)initWithAttachment:(id)a0;
- (id)attachmentIdentifier;
- (BOOL)isUnsupported;
- (id)attachmentInContext:(id)a0;
- (id)attachmentUTI;
- (id)inlineAttachmentInContext:(id)a0;
- (id)attachmentAttributesForAttributedString;
- (BOOL)canDragWithoutSelecting;
- (short)effectiveAttachmentViewSizeForTextContainer:(id)a0;
- (void)fixAttachmentForAttributedString:(id)a0 range:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1 forPlainText:(BOOL)a2 forStandardizedText:(BOOL)a3;
- (id)printableTextContentForAppearanceType:(unsigned long long)a0 textContainer:(id)a1;
- (BOOL)supportsUserConfigurablePresentationSizeForTextContainer:(id)a0;
- (double)viewCornerRadius;

@end
