@class UIBoxcarFilterPointFIFO, UIQuadCurvePointFIFO, UIPointFIFO;

@interface DKPointSmoothing : NSObject

@property (retain, nonatomic) UIPointFIFO *strokeFIFO;
@property (retain, nonatomic) UIBoxcarFilterPointFIFO *boxcarFIFO;
@property (retain, nonatomic) UIQuadCurvePointFIFO *interpolatingFIFO;
@property (nonatomic) unsigned long long width;
@property (nonatomic) float spacing;
@property (nonatomic) float unitScale;
@property (nonatomic) BOOL emitInterpolatedPoints;
@property (copy, nonatomic) id /* block */ emissionHandler;

+ (void /* unknown type, empty encoding */)interpolateFromPoint:(id)a0 toPoint:(SEL)a1 controlPoint:(float)a2 time:(void /* unknown type, empty encoding */)a3;
+ (void)_interpolateFromPoint:(id)a0 toPoint:(SEL)a1 withControlPoint:(float)a2 atUnitScale:(id /* block */)a3 emissionHandler:(void /* unknown type, empty encoding */)a4;

- (id)init;
- (void).cxx_destruct;
- (void)clear;
- (void)flush;
- (void)addPoint:(SEL)a0;
- (void)emitPoint:(SEL)a0;
- (id)initWithWidth:(unsigned long long)a0 spacing:(float)a1;

@end
