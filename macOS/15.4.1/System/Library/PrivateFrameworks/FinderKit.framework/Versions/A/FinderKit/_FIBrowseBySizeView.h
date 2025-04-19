@class NSURL, NSArray, FIBrowseBySizeGutsController;
@protocol _FIBrowseBySizeViewDelegate;

@interface _FIBrowseBySizeView : NSView

@property (retain, nonatomic) FIBrowseBySizeGutsController *controller;
@property id<_FIBrowseBySizeViewDelegate> delegate;
@property (retain) NSURL *directoryURL;
@property (copy) NSArray *excludedURLs;
@property (readonly) NSArray *selectedURLs;
@property (readonly) unsigned long long trashSize;

+ (BOOL)automaticallyRemoveOldTrashItems;
+ (void)setAutomaticallyRemoveOldTrashItems:(BOOL)a0;

- (void)dealloc;
- (void).cxx_destruct;
- (BOOL)acceptsPreviewPanelControl:(id)a0;
- (void)beginPreviewPanelControl:(id)a0;
- (void)endPreviewPanelControl:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)viewDidMoveToWindow;
- (void)initCommon;
- (id)activeContainer;
- (void)emptyTrash:(id)a0;
- (void)moveSelectionToTrash:(id)a0;
- (void)revealSelectionInFinder:(id)a0;
- (void)showOnMyMacDocumentContainers;

@end
