@class MSVTimer, NSDate;

@interface MRTimer : NSObject {
    MSVTimer *_timer;
    NSDate *_fireDate;
}

@property (readonly, nonatomic, getter=isValid) BOOL valid;
@property (readonly, nonatomic) double timeRemaining;
@property (readonly, nonatomic) NSDate *fireDate;

- (void).cxx_destruct;
- (void)invalidate;
- (id)initWithInterval:(double)a0 name:(id)a1 queue:(id)a2 block:(id /* block */)a3;
- (void)invalidateWithReason:(id)a0;

@end
