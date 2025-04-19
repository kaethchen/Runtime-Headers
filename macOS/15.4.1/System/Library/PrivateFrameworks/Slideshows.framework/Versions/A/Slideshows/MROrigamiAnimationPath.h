@interface MROrigamiAnimationPath : NSObject {
    id *_curves;
    double *_keyTimes;
    double *_values;
    long long _length;
}

@property (readonly, nonatomic) float timeFirstAtRestValue;

- (void)dealloc;
- (float)valueAtTime:(float)a0;
- (id)initWithControlPoints:(double[4] *)a0 keyTimes:(double *)a1 values:(double *)a2 length:(long long)a3;
- (id)initWithSwingType:(int)a0;

@end
