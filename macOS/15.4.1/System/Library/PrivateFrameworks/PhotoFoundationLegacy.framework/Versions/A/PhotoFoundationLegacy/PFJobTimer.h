@class NSDate;

@interface PFJobTimer : NSObject {
    NSDate *_startTime;
    NSDate *_stopTime;
}

@property (copy) id /* block */ completionBlock;
@property unsigned long long itemCount;

+ (id)timerForItemCount:(unsigned long long)a0 atEnd:(id /* block */)a1;

- (void).cxx_destruct;
- (void)start;
- (void)reset;
- (double)duration;
- (void)stop;

@end
