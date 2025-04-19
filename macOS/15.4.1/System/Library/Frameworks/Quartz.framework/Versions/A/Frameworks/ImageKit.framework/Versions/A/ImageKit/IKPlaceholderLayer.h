@class CALayer;

@interface IKPlaceholderLayer : IKNCustomLayer {
    CALayer *clipLayer;
    CALayer *imageLayer;
    CALayer *gradientLayer;
}

@property double progress;

- (id)init;
- (void)setBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setup;

@end
