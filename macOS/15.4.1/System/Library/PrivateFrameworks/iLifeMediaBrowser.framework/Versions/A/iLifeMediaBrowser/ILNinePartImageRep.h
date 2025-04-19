@class NSMutableArray;

@interface ILNinePartImageRep : NSImageRep

@property (retain) NSMutableArray *slices;
@property struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } slicingRect;

+ (id)ninePartImageRepForImage:(id)a0 slicingRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;

- (void)dealloc;
- (BOOL)draw;
- (id)initWithImage:(id)a0 slicingRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })rectOfPart:(int)a0 forSlicingRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 inRectOfSize:(struct CGSize { double x0; double x1; })a2;

@end
