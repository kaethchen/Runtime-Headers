@interface AVProgressEstimator : NSObject <NSCopying> {
    double _memory;
    double _progress[2];
    double _TISRD[2];
}

+ (void)initialize;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)init;
- (void)reset;
- (void)setProgress:(double)a0;
- (id)estimatedDateForProgress:(double)a0;
- (double)estimatedProgressForDate:(id)a0;

@end
