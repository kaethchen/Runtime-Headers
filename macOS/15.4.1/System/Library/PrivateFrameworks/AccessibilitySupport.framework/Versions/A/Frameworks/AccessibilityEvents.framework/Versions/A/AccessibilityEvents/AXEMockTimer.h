@class NSString;
@protocol AXEMockTimerDelegate;

@interface AXEMockTimer : NSObject <AXETimer>

@property (weak, nonatomic) id<AXEMockTimerDelegate> delegate;
@property (retain, nonatomic) id userInfo;
@property (nonatomic) double timeInterval;
@property (nonatomic) double nextFireTime;
@property (nonatomic, getter=isValid) BOOL valid;
@property (retain, nonatomic) id _target;
@property (nonatomic) SEL _selector;
@property (nonatomic) BOOL _repeats;
@property (nonatomic) double _startTime;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (long long)compare:(id)a0;
- (void)fire;
- (void)invalidate;
- (id)initWithTimeInterval:(double)a0 target:(id)a1 selector:(SEL)a2 userInfo:(id)a3 repeats:(BOOL)a4 startTime:(double)a5;

@end
