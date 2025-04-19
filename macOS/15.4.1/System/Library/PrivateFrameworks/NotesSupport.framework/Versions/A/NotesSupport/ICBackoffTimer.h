@class NSTimer;

@interface ICBackoffTimer : NSObject

@property (nonatomic) double initialTimeInterval;
@property (weak, nonatomic) id target;
@property (nonatomic) SEL selector;
@property (retain, nonatomic) id userInfo;
@property (nonatomic) unsigned long long backoffCount;
@property (nonatomic) double maxTimeInterval;
@property (retain) NSTimer *timer;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (void)fire;
- (void)invalidate;
- (void)fire:(id)a0;
- (BOOL)isScheduled;
- (double)nextTimeInterval;
- (id)initWithInitialInterval:(double)a0 maxInterval:(double)a1 target:(id)a2 selector:(SEL)a3 userInfo:(id)a4;
- (void)scheduleToFire;

@end
