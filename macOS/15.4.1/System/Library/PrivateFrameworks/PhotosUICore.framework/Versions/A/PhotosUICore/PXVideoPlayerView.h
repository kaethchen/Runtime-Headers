@class NSArray, ISWrappedAVPlayer, NSImage, PXVideoView, UXImageView;
@protocol PXVideoPlayerViewDelegate;

@interface PXVideoPlayerView : UXView {
    PXVideoView *_videoView;
    NSArray *_videoViewConstraints;
    UXImageView *_previewImageView;
    NSArray *_previewImageViewConstraints;
    long long _placeholderVisibilityRequestID;
    id /* block */ _visibilityChangeCompletionHandler;
}

@property (weak, nonatomic) id<PXVideoPlayerViewDelegate> delegate;
@property (retain, nonatomic) ISWrappedAVPlayer *player;
@property (retain, nonatomic) NSImage *placeholderImage;
@property (copy, nonatomic) NSArray *placeholderImageFilters;
@property (nonatomic) double videoAppearanceCrossfadeDuration;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } placeholderImageContentsRect;
@property (nonatomic) long long placeholderDisplayMode;
@property (readonly, nonatomic, getter=isDisplayingPlaceHolder) BOOL displayingPlaceholder;
@property (nonatomic) long long videoViewContentMode;
@property (nonatomic) BOOL allowsEdgeAntialiasing;
@property (nonatomic) BOOL toneMapToStandardDynamicRange;

- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)layoutSubviews;
- (id)generateSnapshotImage;
- (void)_runVisibilityChangeCompletionHandler;
- (void)_setDisplayingPlaceholder:(BOOL)a0 requestID:(long long)a1;
- (void)_updateContentMode;
- (void)_updateEdgeAntialiasing;
- (void)_updateSubviewsVisibility;
- (void)_updateVideoView;
- (void)setPlaceholderDisplayMode:(long long)a0 completion:(id /* block */)a1;

@end
