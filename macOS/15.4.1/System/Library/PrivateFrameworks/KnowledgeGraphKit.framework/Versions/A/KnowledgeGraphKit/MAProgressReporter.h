@interface MAProgressReporter : NSObject

@property (class, readonly, nonatomic) MAProgressReporter *ignoreProgress;

@property (readonly) BOOL isCancelled;

+ (id)progressReporterWithProgressBlock:(id /* block */)a0;

- (id)childProgressReporterForStep:(unsigned long long)a0 outOf:(unsigned long long)a1;
- (id)childProgressReporterFromStart:(double)a0 toEnd:(double)a1;
- (BOOL)isCancelledWithProgress:(double)a0;
- (id)progressReportersForParallelOperationsWithCount:(unsigned long long)a0;
- (id)childProgressWithOffset:(double)a0 scale:(double)a1;
- (id)initForSubclasses;
- (BOOL)isCancelledWithProgress:(double)a0 currentTime:(double)a1;
- (BOOL)isCancelledWithUnitsCompleted:(unsigned long long)a0 outOf:(unsigned long long)a1;

@end
