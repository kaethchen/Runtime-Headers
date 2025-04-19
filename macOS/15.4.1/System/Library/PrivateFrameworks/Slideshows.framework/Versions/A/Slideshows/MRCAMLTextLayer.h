@class MRImage, MRTextRenderer;

@interface MRCAMLTextLayer : MRCAMLLayer

@property (retain, nonatomic) MRImage *textImage;
@property (retain, nonatomic) MRTextRenderer *textRenderer;

- (void)dealloc;

@end
