@interface HMCUMessageSessionDeviceSetupOperationHandler : HMDeviceSetupOperationHandlerBase

- (void)_handleReceivedRequestDictionary:(id)a0 responseHandler:(id /* block */)a1;
- (int)convertSetupErrorToOSStatus:(id)a0;
- (void)registerMessageHandlersForMessageSession:(id)a0;
- (void)registerMessageHandlersForSession:(id)a0;

@end
