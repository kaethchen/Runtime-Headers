@class NSArray;

@interface _NSASCIIArtFramesRenderer : NSObject {
    NSArray *_frames;
    double _outputLineWidth;
}

@property (readonly, nonatomic) NSArray *frames;
@property (readonly, nonatomic) double outputLineWidth;

- (id)description;
- (void).cxx_destruct;
- (id)initWithFrames:(id)a0 outputLineWidth:(double)a1;
- (id)initWithFrames:(id)a0;
- (id)_normalizeFrames:(id)a0;
- (id)renderedLines;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })scaledRectForRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 scaleSize:(struct CGSize { double x0; double x1; })a1;
- (id)visualDescription;

@end
