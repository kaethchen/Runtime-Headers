@class NSString, IDSDaemonRequestTimer;

@interface IDSVMDaemonResponseListener : NSObject <IDSDaemonListenerProtocol> {
    IDSDaemonRequestTimer *_requestTimer;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)initWithRequestTimer:(id)a0;
- (void)vmDataResponse:(id)a0 forRequestID:(id)a1 withError:(id)a2;

@end
