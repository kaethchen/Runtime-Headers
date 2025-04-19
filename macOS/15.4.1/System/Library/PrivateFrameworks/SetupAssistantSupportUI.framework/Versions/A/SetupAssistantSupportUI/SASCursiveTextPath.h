@class NSDictionary;

@interface SASCursiveTextPath : NSObject {
    float _initialWeight;
    float _finalWeight;
    float _rampTime;
    float _length;
    float _duration;
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } _boundingBoxOfPath;
    NSDictionary *_pathDefinition;
    int _resolution;
}

- (void).cxx_destruct;
- (id)initWithURL:(id)a0;
- (float)duration;
- (id)initWithURL:(id)a0 resolution:(int)a1;
- (struct CGPath { } *)pathForFraction:(float)a0 calculateLength:(BOOL)a1;
- (struct CGPath { } *)pathForTime:(float)a0;
- (struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; })transformForRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 pointSize:(double)a1 flipped:(BOOL)a2;

@end
