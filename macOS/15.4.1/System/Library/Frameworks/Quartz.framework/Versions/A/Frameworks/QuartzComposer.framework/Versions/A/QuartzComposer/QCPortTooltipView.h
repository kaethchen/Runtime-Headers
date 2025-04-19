@class QCPort, NSString, NSView, NSTimer;

@interface QCPortTooltipView : GFTooltipView {
    QCPort *_port;
    unsigned long long _timestamp;
    NSView *_extensionView;
    NSTimer *_timer;
    struct CGSize { double width; double height; } _baseSize;
    NSString *_valueString;
}

+ (id)valueTextAttributes;

- (void)dealloc;
- (void)finalize;
- (void)setString:(id)a0;
- (void)drawRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)initWithPort:(id)a0;
- (void)refresh:(BOOL)a0;
- (void)_timer:(id)a0;
- (void)_stopRendering:(id)a0;
- (void)_startRendering:(id)a0;

@end
