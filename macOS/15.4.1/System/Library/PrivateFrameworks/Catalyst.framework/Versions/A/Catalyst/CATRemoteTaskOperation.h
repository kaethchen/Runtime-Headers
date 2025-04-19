@class NSNumber, CATTaskClient, NSError;

@interface CATRemoteTaskOperation : CATTaskOperation {
    NSError *mClientError;
}

@property (copy, nonatomic) NSNumber *remotePhase;
@property (readonly, nonatomic) CATTaskClient *client;

+ (id)invalidRemoteTaskWithRequest:(id)a0 error:(id)a1;
+ (BOOL)isCancelable;

- (void).cxx_destruct;
- (void)cancel;
- (BOOL)isAsynchronous;
- (void)main;
- (void)processMessage:(id)a0;
- (void)cancelOperationIfNeeded;
- (void)clientFailedWithError:(id)a0;
- (void)fetchProgress;
- (id)initWithRequest:(id)a0 client:(id)a1;
- (id)initWithRequest:(id)a0 clientError:(id)a1;
- (void)operationWillFinish;
- (void)postNotificationWithName:(id)a0 userInfo:(id)a1;
- (void)processNotificationWithName:(id)a0 userInfo:(id)a1;
- (void)updateCompletedUnitCount:(long long)a0 andTotalUnitCount:(long long)a1;
- (void)updateProgressWithRemoteProgress:(id)a0;

@end
