@class AVPlayer, NSString, AVPlayerLayer, PASnapshotLayer, CALayer, NSColor, NSDictionary, PANeutrinoImage, PADisplay, NUTiledImageLayer, PAItemViewConfiguration;
@protocol PAImageDrawingDelegate;

@interface PANeutrinoImageLayer : CALayer <CALayerDelegate> {
    CALayer *_containerLayer;
    NUTiledImageLayer *_backfillLayer;
    NUTiledImageLayer *_roiLayer;
    CALayer *_overlayLayer;
    PANeutrinoImage *_currentImage;
    BOOL _useContentTransform;
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } _playerSnapshotClipRect;
    AVPlayerLayer *_avPlayerLayer;
    BOOL _playerIsReadyForDisplay;
    PASnapshotLayer *_playerSnapshotLayer;
    AVPlayer *_playerFromSnapshot;
    long long _snapshotOrientation;
    BOOL _observerDetached;
    BOOL _isPlayerForCrop;
    BOOL _isSnapshotForCrop;
    PAItemViewConfiguration *_lastValidCropConfiguration;
    BOOL _wantsOverlay;
}

@property (nonatomic) BOOL showAVPlayer;
@property (nonatomic) struct CGSize { double x0; double x1; } imageSize;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } imageBounds;
@property (nonatomic) struct CATransform3D { double m11; double m12; double m13; double m14; double m21; double m22; double m23; double m24; double m31; double m32; double m33; double m34; double m41; double m42; double m43; double m44; } imageTransform;
@property (nonatomic) struct CATransform3D { double x0; double x1; double x2; double x3; double x4; double x5; double x6; double x7; double x8; double x9; double x10; double x11; double x12; double x13; double x14; double x15; } layerImageTransform;
@property (nonatomic) struct CATransform3D { double m11; double m12; double m13; double m14; double m21; double m22; double m23; double m24; double m31; double m32; double m33; double m34; double m41; double m42; double m43; double m44; } contentTransform;
@property (readonly, nonatomic) long long imageOrientation;
@property (nonatomic) long long viewOrientation;
@property (nonatomic) long long playerOrientation;
@property (copy, nonatomic) PAItemViewConfiguration *viewConfiguration;
@property (copy, nonatomic) NSDictionary *images;
@property (copy, nonatomic) NSColor *overlayColor;
@property (nonatomic) BOOL displayPlayerSnapshot;
@property (weak, nonatomic) AVPlayer *player;
@property (copy, nonatomic) id /* block */ playerReadyHandler;
@property (copy, nonatomic) PADisplay *displayDevice;
@property (weak, nonatomic) id<PAImageDrawingDelegate> drawingDelegate;
@property (nonatomic) unsigned long long maximumDrawCount;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (void)layoutSublayers;
- (void)display;
- (void)setContentsScale:(double)a0;
- (void)_removeSnapshot;
- (void)_assignPlayerToPlayerLayer:(id)a0;
- (id)_copyWithAVItems:(BOOL)a0;
- (void)_fadeLayer:(id)a0 startingAlpha:(double)a1 endingAlpha:(double)a2 completion:(id /* block */)a3;
- (BOOL)_hasValidContentOrientations;
- (BOOL)_isInCrop;
- (BOOL)_isValidSnapshot;
- (BOOL)_isValidUpdateForImages:(id)a0;
- (void)_layoutPlayer;
- (void)_makePlayerSnapshotLayerWithSourceLayer:(id)a0;
- (id)_newAVPlayerLayer;
- (id)_newImageLayer;
- (struct CGSize { double x0; double x1; })_playerSize;
- (void)_setPlayerIsReadyForDisplay:(BOOL)a0;
- (void)_updateImagesAndGeometries;
- (void)_updateUseContentTransform;
- (struct __CVBuffer { } *)copyDisplayedPlayerPixelBuffer;
- (id)copyForAnimate;
- (id)copyForPreview;
- (void)setPlayer:(id)a0 allowSnapshot:(BOOL)a1;
- (void)setShowAVPlayer:(BOOL)a0 animate:(BOOL)a1;

@end
