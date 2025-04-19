@class NSMutableArray, NSObject;
@protocol OS_os_log, _CDLocalContext;

@interface _DASSystemContext : NSObject

@property (retain, nonatomic) id<_CDLocalContext> context;
@property (retain, nonatomic) NSObject<OS_os_log> *dasSystemContextLog;
@property (retain, nonatomic) NSMutableArray *registrations;
@property (nonatomic) long long networkPathStatus;
@property (nonatomic) long long inexpensiveNetworkPathStatus;

+ (id)sharedInstance;
+ (id)initWithContext:(id)a0;
+ (id)defaultInexpensivePathEvaluator;
+ (id)defaultPathEvaluator;
+ (BOOL)isPluggedIn:(id)a0;

- (id)init;
- (void).cxx_destruct;
- (BOOL)allowsDiscretionaryWorkForTask:(id)a0 withPriority:(unsigned long long)a1 withParameters:(id)a2;
- (void)addNotificationHandlerForTaskName:(id)a0 withPriority:(unsigned long long)a1 withParameters:(id)a2 withHandler:(id /* block */)a3;
- (BOOL)allowDiscretionaryWorkForBackgroundTask:(id)a0 withParameters:(id)a1;
- (BOOL)allowDiscretionaryWorkForUtilityTask:(id)a0 withParameters:(id)a1;
- (BOOL)isApplicationFocalForPushTask:(id)a0;
- (BOOL)isInexpensiveNetworkAvailable;
- (BOOL)isNetworkAvailable;
- (id)keyPathForPriority:(unsigned long long)a0;
- (void)removeNotificationHandlerForTaskName:(id)a0;
- (void)updateSystemConstraintsWithParameters:(id)a0;

@end
