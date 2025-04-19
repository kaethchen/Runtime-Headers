@class NSTextField, NSString, ICCollapsibleActivityView, NSArray, ICMGalleryAttachmentCollectionViewScrollView, NSColor, ICAttachmentGalleryModel, ICAttachmentPreviewImageCache, ICAttachment, NSCollectionView, ICSearchResultRegexMatchFinder;
@protocol ICMImageGalleryAttachmentCollectionViewDelegate;

@interface ICMGalleryAttachmentCollectionView : NSView <NSCollectionViewDelegate, NSCollectionViewDataSource, ICMImageGalleryAttachmentViewItemDelegate>

@property (weak, nonatomic) NSTextField *label;
@property (weak, nonatomic) ICCollapsibleActivityView *collapsibleActivityView;
@property (weak, nonatomic) ICMGalleryAttachmentCollectionViewScrollView *scrollView;
@property (retain, nonatomic) ICAttachment *observedAttachment;
@property (retain, nonatomic) ICAttachmentPreviewImageCache *imageCache;
@property (readonly, nonatomic) ICAttachmentGalleryModel *galleryModel;
@property (retain, nonatomic) NSArray *displayedAttachments;
@property (nonatomic) BOOL isAnimatingSizeStateChange;
@property (nonatomic) BOOL reloadDataOnSetFrame;
@property (weak, nonatomic) id<ICMImageGalleryAttachmentCollectionViewDelegate> delegate;
@property (weak, nonatomic) NSCollectionView *collectionView;
@property (retain, nonatomic) ICAttachment *attachment;
@property (copy, nonatomic) NSColor *highlightColor;
@property (retain, nonatomic) ICSearchResultRegexMatchFinder *highlightPatternRegexFinder;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)newCollectionView;

- (void)dealloc;
- (void).cxx_destruct;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (void)awakeFromNib;
- (void)collectionView:(id)a0 didSelectItemsAtIndexPaths:(id)a1;
- (id)collectionView:(id)a0 itemForRepresentedObjectAtIndexPath:(id)a1;
- (struct CGSize { double x0; double x1; })collectionView:(id)a0 layout:(id)a1 sizeForItemAtIndexPath:(id)a2;
- (long long)collectionView:(id)a0 numberOfItemsInSection:(long long)a1;
- (id)collectionView:(id)a0 shouldSelectItemsAtIndexPaths:(id)a1;
- (long long)numberOfSectionsInCollectionView:(id)a0;
- (void)setFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)flowLayout;
- (void)reloadVisibleItems;
- (void)updateTitleLabel;
- (void)stopObservingAttachment:(id)a0;
- (void)attachmentDidLoad:(id)a0;
- (void)loadAttachment:(id)a0;
- (void)collectionViewItem:(id)a0 didChangeTitle:(id)a1;
- (void)collectionViewItemDidMouseUpWithoutShiftOrCommand:(id)a0;
- (void)collectionViewItemDidUpdateImageSize:(id)a0;
- (BOOL)galleryAttachmentViewIsForManualRendering;
- (id)galleryAttachmentViewItemImageCache;
- (id)orderedAttachments;
- (void)startObservingAttachment:(id)a0;
- (id)subAttachmentAtIndex:(long long)a0;
- (void)updateContentFrameIfNecessary;
- (void)updateSubAttachmentsToMatchModel;

@end
