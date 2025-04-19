@class NSAppearance;

@interface NSSnapshotContextSignature : NSObject {
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } _modelLogicalRect;
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } _modelPixelLogicalRect;
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } _modelPixelDrawingRect;
    struct CGColorSpace { } *_colorSpace;
    unsigned long long _imageInterpolation;
    NSAppearance *_appearance;
}

- (void)dealloc;
- (id)description;
- (id)initWithDrawingRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 applicableForRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 context:(id)a2 hints:(id)a3;
- (BOOL)isApplicableForRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 context:(id)a1 hints:(id)a2;

@end
