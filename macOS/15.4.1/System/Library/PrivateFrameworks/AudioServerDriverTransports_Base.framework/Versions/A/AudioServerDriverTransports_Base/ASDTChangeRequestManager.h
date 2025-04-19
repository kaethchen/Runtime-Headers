@class NSString, NSMutableDictionary, ASDTCondition;
@protocol ASDTChangeRequestManagerDelegate;

@interface ASDTChangeRequestManager : NSObject <ASDTConfigurationChangeDelegate>

@property (weak, nonatomic) id<ASDTChangeRequestManagerDelegate> delegate;
@property (retain, nonatomic) NSMutableDictionary *changeRequestQueues;
@property (nonatomic) unsigned int changeIndex;
@property (retain, nonatomic) NSString *bundleID;
@property (retain, nonatomic) ASDTCondition *changeRequestLock;

+ (id)forDelegate:(id)a0;

- (void).cxx_destruct;
- (id)initWithDelegate:(id)a0;
- (BOOL)requestConfigurationChangeForDevice:(id)a0 withBlock:(id /* block */)a1;
- (BOOL)configurationChangePendingForObject:(id)a0;
- (BOOL)configurationChangeRunningForObject:(id)a0;
- (void)doWaitForConfigurationChangesForQueue:(id)a0 withTimeout:(struct ASDTTime { long long x0; long long x1; unsigned short x2; unsigned short x3; unsigned int x4; })a1;
- (id)queueForObject:(id)a0 withName:(id)a1;
- (void)waitForAllConfigurationChanges;
- (void)waitForConfigurationChangesForDevice:(id)a0;

@end
