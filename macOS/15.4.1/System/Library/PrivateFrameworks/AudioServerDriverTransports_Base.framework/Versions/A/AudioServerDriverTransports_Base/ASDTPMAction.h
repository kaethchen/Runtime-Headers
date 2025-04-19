@class NSCondition;

@interface ASDTPMAction : ASDTPMDevice

@property (nonatomic) int executeTransition;
@property (nonatomic) int backgroundTransition;
@property (nonatomic) BOOL once;
@property (retain, nonatomic) NSCondition *condition;
@property (nonatomic) int actionState;
@property (nonatomic) int actionResult;
@property (nonatomic) unsigned int actionIteration;

- (void).cxx_destruct;
- (void)setName:(id)a0;
- (int)action;
- (int)executeAction:(unsigned int)a0;
- (BOOL)asdtHandlesPowerTransition:(int)a0;
- (int)asdtPowerStateChange:(int)a0;
- (void)executeInBackground;
- (id)initWithConfig:(id)a0 forSequencer:(id)a1;
- (int)waitForCompletion:(unsigned int)a0;

@end
