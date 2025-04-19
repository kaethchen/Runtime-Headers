@class ILMediaBrowserView, NSString, NSLayoutConstraint;

@interface FI_TMediaBrowserViewController : FI_TBrowserViewController {
    unsigned long long _browserType;
    struct NSEdgeInsets { double top; double left; double bottom; double right; } _contentInsets;
    NSLayoutConstraint *_bottomConstraint;
}

@property (readonly) ILMediaBrowserView *mediaBrowserView;
@property (copy, nonatomic) NSString *searchNSString;

- (void).cxx_destruct;
- (unsigned long long)itemCount;
- (void)loadView;
- (struct TString { struct TRef<const __CFString *, TRetainReleasePolicy<CFStringRef>> { struct __CFString *x0; } x0; })searchString;
- (id)selectedURLs;
- (int)viewStyle;
- (void)aboutToTearDown;
- (void)configureView;
- (BOOL)containsNode:(const struct TFENode { struct OpaqueNodeRef *x0; } *)a0;
- (BOOL)nodeIsSelected:(const struct TFENode { struct OpaqueNodeRef *x0; } *)a0;
- (void)dataSourceChanged:(const void *)a0;
- (void)deselectAllNodes;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frameForNode:(const struct TFENode { struct OpaqueNodeRef *x0; } *)a0;
- (unsigned long long)getSelectedNodesFromView:(void *)a0 upTo:(unsigned long long)a1;
- (void)getVisibleNodes:(void *)a0;
- (unsigned long long)indexForNode:(const struct TFENode { struct OpaqueNodeRef *x0; } *)a0;
- (id)indexSetForNodes:(const void *)a0;
- (id)mediaBrowserView:(id)a0 attributedDisplayNameForMediaObject:(id)a1;
- (BOOL)mediaBrowserView:(id)a0 shouldPreviewDoubleClickedItem:(id)a1;
- (BOOL)mediaBrowserView:(id)a0 shouldSelectMediaObject:(id)a1;
- (void)mediaBrowserViewSelectionDidChange:(id)a0;
- (struct TFENodeVector { struct TFENode *x0; struct TFENode *x1; struct __compressed_pair<TFENode *, std::allocator<TFENode>> { struct TFENode *x0; } x2; })nodesInBrowser;
- (void)privateBindSettings;
- (void)reloadIconsInView;
- (void)revealNodes:(const void *)a0 select:(BOOL)a1;
- (void)selectAllNodes;
- (unsigned long long)selectedNodesCount;
- (void)setSelectedNodes:(const void *)a0 byExtendingSelection:(BOOL)a1;
- (BOOL)startEditingWithNode:(const struct TFENode { struct OpaqueNodeRef *x0; } *)a0 renameOp:(id)a1;
- (void)stopEditing:(BOOL)a0;
- (void)updateSTFEditorLocation;
- (void)updateSubviewContentInsets:(struct NSEdgeInsets { double x0; double x1; double x2; double x3; })a0;
- (BOOL)urlIsDimmed:(id)a0;

@end
