@class TSCHChartAxis;

@interface TSCH3DAxisGridEnumerator : TSCH3DValueEnumerator

@property (readonly, nonatomic) int type;
@property (readonly, nonatomic) TSCHChartAxis *axis;

+ (id)enumeratorWithAxis:(id)a0;

- (void).cxx_destruct;
- (unsigned long long)count;
- (struct AxisGridLocation { BOOL x0; unsigned long long x1; unsigned long long x2; struct tvec3<float> { union { float x0; float x1; float x2; } x0; union { float x0; float x1; float x2; } x1; union { float x0; float x1; float x2; } x2; } x3; })position;
- (void)update;
- (id)initWithAxis:(id)a0;

@end
