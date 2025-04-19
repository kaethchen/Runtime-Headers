@class FCNewsletterEndpointConnection;

@interface FCGetNewsletterSubscriptionOperation : FCOperation

@property (retain, nonatomic) FCNewsletterEndpointConnection *endpointConnection;
@property (copy, nonatomic) id /* block */ completion;

- (void).cxx_destruct;
- (void)performOperation;
- (id)initWithEndpointConnection:(id)a0 completion:(id /* block */)a1;

@end
