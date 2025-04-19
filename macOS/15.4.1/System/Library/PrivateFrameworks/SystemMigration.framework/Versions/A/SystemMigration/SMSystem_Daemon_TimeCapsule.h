@class NSString, NSMutableArray, NSObject;
@protocol OS_dispatch_queue;

@interface SMSystem_Daemon_TimeCapsule : SMSystem_Daemon

@property (retain) NSMutableArray *availableShares;
@property (retain) NSString *humanName;
@property (retain) NSObject<OS_dispatch_queue> *sharesQueue;

+ (unsigned long long)requiredScannerState;
+ (id)timeCapsuleURLForHostname:(id)a0;

- (id)description;
- (void).cxx_destruct;
- (id)accessibilityDescription;
- (id)systemName;
- (unsigned long long)systemType;
- (void)addRemoteShare:(id)a0;
- (id)childSystems;
- (double)estimatedTransferRate;
- (id)initWithURL:(id)a0 humanName:(id)a1;
- (id)prettyPrintChildren;
- (BOOL)selectableSystem;

@end
