@interface AVRenderedCaptionImage : NSObject {
    struct __CVBuffer { } *_pixelBuffer;
    struct CGPoint { double x; double y; } _position;
}

@property (readonly, nonatomic) struct __CVBuffer { } *pixelBuffer;
@property (readonly, nonatomic) struct CGPoint { double x0; double x1; } position;

- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithPixelBuffer:(struct __CVBuffer { } *)a0 atPosition:(struct CGPoint { double x0; double x1; })a1;

@end
