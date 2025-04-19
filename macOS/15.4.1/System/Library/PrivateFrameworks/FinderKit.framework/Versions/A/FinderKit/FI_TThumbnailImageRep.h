@class NSDictionary, FI_TInlinePreviewData;

@interface FI_TThumbnailImageRep : NSCGImageRep {
    FI_TInlinePreviewData *_inlinePreviewData;
}

@property (readonly, nonatomic) double scaleFactor;
@property struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } contentRect;
@property (retain) NSDictionary *clientProperties;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (id)initWithCGImage:(struct CGImage { } *)a0 scaleFactor:(double)a1;

@end
