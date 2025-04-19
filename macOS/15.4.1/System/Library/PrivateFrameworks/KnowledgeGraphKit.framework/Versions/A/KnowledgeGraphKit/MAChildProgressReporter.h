@class MAProgressReporter;

@interface MAChildProgressReporter : MAProgressReporter

@property (readonly, nonatomic) MAProgressReporter *parentProgress;
@property (readonly, nonatomic) double offset;
@property (readonly, nonatomic) double scale;

- (void).cxx_destruct;
- (BOOL)isCancelled;
- (id)childProgressWithOffset:(double)a0 scale:(double)a1;
- (id)initWithParentProgress:(id)a0 offset:(double)a1 scale:(double)a2;
- (BOOL)isCancelledWithProgress:(double)a0 currentTime:(double)a1;

@end
