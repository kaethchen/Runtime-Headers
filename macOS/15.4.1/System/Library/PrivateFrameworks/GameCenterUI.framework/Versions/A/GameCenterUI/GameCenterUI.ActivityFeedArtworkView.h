@class NSArray;

@interface GameCenterUI.ActivityFeedArtworkView : GameCenterUI.BaseView {
    void /* unknown type, empty encoding */ artworkViews;
}

@property (nonatomic, readonly) void /* unknown type, empty encoding */ contentBackgroundView;
@property (nonatomic, readonly) void /* unknown type, empty encoding */ sharedView;
@property (nonatomic, readonly) NSArray *artworkViews;
@property (nonatomic, readonly) void /* unknown type, empty encoding */ artworkContainer;

- (void).cxx_destruct;
- (void)prepareForReuse;
- (void)layout;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;

@end
