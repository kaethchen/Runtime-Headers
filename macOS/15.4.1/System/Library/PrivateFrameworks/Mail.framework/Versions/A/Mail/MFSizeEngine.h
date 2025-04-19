@class MFMailAccount, NSString, MCQuotaUsage, MCActivityMonitor;

@interface MFSizeEngine : NSObject <MCActivityTarget>

@property (retain, nonatomic) MCActivityMonitor *monitor;
@property (nonatomic) BOOL isActive;
@property (nonatomic) long long monitorAccessKey;
@property (readonly, nonatomic) BOOL shouldStartWorkerThread;
@property (readonly, nonatomic) MFMailAccount *account;
@property (readonly, nonatomic) MCQuotaUsage *totalUsage;
@property (readonly, copy, nonatomic) NSString *displayName;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void).cxx_destruct;
- (void)start;
- (void)cancel;
- (void)stop;
- (id)initWithAccount:(id)a0;
- (void)refresh;
- (void)_startWorkerThreadIfNeeded;
- (void)_workerThreadFinished:(id)a0;

@end
