@protocol NSObject;

@interface AXVOverlayWindow : AXVVoiceOverStyleWindow

@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } _frameBeforeSpanningAllScreens;
@property (retain, nonatomic) id<NSObject> _windowResizeObservation;
@property (nonatomic) BOOL spansAllScreens;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (id)initWithContentRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)initWithContentRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 styleMask:(unsigned long long)a1 backing:(unsigned long long)a2 defer:(BOOL)a3;
- (void)_updateHighlightViewFramesSpanningAllScreens:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)handleScreenParametersChanged;

@end
