@class ICSAPSession;

@interface ICSAPSessionAbstractOperation : ICAsyncOperation

@property (retain, nonatomic) ICSAPSession *sapSession;

- (void).cxx_destruct;
- (void)execute;
- (void)finishWithError:(id)a0;
- (void)executeWithSAPContext:(id)a0;
- (void)finishWithSAPContextPreparationError:(id)a0;

@end
