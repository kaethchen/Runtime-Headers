@protocol LACRatchetUIManaging, LACAuthUIPresenting;

@interface LACRatchetFlowManager : NSObject <LACRatchetFlowManaging, LACAuthFlowManaging>

@property (readonly, nonatomic) id<LACAuthUIPresenting> presenter;
@property (readonly, nonatomic) id<LACRatchetUIManaging> uiManager;

- (void).cxx_destruct;
- (void)dismissWithCompletion:(id /* block */)a0;
- (id)initWithPresenter:(id)a0 uiManager:(id)a1;
- (void)showCoolOffSheetWithOptions:(id)a0 presentationCompletion:(id /* block */)a1 sheetCompletion:(id /* block */)a2;

@end
