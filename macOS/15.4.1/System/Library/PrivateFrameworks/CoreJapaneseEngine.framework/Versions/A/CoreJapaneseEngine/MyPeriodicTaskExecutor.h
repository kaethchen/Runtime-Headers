@class NSString;

@interface MyPeriodicTaskExecutor : NSObject

@property (copy) NSString *logName;
@property (copy) NSString *taregtAppID;
@property void /* function */ *taskFuncPtr;

- (void)dealloc;
- (void).cxx_destruct;
- (void)_applicationDidActivated:(id)a0;
- (id)initWithAppActivation:(id)a0 forLog:(id)a1;

@end
