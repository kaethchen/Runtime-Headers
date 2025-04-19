@class LPInlineMediaPlaybackInformation, LPPlayButtonControl, LPAudioPlayButtonStyle, LPPlayButtonPresentationProperties;

@interface LPPlayButtonView : LPComponentView <LPContentInsettable, LPComponentMediaPlayable> {
    LPPlayButtonControl *_button;
    LPInlineMediaPlaybackInformation *_playbackInformation;
    struct NSEdgeInsets { double top; double left; double bottom; double right; } _contentInset;
    LPAudioPlayButtonStyle *_style;
    BOOL _hasBuilt;
    LPPlayButtonPresentationProperties *_properties;
}

- (void)dealloc;
- (void).cxx_destruct;
- (void)setContentInset:(struct NSEdgeInsets { double x0; double x1; double x2; double x3; })a0;
- (id)theme;
- (id)initWithHost:(id)a0;
- (id)playable;
- (void)buildSubviewsIfNeeded;
- (id)initWithHost:(id)a0 playbackInformation:(id)a1 style:(id)a2 properties:(id)a3;
- (void)installAudioButton;
- (void)installPlaceholderButton;
- (BOOL)isLyricStyle;
- (void)layoutComponentView;
- (void)updateButton;
- (void)updateButtonForAudioFile;

@end
