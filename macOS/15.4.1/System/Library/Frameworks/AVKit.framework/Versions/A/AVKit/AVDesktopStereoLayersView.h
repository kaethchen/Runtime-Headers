@class AVTaggedBufferStereoOutputConsumer, NSString, AVSampleBufferDisplayLayer, AVAnimator, AVPlayerController, AVObservationController;

@interface AVDesktopStereoLayersView : NSView <CALayerDelegate> {
    AVObservationController *_observationController;
    id _playerControllerContentDimensionsObservationToken;
    BOOL _layerInit;
    BOOL _stereoInit;
    AVTaggedBufferStereoOutputConsumer *_taggedBufferStereoOutputConsumer;
    AVSampleBufferDisplayLayer *_leftStereoLayer;
    AVSampleBufferDisplayLayer *_rightStereoLayer;
    AVAnimator *_animator;
}

@property (retain, nonatomic) AVPlayerController *playerController;
@property (retain, nonatomic) NSString *videoGravity;
@property (nonatomic) BOOL wantsPlayerLayerLayout;
@property (nonatomic) long long layoutMode;
@property (nonatomic) struct CGSize { double width; double height; } fixedPlayerLayerSize;
@property (readonly, nonatomic, getter=isReadyForDisplay) BOOL readyForDisplay;
@property (readonly, nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } videoBounds;
@property (readonly, nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } stereoLayersFrame;
@property (nonatomic) long long stereoEyes;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)keyPathsForValuesAffectingStereoLayersFrame;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (void)layoutSublayersOfLayer:(id)a0;
- (void)_layoutLayersWithImplicitActions:(BOOL)a0;
- (void)_layoutPlayerLayerIfNeeded;
- (void)_layoutStereoLayersInBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)_setUpLayersIfNeeded;
- (void)_stereoInitIfNecessary;
- (void)_stereoUninit;
- (void)disableStereoLayers;
- (void)enableStereoLayers;
- (void)setLayoutMode:(long long)a0 withAnimator:(id)a1;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })stereoLayersFrameForBoundsSize:(struct CGSize { double x0; double x1; })a0 playerLayerLayoutMode:(long long)a1;

@end
