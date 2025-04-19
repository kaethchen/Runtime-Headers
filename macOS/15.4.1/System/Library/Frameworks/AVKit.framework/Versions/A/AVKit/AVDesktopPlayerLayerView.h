@class NSString, NSDictionary, AVPlayerLayer, AVAnimator, AVPlayerController, AVObservationController;

@interface AVDesktopPlayerLayerView : NSView <CALayerDelegate> {
    AVObservationController *_observationController;
    id _playerControllerContentDimensionsObservationToken;
    AVAnimator *_animator;
}

@property (retain, nonatomic) AVPlayerController *playerController;
@property (retain, nonatomic) NSString *videoGravity;
@property (nonatomic) BOOL wantsPlayerLayerLayout;
@property (nonatomic) long long layoutMode;
@property (nonatomic) struct CGSize { double width; double height; } fixedPlayerLayerSize;
@property (retain, nonatomic) NSDictionary *pixelBufferAttributes;
@property (readonly, nonatomic) AVPlayerLayer *playerLayer;
@property (readonly, nonatomic, getter=isReadyForDisplay) BOOL readyForDisplay;
@property (readonly, nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } videoBounds;
@property (readonly, nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } playerLayerFrame;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)keyPathsForValuesAffectingPlayerLayerFrame;
+ (id)keyPathsForValuesAffectingReadyForDisplay;
+ (id)keyPathsForValuesAffectingVideoBounds;
+ (id)keyPathsForValuesAffectingVideoGravity;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (void)layoutSublayersOfLayer:(id)a0;
- (void)viewWillMoveToWindow:(id)a0;
- (void)_layoutPlayerLayerIfNeeded;
- (void)_layoutPlayerLayerWithImplicitActions:(BOOL)a0;
- (void)_setUpLayerIfNeeded;
- (void)disablePlayerLayer;
- (void)enablePlayerLayer;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })playerLayerFrameForBoundsSize:(struct CGSize { double x0; double x1; })a0 playerLayerLayoutMode:(long long)a1;
- (void)setLayoutMode:(long long)a0 withAnimator:(id)a1;

@end
