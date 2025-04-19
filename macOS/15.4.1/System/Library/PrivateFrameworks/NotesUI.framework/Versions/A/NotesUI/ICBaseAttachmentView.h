@class ICAttachment, NSColor, ICSearchResultRegexMatchFinder, NSImage, ICTextAttachment;

@interface ICBaseAttachmentView : NSView

@property (retain, nonatomic) ICAttachment *attachment;
@property (weak, nonatomic) ICTextAttachment *textAttachment;
@property (nonatomic) BOOL selected;
@property (nonatomic) struct CGSize { double width; double height; } attachmentContentSize;
@property (nonatomic) double foregroundAlpha;
@property (copy, nonatomic) NSColor *highlightColor;
@property (retain, nonatomic) ICSearchResultRegexMatchFinder *highlightPatternRegexFinder;
@property (readonly, nonatomic) NSImage *imageForPrinting;

- (void)dealloc;
- (void).cxx_destruct;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (void)updateHighlights;
- (void)contentSizeCategoryDidChange;
- (void)attachmentPreviewImagesDidUpdate:(id)a0;
- (BOOL)cancelDidScrollIntoVisibleRange;
- (void)addKVObserversForAttachment:(id)a0;
- (void)attachmentDidChangeSize:(id)a0;
- (void)attachmentDidLoad:(id)a0;
- (void)attachmentWillBeDeleted:(id)a0;
- (void)didChangeAttachment;
- (void)didChangeAttachmentTitle;
- (void)didChangeMedia;
- (void)didChangeMergeableData;
- (void)didChangeSize;
- (void)didScrollIntoVisibleRange;
- (void)didScrollOutOfVisibleRange;
- (void)didUpdatePreviewImages;
- (void)mediaDidLoad:(id)a0;
- (void)removeKVOObserversForAttachment:(id)a0;
- (void)willChangeAttachment;
- (void)willDeleteAttachment;

@end
