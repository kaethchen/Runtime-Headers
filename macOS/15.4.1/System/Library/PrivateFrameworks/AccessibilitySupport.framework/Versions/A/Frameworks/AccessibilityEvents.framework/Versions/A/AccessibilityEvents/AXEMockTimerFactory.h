@class NSString, NSMutableArray;

@interface AXEMockTimerFactory : NSObject <AXEMockTimerDelegate, AXETimerProviding>

@property (nonatomic) double currentSimulatedTime;
@property (retain, nonatomic) NSMutableArray *_pendingTimers;
@property (readonly, nonatomic) unsigned long long pendingTimerCount;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void).cxx_destruct;
- (void)reset;
- (id)scheduledTimerWithTimeInterval:(double)a0 target:(id)a1 selector:(SEL)a2 userInfo:(id)a3 repeats:(BOOL)a4;
- (void)fireAllPendingTimers;
- (void)fireNextPendingTimer;
- (void)mockTimerInvalidated:(id)a0;

@end
