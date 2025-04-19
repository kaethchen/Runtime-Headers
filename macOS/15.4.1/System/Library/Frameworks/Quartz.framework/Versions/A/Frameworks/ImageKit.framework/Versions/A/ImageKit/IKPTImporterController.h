@class IKImageBrowserView, NSString, IKPTCenteredTextLayer, NSMutableDictionary, NSButton, IKPTContentViewController;

@interface IKPTImporterController : IKViewController {
    IKPTCenteredTextLayer *_messageLayer;
    NSString *_selectedSourceID;
    NSMutableDictionary *_sourceIdentifiersToContents;
    BOOL _hasInvalidContents;
    BOOL _invalidateShowMessageLayer;
}

@property IKPTContentViewController *ikpt_contentViewController;
@property IKImageBrowserView *imageBrowser;
@property NSButton *editButton;
@property NSButton *cancelButton;
@property NSButton *setButton;
@property (retain) NSString *selectedSourceID;

+ (id)loadingRecentsLabel;
+ (id)noItemsLabel;

- (void)dealloc;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (void)cancel:(id)a0;
- (void)awakeFromNib;
- (void)concludeDragOperation:(id)a0;
- (unsigned long long)draggingEntered:(id)a0;
- (unsigned long long)draggingUpdated:(id)a0;
- (BOOL)layer:(id)a0 shouldInheritContentsScale:(double)a1 fromWindow:(id)a2;
- (void)loadView;
- (void)paste:(id)a0;
- (BOOL)performDragOperation:(id)a0;
- (BOOL)prepareForDragOperation:(id)a0;
- (void)invalidateContents;
- (void)imageBrowserSelectionDidChange:(id)a0;
- (void)imageBrowser:(id)a0 cellWasDoubleClickedAtIndex:(unsigned long long)a1;
- (id)currentPictureFromRecents;
- (void)displayMessage:(id)a0 boldMessageRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1 forSource:(id)a2 conditionedOnEmptySource:(BOOL)a3;
- (void)displayMessage:(id)a0 forSource:(id)a1 conditionedOnEmptySource:(BOOL)a2;
- (void)edit:(id)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })gridSelectionScreenRect;
- (void)hideMessageLayerForSource:(id)a0;
- (id)imageBrowser:(id)a0 itemAtIndex:(unsigned long long)a1;
- (void)imageBrowser:(id)a0 removeItemsAtIndexes:(id)a1;
- (BOOL)importDroppedImage:(id)a0;
- (id)messageLayerAttributes;
- (id)messageLayerBoldTextAttributes;
- (unsigned long long)numberOfItemsInImageBrowser:(id)a0;
- (void)set:(id)a0;
- (void)setSelectedImage;
- (void)setupContentLayers;
- (BOOL)shouldAcceptDrop:(id)a0;
- (id)sourceArrayWithPadding:(id)a0 fillEmpty:(BOOL)a1 addCurrentIfNeeded:(BOOL)a2;
- (void)updateContentLayout;
- (void)updateCustomSourcesWithAddedSources:(id)a0 removedSources:(id)a1;
- (void)updateRecentPictures;
- (void)updateSampleUserPicturesUsingQL:(BOOL)a0;

@end
