@class NSTextField, NSString, NSView, NSButton;
@protocol PUPhotosAssetDebugOverlayViewDelegate;

@interface PUPhotosAssetDebugOverlayView : NSView

@property (readonly, nonatomic) NSView *buttonContainerView;
@property (readonly, nonatomic) NSView *buttonImageView;
@property (readonly, nonatomic) NSButton *overlayButton;
@property (readonly, nonatomic) NSView *infoOverlayView;
@property (readonly, nonatomic) NSTextField *infoLabel;
@property (readonly, nonatomic) NSString *clientIdentifier;
@property (nonatomic) BOOL showInfoOverlay;
@property (weak, nonatomic) id<PUPhotosAssetDebugOverlayViewDelegate> delegate;

- (id)init;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)hitTest:(struct CGPoint { double x0; double x1; })a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)update;
- (id)initWithClientIdentifier:(id)a0;
- (void)_openURL:(id)a0;
- (void)_setupView;
- (id)_debugDescription;
- (void)_updateImageDynamicRangeOption:(long long)a0;
- (void)_configureButtonImageView;
- (void)_didTapButton:(id)a0;
- (void)_fileRadar;
- (id)_hdrImageTextForCurrentlyDisplayedImage;
- (void)_toggleInfoOverlay;
- (void)_updateImageDynamicRangeOptionWithMenuItem:(id)a0;
- (void)_updateInfoLabel;
- (void)_updateInfoOverlayAppearance;
- (void)_updateOverlayButton;

@end
