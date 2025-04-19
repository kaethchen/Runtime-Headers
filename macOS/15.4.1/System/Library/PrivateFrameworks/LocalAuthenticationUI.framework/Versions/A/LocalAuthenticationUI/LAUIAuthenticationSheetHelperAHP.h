@class LAUIAuthenticationSheetHelperAHPClient, LAUIAuthenticationSheetHelperAvailability;
@protocol LAUIAuthenticationSheetState;

@interface LAUIAuthenticationSheetHelperAHP : NSObject <AuthenticationHintsDelegate> {
    id<LAUIAuthenticationSheetState> _state;
    LAUIAuthenticationSheetHelperAHPClient *_ahpClient;
}

@property (retain, nonatomic) LAUIAuthenticationSheetHelperAvailability *availability;

- (void).cxx_destruct;
- (id)initWithState:(id)a0;
- (void)event:(long long)a0 eventHints:(id)a1 reply:(id /* block */)a2;
- (void)_executeActivationTasks:(id)a0 timeout:(double)a1 completion:(id /* block */)a2;
- (void)_setupSmartCardsAHPIfNeededWithCompletion:(id /* block */)a0;
- (void)_setupTouchIDIfNeededWithCompletion:(id /* block */)a0;
- (void)_setupWatchAHPIfNeededWithCompletion:(id /* block */)a0;
- (void)setAHPClient:(id)a0;
- (void)setUpAlternativeAuthenticationMethods:(id /* block */)a0;
- (void)setUpAlternativeAuthenticationMethodsWithTimeout:(double)a0 completion:(id /* block */)a1;

@end
