@interface PXNSImage : NSObject {
    struct CGImageSource { } *_sourceRef;
    unsigned long long _sourceCount;
}

@property (readonly, nonatomic) unsigned long long orientation;
@property (readonly, nonatomic) struct CGSize { double width; double height; } bitmapSize;
@property (readonly, nonatomic) struct CGSize { double width; double height; } pixelSize;
@property (readonly, nonatomic) double pixelAspectRatio;

- (void)dealloc;
- (id)initWithData:(id)a0;
- (struct CGImage { } *)createCGImageWithTargetSize:(struct CGSize { double x0; double x1; })a0 contentMode:(long long)a1;

@end
