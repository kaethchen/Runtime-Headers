@interface CoreAudioKit.CocoaSlider : NSSlider {
    void /* unknown type, empty encoding */ onMouseDown;
    void /* unknown type, empty encoding */ onMouseUp;
    void /* unknown type, empty encoding */ initialValue;
}

- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)mouseDown:(id)a0;
- (BOOL)sendAction:(SEL)a0 to:(id)a1;

@end
