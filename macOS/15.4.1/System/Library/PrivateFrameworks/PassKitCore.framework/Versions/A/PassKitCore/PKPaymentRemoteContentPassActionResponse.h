@class PKPaymentPassAction;

@interface PKPaymentRemoteContentPassActionResponse : PKPaymentWebServiceResponse

@property (retain, nonatomic) PKPaymentPassAction *updatedAction;

- (void).cxx_destruct;
- (id)initWithExistingAction:(id)a0 pass:(id)a1 data:(id)a2;

@end
