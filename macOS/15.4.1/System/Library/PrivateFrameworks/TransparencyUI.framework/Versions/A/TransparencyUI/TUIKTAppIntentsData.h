@class KTStatus, TUIKTStateManager;

@interface TUIKTAppIntentsData : NSObject

@property (retain, nonatomic) TUIKTStateManager *stateManager;
@property (retain, nonatomic) KTStatus *ktStatus;

- (id)init;
- (void).cxx_destruct;
- (void)statusWithCompletion:(id /* block */)a0;
- (void)publicVerificationCodeWithCompletion:(id /* block */)a0;

@end
