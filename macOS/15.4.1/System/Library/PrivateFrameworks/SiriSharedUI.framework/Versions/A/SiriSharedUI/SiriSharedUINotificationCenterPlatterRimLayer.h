@interface SiriSharedUINotificationCenterPlatterRimLayer : CALayer {
    double _frameInset;
}

- (id)initWithStyle:(unsigned char)a0 dark:(BOOL)a1 cornerRadius:(double)a2;
- (void)updateFrameFromBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;

@end
