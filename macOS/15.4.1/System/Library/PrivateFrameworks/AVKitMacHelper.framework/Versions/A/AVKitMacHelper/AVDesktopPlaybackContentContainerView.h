@class AVUnsupportedContentIndicatorView, AVAudioOnlyIndicatorView, AVLoadingIndicatorView, AVDesktopVideoContentView, AVDesktopExternalPlaybackIndicatorView;

@interface AVDesktopPlaybackContentContainerView : NSView {
    unsigned long long _activeContentDisplayType;
    AVAudioOnlyIndicatorView *_audioOnlyIndicatorView;
    AVDesktopExternalPlaybackIndicatorView *_externalPlaybackIndicatorView;
    AVLoadingIndicatorView *_loadingIndicatorView;
    AVUnsupportedContentIndicatorView *_unsupportedContentIndicatorView;
    BOOL _initializingVideoContentView;
}

@property (readonly, nonatomic) AVAudioOnlyIndicatorView *audioOnlyIndicatorView;
@property (readonly, nonatomic) AVLoadingIndicatorView *loadingIndicatorView;
@property (readonly, nonatomic) AVUnsupportedContentIndicatorView *unsupportedContentIndicatorView;
@property (retain, nonatomic) AVDesktopVideoContentView *videoContentView;
@property (nonatomic) unsigned long long contentDisplayType;
@property (readonly, nonatomic) AVDesktopExternalPlaybackIndicatorView *externalPlaybackIndicatorView;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (void)_commonInit;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)viewWillMoveToWindow:(id)a0;
- (void)_displayPlaybackContentView:(id)a0;
- (void)_setUpAudioOnlyIndicatorView;
- (void)_setUpExternalPlaybackIndicatorView;
- (void)_setUpLoadingIndicatorView;
- (void)_setUpUnsupportedContentIndicatorView;
- (void)_setUpVideoContentViewIfNeeded;
- (void)_updateActiveContentDisplayTypeIfNeeded;
- (void)_updateBackingLayerIfNeeded;
- (id)_viewForContentDisplayType:(unsigned long long)a0;

@end
