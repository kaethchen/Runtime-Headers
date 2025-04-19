@class TSUBezierPath;

@interface TSDBrushStrokeStorageBezierPathContainer : NSObject

@property (readonly, nonatomic) TSUBezierPath *originalPath;
@property (readonly, nonatomic) TSUBezierPath *pathWithPossibleSmoothing;

- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithOriginalPath:(id)a0 pathWithPossibleSmoothing:(id)a1;

@end
