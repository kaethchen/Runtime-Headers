@class _NSOverlayBackgroundView;

@interface NSTouchBarCustomizationPaletteInactiveDisplayOverlayWindow : NSWindow {
    _NSOverlayBackgroundView *_backgroundView;
}

- (id)initWithScreen:(id)a0;
- (BOOL)_isNonactivatingPanel;
- (BOOL)_wantsSnapshotProxyWindowForOrderOutAnimation;
- (void)animateIn;
- (void)animateOut;

@end
