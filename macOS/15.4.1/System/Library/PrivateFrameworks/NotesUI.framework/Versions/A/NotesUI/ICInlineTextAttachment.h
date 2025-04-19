@class NSCache, ICInlineAttachment;

@interface ICInlineTextAttachment : ICAbstractTextAttachment

@property (class, readonly, nonatomic) NSCache *imageCache;

@property (retain, nonatomic) ICInlineAttachment *attachment;

+ (Class)textAttachmentClassForAttachment:(id)a0;
+ (id)textAttachmentWithAttachment:(id)a0;

- (id)accessibilityLabel;
- (id)imageForBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 attributes:(id)a1 location:(id)a2 textContainer:(id)a3;
- (id)displayText;
- (id)altText;
- (id)initWithAttachment:(id)a0;
- (id)attachmentIdentifier;
- (BOOL)isUnsupported;
- (id)attachmentInContext:(id)a0;
- (id)attachmentUTI;
- (id)inlineAttachmentInContext:(id)a0;
- (id)attachmentAttributesForAttributedString;
- (Class)attachmentViewClassForTextContainer:(id)a0;
- (void)fixAttachmentForAttributedString:(id)a0 range:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1 forPlainText:(BOOL)a2 forStandardizedText:(BOOL)a3;
- (id)printableTextContentForAppearanceType:(unsigned long long)a0 styleAttributes:(id)a1 textContainer:(id)a2;

@end
