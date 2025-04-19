@class MRCAMLBezierData;

@interface MRCAMLKeyframe : NSObject <NSCopying> {
    double value0;
    double value1;
    double time;
}

@property (retain, nonatomic) MRCAMLBezierData *spline;

- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
