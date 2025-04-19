@class NSObject;
@protocol OS_dispatch_queue;

@interface DMTDisassociateWiFiNetworkOperation : CATOperation

@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *disassociateQueue;

- (id)init;
- (void).cxx_destruct;
- (void)cancel;
- (BOOL)isAsynchronous;
- (void)main;
- (void)disassociateCurrentNetworkWithInterface:(id)a0;
- (void)disassociateNetwork;

@end
