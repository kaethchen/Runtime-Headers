@interface Stopwatch : NSObject {
    double startTime;
    double finishTime;
}

- (void)finish;
- (void)start;
- (double)runTime;

@end
