@class NSString, NSArray, ICBaseAttachment, NSColor;

@interface ICAbstractTextAttachment : NSTextAttachment <ICTTAttachment>

@property (retain, nonatomic) ICBaseAttachment *attachment;
@property (readonly, copy, nonatomic) NSString *viewIdentifier;
@property (readonly, nonatomic, getter=isUnsupported) BOOL unsupported;
@property (nonatomic) double foregroundAlpha;
@property (copy, nonatomic) NSColor *highlightColor;
@property (readonly, nonatomic) BOOL containsFindableText;
@property (readonly, nonatomic) BOOL supportsMultiplePresentationSizes;
@property (readonly, nonatomic) NSArray *supportedPresentationSizes;
@property (readonly, nonatomic) BOOL supportsMultipleThumbnailsOnSameLine;
@property (readonly, copy, nonatomic) NSString *attachmentIdentifier;
@property (readonly, copy, nonatomic) NSString *attachmentUTI;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)textAttachmentWithBaseAttachment:(id)a0;

- (void).cxx_destruct;
- (id)initWithData:(id)a0 ofType:(id)a1;
- (BOOL)usesTextAttachmentView;
- (BOOL)allowsTextAttachmentView;
- (BOOL)isEqualToModelComparable:(id)a0;
- (id)attachmentInContext:(id)a0;
- (id)inlineAttachmentInContext:(id)a0;
- (Class)attachmentViewClassForTextContainer:(id)a0;
- (Class)attachmentViewControllerClass;
- (void)fixAttachmentForAttributedString:(id)a0 range:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1 forPlainText:(BOOL)a2 forStandardizedText:(BOOL)a3;
- (id)newlyCreatedViewForManualRendering:(BOOL)a0 textContainer:(id)a1;
- (id)newlyCreatedViewForManualRenderingInTextContainer:(id)a0;
- (id)newlyCreatedViewForTextContainer:(id)a0;
- (BOOL)supportsUserConfigurablePresentationSizeForTextContainer:(id)a0;

@end
