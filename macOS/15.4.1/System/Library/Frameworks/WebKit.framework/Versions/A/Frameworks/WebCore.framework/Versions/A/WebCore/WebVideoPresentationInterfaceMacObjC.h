@class NSString;

@interface WebVideoPresentationInterfaceMacObjC : NSObject <PIPViewControllerDelegate, WebVideoViewContainerDelegate> {
    void *_videoPresentationInterfaceMac;
    struct RetainPtr<PIPViewController> { void *m_ptr; } _pipViewController;
    struct RetainPtr<NSViewController> { void *m_ptr; } _videoViewContainerController;
    struct RetainPtr<WebVideoViewContainer> { void *m_ptr; } _videoViewContainer;
    struct RetainPtr<WebAVPlayerLayer> { void *m_ptr; } _playerLayer;
    int _pipState;
    struct RetainPtr<NSWindow> { void *m_ptr; } _returningWindow;
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } _returningRect;
}

@property (nonatomic) struct CGSize { double width; double height; } videoDimensions;
@property (nonatomic, getter=isPlaying) BOOL playing;
@property (nonatomic, getter=isExitingToStandardFullscreen) BOOL exitingToStandardFullscreen;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)invalidate;
- (id).cxx_construct;
- (void)exitPIP;
- (void)pipActionPause:(id)a0;
- (BOOL)pipShouldClose:(id)a0;
- (void)boundsDidChangeForVideoViewContainer:(id)a0;
- (void)enterPIP;
- (void)exitPIPAnimatingToRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 inWindow:(id)a1;
- (id)initWithVideoPresentationInterfaceMac:(void *)a0;
- (void)invalidateFullscreenState;
- (void)pipActionPlay:(id)a0;
- (void)pipActionStop:(id)a0;
- (void)pipDidClose:(id)a0;
- (void)setUpPIPForVideoView:(id)a0 withFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 inWindow:(id)a2;
- (void)superviewDidChangeForVideoViewContainer:(id)a0;
- (void)updateIsPlaying:(BOOL)a0 newPlaybackRate:(float)a1;

@end
