@class CUMessageSession, NSViewController;

@interface PASUIDependentViewPresenter : NSObject {
    void /* unknown type, empty encoding */ flowController;
    void /* unknown type, empty encoding */ navigationController;
    void /* unknown type, empty encoding */ flowTimer;
    void /* unknown type, empty encoding */ hasProtoAccount;
    void /* unknown type, empty encoding */ _messageSessionProvider;
    void /* unknown type, empty encoding */ _authenticator;
    void /* unknown type, empty encoding */ _deviceProvider;
    void /* unknown type, empty encoding */ _targetAppleIDExchanger;
    void /* unknown type, empty encoding */ _accountStore;
    void /* unknown type, empty encoding */ _analyticsProvider;
    void /* unknown type, empty encoding */ $__lazy_storage_$_analytics;
    void /* unknown type, empty encoding */ _featureFlagsProvider;
}

@property (nonatomic, weak) void /* unknown type, empty encoding */ delegate;
@property (nonatomic) BOOL shouldSignInForSelf;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (void)activateWithTemplateMessageSession:(CUMessageSession *)a0 completion:(void (^)(NSViewController *))a1;
- (void)activateWithTemplateMessageSession:(CUMessageSession *)a0 completionHandler:(void (^)(void))a1;
- (void)setTemplateMessageSession:(CUMessageSession *)a0 completion:(void (^)(void))a1;
- (void)startFlowWithContainerViewController:(id)a0;
- (void)startFlowWithNavigationController:(id)a0;

@end
