@class NSMutableDictionary, CNPhotoLikenessMaskView, CNPhotoLikenessEditorViewController, CNPhotoLikenessEditorZoomSliderController, CALayer, NSLayoutConstraint, NSString, NSOutlineView, CNUIDeprecatedIKImageBrowserView, NSView, NSSplitViewController, NSTableColumn, CNPhotoLikenessBuddyControlsViewController;

@interface CNPhotoLikenessEditorView : NSView <NSOutlineViewDelegate, CNPhotoLikenessEditorZoomDelegate, NSTextFieldDelegate>

@property (retain) NSSplitViewController *splitViewController;
@property (retain) NSView *sourceDisplayView;
@property (retain) NSMutableDictionary *sourceViewControllers;
@property (retain) NSView *currentSourceView;
@property long long currentSourceType;
@property (retain) CNPhotoLikenessEditorZoomSliderController *zoomController;
@property (retain) CNPhotoLikenessBuddyControlsViewController *buddyControlsViewController;
@property (retain) NSLayoutConstraint *zoomSliderBottomConstraint;
@property (retain) CALayer *maskLayer;
@property BOOL showViewFinder;
@property double photoHeight;
@property (retain) NSLayoutConstraint *heightConstraint;
@property (retain) NSLayoutConstraint *sourceDisplayViewTopConstraint;
@property (retain) NSLayoutConstraint *sourceDisplayViewBottomConstraint;
@property (retain) NSLayoutConstraint *sourceDisplayViewLeadingConstraint;
@property (retain) NSLayoutConstraint *sourceDisplayViewTrailingConstraint;
@property (retain) NSLayoutConstraint *sourceDisplayViewWidthConstraint;
@property (retain) NSLayoutConstraint *sourceDisplayViewCenterXConstraint;
@property double viewFinderOffset;
@property double viewFinderCornerRadius;
@property (retain) CNPhotoLikenessMaskView *maskView;
@property (weak) CNPhotoLikenessEditorViewController *viewController;
@property (retain) NSOutlineView *sourcesTable;
@property (retain) NSTableColumn *tableColumn;
@property (readonly) CNUIDeprecatedIKImageBrowserView *mediaLibraryView;
@property (readonly) CNUIDeprecatedIKImageBrowserView *defaultPhotosLibraryView;
@property long long displayMode;
@property BOOL ignoreOutlineViewSelectionChangeNotifications;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)os_log;
+ (id)viewControllerForSourceType:(long long)a0;

- (void).cxx_destruct;
- (void)layout;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (BOOL)outlineView:(id)a0 shouldExpandItem:(id)a1;
- (BOOL)outlineView:(id)a0 shouldShowOutlineCellForItem:(id)a1;
- (id)outlineView:(id)a0 viewForTableColumn:(id)a1 item:(id)a2;
- (void)outlineViewSelectionDidChange:(id)a0;
- (void)updateConstraints;
- (void)selectRowForSourceTypeIfNeeded:(long long)a0;
- (id)cameraViewController;
- (void)configureSourceDisplayViewConstraintsIsBuddy:(BOOL)a0;
- (id)croppingViewController;
- (id)defaultsLibraryViewController;
- (void)displaySource:(long long)a0;
- (void)displayViewFinderMask;
- (id)initializeViewControllerForType:(long long)a0;
- (void)initializeViewControllers;
- (BOOL)itemHasChildren:(id)a0;
- (id)mediaLibraryViewController;
- (void)setBuddyControlsHidden:(BOOL)a0;
- (void)setDimensionsForSidebarVisiblity:(BOOL)a0;
- (void)setExistingUserImage:(id)a0 withKeepAction:(id /* block */)a1;
- (void)setSidebarHidden:(BOOL)a0;
- (void)setZoomFraction:(double)a0;
- (void)setZoomPosition:(double)a0;
- (BOOL)shouldEnableNextForMediaView;
- (long long)sourceTypeForRow:(long long)a0;
- (void)updateEmptyContentView;
- (void)zoomSliderShouldShow:(BOOL)a0;

@end
