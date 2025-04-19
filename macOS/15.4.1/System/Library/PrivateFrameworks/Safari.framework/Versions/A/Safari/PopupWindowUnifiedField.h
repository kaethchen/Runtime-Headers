@interface PopupWindowUnifiedField : UnifiedField

@property (nonatomic) long long lockdownModeStatus;

+ (double)urlTextYOffset;

- (id)initWithCoder:(id)a0;
- (void)_windowChangedKeyState;
- (BOOL)allowsVibrancy;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (BOOL)mouseDownCanMoveWindow;
- (void)_commonInitialization;
- (double)_urlFieldHeight;
- (id)lockButtonColor;
- (struct CGSize { double x0; double x1; })_defaultButtonSize;
- (double)_defaultButtonYOffset;
- (double)_lockButtonVerticalOffset;
- (id)_mediaCaptureIndicatorWithColor:(id)a0;
- (long long)_muteButtonStateForAudioIndicator;
- (BOOL)_shouldShowAlternativeStaticURLForAboutBlank;
- (double)_siteIconYOffset;
- (double)_urlTextHeight;
- (id)contextMenuForEvent:(id)a0;
- (id)deemphasizedTextColor;
- (double)mediaIndicatorYOffset;
- (id)pageStatusStringColor;
- (void)setBrowsingMode:(unsigned long long)a0;
- (void)updateActiveAppearance;
- (BOOL)willHandleMouseDraggedEvent:(id)a0;

@end
