@class NSString, NSObject;
@protocol BROperationClient;

@interface _BRCFrameworkOperation : _BRCOperation <BRCancellable> {
    BOOL _startedFinish;
}

@property (retain, nonatomic) NSObject<BROperationClient> *remoteClientProxy;
@property (nonatomic) BOOL ignoreMissingRemoteClientProxy;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (oneway void)invalidate;
- (void)start;
- (void)finishWithResult:(id)a0 error:(id)a1;
- (id)descriptionAdditionalStringWithContext:(id)a0;

@end
