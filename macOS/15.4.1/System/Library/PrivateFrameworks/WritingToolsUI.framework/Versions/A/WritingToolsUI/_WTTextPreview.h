@class NSArray;

@interface _WTTextPreview : NSObject

@property (retain) struct CGImage { } *previewImage;
@property (retain) struct CGPath { } *contentPath;
@property struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } presentationFrame;
@property (retain) struct CGColor { } *backgroundColor;
@property (retain) struct CGPath { } *clippingPath;
@property double scale;
@property (retain) NSArray *candidateRects;

- (void)dealloc;
- (void).cxx_destruct;
- (id)initWithSnapshotImage:(struct CGImage { } *)a0 presentationFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
- (id)initWithSnapshotImage:(struct CGImage { } *)a0 presentationFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 backgroundColor:(struct CGColor { } *)a2 clippingPath:(struct CGPath { } *)a3 scale:(double)a4;
- (id)initWithSnapshotImage:(struct CGImage { } *)a0 presentationFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 backgroundColor:(struct CGColor { } *)a2 clippingPath:(struct CGPath { } *)a3 scale:(double)a4 candidateRects:(id)a5;
- (id)initWithContentPath:(struct CGPath { } *)a0;
- (id)layerWithContents;

@end
