@class VSSubscriptionPredicateFactory;

@interface VSSubscriptionFetchOptionsValidator : NSObject

@property (retain, nonatomic) VSSubscriptionPredicateFactory *predicateFactory;

- (void).cxx_destruct;
- (id)standardizedFetchOptionsFromOptions:(id)a0 withSecurityTask:(id)a1;
- (id)subscriptionFetchOptionsAllowedForSecurityTask:(id)a0;

@end
