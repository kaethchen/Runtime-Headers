@class NSString, CATextLayer;

@interface ErrorLayer : CALayer {
    struct CGColor { } *glowColor;
}

@property (retain, nonatomic) CATextLayer *topTextLayer;
@property (retain, nonatomic) CATextLayer *textLayer1;
@property (retain, nonatomic) CATextLayer *textLayer2;
@property (retain, nonatomic) CATextLayer *textLayer3;
@property (nonatomic) struct CGColor { } *glowColor;
@property (retain, nonatomic) NSString *text;
@property (nonatomic) double textOpacity;

- (void)dealloc;
- (id)init;
- (void)layoutSublayers;
- (id)layer;
- (id)fadeInAnimation;
- (void)composeLayer;
- (void)fadeIn;
- (struct CGColor { } *)glowColor;
- (void)setGlowColor:(struct CGColor { } *)a0;

@end
