@interface PassKitMacHelper.PaymentRequestViewInterface : NSObject {
    void /* unknown type, empty encoding */ navigationStack;
    void /* unknown type, empty encoding */ hostDelegate;
    void /* unknown type, empty encoding */ presenter;
    void /* unknown type, empty encoding */ stateMachine;
    void /* unknown type, empty encoding */ context;
}

@property (nonatomic, readonly) void /* unknown type, empty encoding */ viewController;
@property (nonatomic, retain) void /* unknown type, empty encoding */ serviceDelegate;

- (id)init;
- (void).cxx_destruct;
- (void)invalidate;
- (void)start;
- (void)stop;

@end
