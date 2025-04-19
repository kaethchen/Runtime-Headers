@class NSDate;

@interface WPDStat : NSObject

@property double currentTime;
@property (retain) NSDate *lastTime;

- (id)init;
- (void).cxx_destruct;
- (void)startTime;
- (void)stopTime;
- (void)calculateTimeUpdate;

@end
