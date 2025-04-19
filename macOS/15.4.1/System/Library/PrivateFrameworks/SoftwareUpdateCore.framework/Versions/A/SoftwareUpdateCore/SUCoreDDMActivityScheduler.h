@class NSTimer, NSDictionary, NSDate;
@protocol SUCoreDDMActivitySchedulerDelegate;

@interface SUCoreDDMActivityScheduler : NSObject

@property (retain, nonatomic) id<SUCoreDDMActivitySchedulerDelegate> delegate;
@property (retain, nonatomic) NSDate *fireDate;
@property (nonatomic) BOOL isArmed;
@property (nonatomic) BOOL usePCSimpleTimer;
@property (nonatomic) BOOL useXPC;
@property (retain) NSTimer *timer;
@property (retain) id pcTimer;
@property (retain, nonatomic) NSDictionary *options;

- (void).cxx_destruct;
- (BOOL)armActivitySchedulerWithDate:(id)a0 options:(id)a1;
- (void)disarmActivityScheduler;
- (id)initWithDelegate:(id)a0 options:(id)a1;
- (void)_handleTimerFired:(id)a0;
- (BOOL)armActivitySchedulerWithDate:(id)a0;

@end
