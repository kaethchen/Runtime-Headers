@class NSArray;

@interface NSTextPreview : NSObject

@property (retain) struct CGImage { } *previewImage;
@property struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } presentationFrame;
@property (retain) NSArray *candidateRects;

- (void).cxx_destruct;
- (id)initWithSnapshotImage:(struct CGImage { } *)a0 presentationFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
- (id)initWithSnapshotImage:(struct CGImage { } *)a0 presentationFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 candidateRects:(id)a2;
- (id)initWithWTTextPreview:(id)a0;
- (id)wtTextPreview;

@end
