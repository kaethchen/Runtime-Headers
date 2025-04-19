@class FI_TBrowserViewController, FI_TUpdateLayerView, NSSplitViewItem, NSView, FI_TTagColumnTableViewController, FI_TSplitView;

@interface FI_TBrowserSplitViewController : NSSplitViewController {
    NSSplitViewItem *_browserSplitViewItem;
    double _tagsColumnWidthCache;
}

@property (readonly, nonatomic) NSSplitViewItem *tagsSplitViewItem;
@property (retain) FI_TSplitView *splitView;
@property (readonly, retain, nonatomic) FI_TUpdateLayerView *browserColumnView;
@property (retain, nonatomic) NSView *browserView;
@property (retain, nonatomic) FI_TBrowserViewController *browserViewController;
@property (retain, nonatomic) FI_TTagColumnTableViewController *tagColumnTableViewController;
@property (readonly, nonatomic) BOOL isTagsColumnCollapsed;
@property (readonly, nonatomic) BOOL isPreviewColumnCollapsed;

+ (id)keyPathsForValuesAffectingIsTagsColumnCollapsed;

- (void).cxx_destruct;
- (BOOL)_viewControllerSupports10_10Features;
- (id)initWithFrame:(const struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } *)a0;
- (void)splitViewDidResizeSubviews:(id)a0;
- (void)viewDidLoad;
- (void)aboutToTearDown;
- (void)addBrowserViewToBrowserColumnView;
- (void)addTagsColumn:(id)a0 containerLayoutManager:(id)a1;
- (void)collapseTagsColumn;
- (void)expandTagsColumn:(id)a0 containerLayoutManager:(id)a1;
- (void)removeTagsColumn;
- (void)saveTagsColumnWidthToDisk:(double)a0;
- (void)setTagsColumnCollapsed:(BOOL)a0 delegate:(id)a1 containerLayoutManager:(id)a2;
- (void)setTagsColumnSelection:(const struct TFENode { struct OpaqueNodeRef *x0; } *)a0;
- (BOOL)tagsColumnHasFocus;
- (id)tagsColumnView;

@end
