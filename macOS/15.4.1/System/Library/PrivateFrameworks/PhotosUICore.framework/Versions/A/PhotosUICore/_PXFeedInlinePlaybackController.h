@class PXGLayout, PXFeedViewModel;

@interface _PXFeedInlinePlaybackController : PXGridInlinePlaybackController {
    struct NSEdgeInsets { double top; double left; double bottom; double right; } _criticallyVisibleEdgeInsets;
}

@property (readonly, nonatomic) PXGLayout *containerLayout;
@property (readonly, nonatomic) PXFeedViewModel *viewModel;
@property (readonly, nonatomic) id /* block */ itemLayoutDesiredPlayStateSetter;

- (void).cxx_destruct;
- (id)_itemLayoutForPlaybackRecord:(id)a0;
- (void)_playbackRecord:(id)a0 setDesiredPlayState:(long long)a1;
- (BOOL)canPlayAsset:(id)a0;
- (id)createPlaybackRecordForDisplayAsset:(id)a0 mediaProvider:(id)a1 geometryReference:(id)a2;
- (struct NSEdgeInsets { double x0; double x1; double x2; double x3; })criticallyVisibleEdgeInsets;
- (id)currentHoveredDisplayAsset;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })currentVisibleRect;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frameForPlaybackRecord:(id)a0 minPlayableSize:(out struct CGSize { double x0; double x1; } *)a1;
- (id)initWithContainerLayout:(id)a0 viewModel:(id)a1 itemLayoutDesiredPlayStateSetter:(id /* block */)a2;

@end
