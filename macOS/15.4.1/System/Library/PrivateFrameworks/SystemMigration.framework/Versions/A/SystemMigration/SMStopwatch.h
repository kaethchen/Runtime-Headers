@interface SMStopwatch : NSObject

@property (nonatomic) double startTime;
@property (nonatomic) BOOL isRunning;

- (void)start;
- (double)stop;
- (double)elapsedTime;

@end
