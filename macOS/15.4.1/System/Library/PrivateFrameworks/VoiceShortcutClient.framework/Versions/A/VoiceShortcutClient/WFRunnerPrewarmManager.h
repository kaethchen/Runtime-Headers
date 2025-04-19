@interface WFRunnerPrewarmManager : NSObject

@property (class, nonatomic, readonly) WFRunnerPrewarmManager *sharedManager;

@property (nonatomic, retain) void /* unknown type, empty encoding */ connection;

- (id)init;
- (void).cxx_destruct;
- (void)reset;
- (void)prewarmRunnerWithHostIfNecessary:(id)a0;

@end
