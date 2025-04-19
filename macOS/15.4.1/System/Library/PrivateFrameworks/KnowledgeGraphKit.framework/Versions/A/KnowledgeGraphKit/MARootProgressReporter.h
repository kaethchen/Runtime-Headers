@interface MARootProgressReporter : MAProgressReporter {
    double _lastProgressCallTime;
}

@property (readonly, nonatomic) id /* block */ progressBlock;
@property BOOL isCancelled;
@property (readonly) double progress;

- (id)init;
- (void).cxx_destruct;
- (void)cancelOperation;
- (id)initWithProgressBlock:(id /* block */)a0;
- (id)childProgressWithOffset:(double)a0 scale:(double)a1;
- (BOOL)isCancelledWithProgress:(double)a0 currentTime:(double)a1;

@end
