@class TRSession, HMTRSession;

@interface HMDeviceSetupOperation : HMDeviceSetupOperationBase

@property (readonly) HMTRSession *trSession;
@property (readonly, weak) TRSession *session;

- (id)init;
- (void).cxx_destruct;
- (id)initWithSession:(id)a0;
- (id)initWithSession:(id)a0 sessionIdentifier:(id)a1;
- (id)initWithSession:(id)a0 setupSessionFactory:(id /* block */)a1;

@end
