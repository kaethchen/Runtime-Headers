@class CUMessageSession;

@interface HMCUMessageSessionDeviceSetupOperation : HMDeviceSetupOperationBase

@property (readonly, weak) CUMessageSession *session;

- (id)init;
- (id)initWithSession:(id)a0 sessionIdentifier:(id)a1;
- (id)initWithSession:(id)a0 setupSessionFactory:(id /* block */)a1;

@end
