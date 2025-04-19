@class NSView;

@interface SiriSharedUIStandardVisualEffectView : NSVisualEffectView {
    NSView *_backgroundView;
}

- (void).cxx_destruct;
- (void)layout;
- (BOOL)isFlipped;
- (void)setBackgroundColor:(id)a0;
- (BOOL)wantsLayer;
- (id)initWithSiriContentPlatterEffect;
- (id)initWithVibrantEffect;

@end
