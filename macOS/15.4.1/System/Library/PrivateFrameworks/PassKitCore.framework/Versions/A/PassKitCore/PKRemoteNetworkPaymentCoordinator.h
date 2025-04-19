@class _PKRemoteNetworkPaymentCoordinator;
@protocol PKRemoteNetworkPaymentCoordinatorDelegate;

@interface PKRemoteNetworkPaymentCoordinator : NSObject {
    _PKRemoteNetworkPaymentCoordinator *_underlying;
}

@property (weak, nonatomic) id<PKRemoteNetworkPaymentCoordinatorDelegate> delegate;

- (id)init;
- (void).cxx_destruct;
- (void)handlePaymentUserActivity:(id)a0 originProcess:(id)a1;
- (void)handleRemoteNetworkPaymentCoordinatorComplete;
- (void)handleRemoteNetworkPaymentCoordinatorDidPresentPaymentSheet:(BOOL)a0;
- (void)presentErrorMessageWithFailure:(unsigned long long)a0 originProcess:(id)a1 delay:(double)a2;

@end
