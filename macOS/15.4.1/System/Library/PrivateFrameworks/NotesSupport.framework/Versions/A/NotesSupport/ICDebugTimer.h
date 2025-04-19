@class NSDate;

@interface ICDebugTimer : NSObject

@property (retain) NSDate *startingDate;
@property double elapsedTime;

+ (id)debugTimerForClass:(Class)a0;
+ (void)enableTimersForClass:(Class)a0;

- (void).cxx_destruct;
- (void)resume;
- (void)pause;
- (void)start;
- (void)stop;

@end
