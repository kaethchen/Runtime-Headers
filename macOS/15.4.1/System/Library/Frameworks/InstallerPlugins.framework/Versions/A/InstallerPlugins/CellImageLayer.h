@class NSImage;

@interface CellImageLayer : NSObject {
    NSImage *_image;
    NSImage *_alternateImage;
    NSImage *_imageBase;
    NSImage *_alternateImageBase;
    struct CGPoint { double x; double y; } _drawingOffset[2];
    double _scaleFactor;
}

@property (retain) NSImage *image;
@property (retain) NSImage *alternateImage;

- (void)dealloc;
- (void)setScaleFactor:(double)a0;
- (double)scaleFactor;
- (void)drawImage:(long long)a0 atPoint:(struct CGPoint { double x0; double x1; })a1 withAlpha:(double)a2;
- (struct CGPoint { double x0; double x1; })drawingOffsetForImage:(long long)a0;
- (id)initWithImage:(id)a0 alternateImage:(id)a1;
- (void)setDrawingOffset:(struct CGPoint { double x0; double x1; })a0 forImage:(long long)a1;

@end
