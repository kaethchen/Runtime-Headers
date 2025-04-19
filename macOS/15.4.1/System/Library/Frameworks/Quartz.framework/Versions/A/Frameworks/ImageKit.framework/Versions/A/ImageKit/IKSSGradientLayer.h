@class NSColor;

@interface IKSSGradientLayer : CALayer

@property (retain) NSColor *middleGradientColor;
@property (retain) NSColor *borderGradientColor;

- (void)drawInContext:(struct CGContext { } *)a0;

@end
