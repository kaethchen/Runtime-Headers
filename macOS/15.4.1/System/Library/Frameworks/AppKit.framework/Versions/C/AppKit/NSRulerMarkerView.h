@class NSRulerMarker;

@interface NSRulerMarkerView : NSView {
    NSRulerMarker *_rulerMarker;
}

- (void)dealloc;
- (void)setRulerMarker:(id)a0;
- (void)drawRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (BOOL)isFlipped;
- (id)rulerMarker;
- (void)updateFrame;

@end
