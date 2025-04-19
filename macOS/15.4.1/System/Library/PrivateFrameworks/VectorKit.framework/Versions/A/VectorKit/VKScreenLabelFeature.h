@interface VKScreenLabelFeature : NSObject

@property (readonly, nonatomic) struct CGImage { } *image;
@property (readonly, nonatomic) double scale;
@property (readonly, nonatomic) unsigned int type;
@property struct CGPoint { double x; double y; } position;

- (void)dealloc;
- (id)initWithCGImage:(struct CGImage { } *)a0 scale:(double)a1 type:(unsigned int)a2;

@end
