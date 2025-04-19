@class ICMGalleryAttachmentCollectionView, NSString, ICMacTextView, ICMSidebarController, NSCollectionView;

@interface ICMGalleryAttachmentView : ICAttachmentView <ICMImageGalleryAttachmentCollectionViewDelegate>

@property (weak, nonatomic) ICMGalleryAttachmentCollectionView *collectionViewContainer;
@property (readonly, nonatomic) NSCollectionView *collectionView;
@property (readonly, nonatomic) ICMacTextView *textView;
@property (retain, nonatomic) ICMSidebarController *sidebarController;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (struct CGSize { double x0; double x1; })sizeOfViewForAttachment:(id)a0 textViewContentWidth:(double)a1;

- (void)dealloc;
- (void).cxx_destruct;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (id)accessibilityLabel;
- (void)removeFromSuperview;
- (void)scrollWheel:(id)a0;
- (void)viewDidMoveToSuperview;
- (void)setHighlightColor:(id)a0;
- (void)setHighlightPatternRegexFinder:(id)a0;
- (id)initWithTextAttachment:(id)a0 textContainer:(id)a1 forManualRendering:(BOOL)a2;
- (id)dcaxShowServicePickerTypeDescription;
- (void)exportNoteAsPDF:(id)a0;
- (void)openAttachment;
- (void)openAttachmentInPreview;
- (void)sizeStateDidChange;
- (double)textViewContentWidth;

@end
