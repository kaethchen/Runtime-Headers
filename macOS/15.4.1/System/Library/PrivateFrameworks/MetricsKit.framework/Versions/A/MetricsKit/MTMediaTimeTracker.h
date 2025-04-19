@class NSDate;

@interface MTMediaTimeTracker : NSObject

@property (retain) NSDate *date;
@property unsigned long long position;
@property float playbackRate;

- (void).cxx_destruct;
- (void)updatePosition:(unsigned long long)a0;
- (id)estimatedTimeAtPastPosition:(unsigned long long)a0;
- (id)estimatedTimeAtPosition:(unsigned long long)a0;
- (id)initWithPosition:(unsigned long long)a0 playbackRate:(float)a1;
- (void)updatePosition:(unsigned long long)a0 playbackRate:(float)a1;

@end
