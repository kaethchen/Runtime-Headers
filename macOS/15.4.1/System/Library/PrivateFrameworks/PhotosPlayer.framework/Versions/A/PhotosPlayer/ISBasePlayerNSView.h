@class ISVideoPlayerNSView, ISPhotoNSView, NSView, CAFilter, NSString, NSNumber, ISBasePlayer;

@interface ISBasePlayerNSView : NSView <ISBasePlayerOutput>

@property (readonly, nonatomic) ISPhotoNSView *_photoView;
@property (readonly, nonatomic) ISVideoPlayerNSView *_videoView;
@property (readonly, nonatomic) NSView *_containerView;
@property (retain, nonatomic, setter=_setPhoto:) struct CGImage { } *_photo;
@property (retain, nonatomic) NSNumber *contentAspectRatio;
@property (retain, nonatomic) ISBasePlayer *player;
@property (nonatomic) struct CGPoint { double x; double y; } scaleAnchorOffset;
@property (retain, nonatomic) NSView *customPhotoView;
@property (nonatomic) long long contentMode;
@property (retain, nonatomic) CAFilter *videoFilter;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } contentsRect;
@property (nonatomic) long long preferredImageDynamicRange;
@property (readonly, nonatomic) BOOL isVideoReadyForDisplay;
@property (copy, nonatomic) id /* block */ videoLayerReadyForDisplayChangeHandler;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (void)layout;
- (void)setContent:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)_performCommonInitialization;
- (void)_updatePhotoViewDynamicRange;
- (void)applyOutputInfo:(id)a0 withTransitionOptions:(id)a1 completion:(id /* block */)a2;
- (void)applyScale:(double)a0 withTransitionOptions:(id)a1 completion:(id /* block */)a2;

@end
