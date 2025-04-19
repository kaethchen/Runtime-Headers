@class SearchableWKView, _WKThumbnailView;

@interface VisualTabPickerWebViewThumbnailView : NSView <VisualTabPickerThumbnailViewInnerView> {
    SearchableWKView *_wkView;
    id _snapshotRequestToken;
    BOOL _snapshotIsPending;
    BOOL _receivedSnapshotRequestWhileSnapshotWasPending;
    _WKThumbnailView *_thumbnailView;
}

@property (readonly, nonatomic) SearchableWKView *boundWKView;
@property (nonatomic) BOOL visibleToUser;

- (void)dealloc;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (void)setScaleFactor:(double)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 searchableWKView:(id)a1;
- (void)_cancelSnapshotRequestIfNeeded;
- (void)_didReceiveSnapshot;
- (void)_requestSnapshotFromWebView;
- (void)setSnapshotScaleFactor:(double)a0;
- (void)snapshotIfNeeded;

@end
