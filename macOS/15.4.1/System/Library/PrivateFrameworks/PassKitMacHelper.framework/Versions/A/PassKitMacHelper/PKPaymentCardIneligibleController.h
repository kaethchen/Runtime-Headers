@class NSURL;

@interface PKPaymentCardIneligibleController : NSObject

@property (readonly, nonatomic) long long reason;
@property (readonly, nonatomic) long long context;
@property (readonly, retain, nonatomic) NSURL *learnMoreURL;

- (void).cxx_destruct;
- (void)beginSheetInWindow:(id)a0 completion:(id /* block */)a1;
- (id)initWithReason:(long long)a0 context:(long long)a1 learnMoreURL:(id)a2;

@end
