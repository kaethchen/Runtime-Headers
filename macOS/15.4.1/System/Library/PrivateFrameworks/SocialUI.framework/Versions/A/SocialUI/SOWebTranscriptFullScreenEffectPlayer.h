@interface SOWebTranscriptFullScreenEffectPlayer : SOFullScreenEffectPlayer {
    BOOL _originalOpaque;
    BOOL _originalDrawsBackground;
    struct CGColor { } *_previousColor;
}

- (id)webView;

@end
