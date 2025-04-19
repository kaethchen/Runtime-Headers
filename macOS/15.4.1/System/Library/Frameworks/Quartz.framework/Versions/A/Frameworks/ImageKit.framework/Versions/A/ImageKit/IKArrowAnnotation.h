@interface IKArrowAnnotation : IKAnnotation {
    double _lineWidth;
    BOOL _arrowAtStart;
    BOOL _arrowAtEnd;
}

- (void)drawInContext:(struct CGContext { } *)a0;
- (void)changeBackgroundColor:(id)a0;
- (unsigned int)defaultKnob;
- (unsigned int)knobLayerFlags;
- (void)setAnchorPointAndKeepFrame:(struct CGPoint { double x0; double x1; })a0;
- (void)setup:(id)a0;
- (void)toggleArrowAtEnd;
- (void)toggleArrowAtStart;
- (void)updateBorderWidth:(int)a0;

@end
