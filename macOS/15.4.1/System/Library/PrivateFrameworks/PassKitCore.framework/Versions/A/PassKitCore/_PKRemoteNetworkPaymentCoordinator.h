@interface _PKRemoteNetworkPaymentCoordinator : NSObject {
    void /* unknown type, empty encoding */ paymentSession;
}

@property (nonatomic, weak) void /* unknown type, empty encoding */ wrapper;

- (id)init;
- (void).cxx_destruct;
- (void)handlePaymentUserActivity:(id)a0 originProcess:(id)a1;
- (void)presentErrorMessageWithFailure:(unsigned long long)a0 originProcess:(id)a1 delay:(double)a2;

@end
