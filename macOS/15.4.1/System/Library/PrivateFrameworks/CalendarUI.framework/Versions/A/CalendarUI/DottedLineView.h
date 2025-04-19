@class NSColor, CAShapeLayer;

@interface DottedLineView : NSView {
    CAShapeLayer *_shapeLayer;
    NSColor *_color;
}

- (id)init;
- (void).cxx_destruct;
- (void)layout;
- (void)setBackgroundColor:(id)a0;
- (void)_updateShapeLayer;

@end
