@class PKPaymentPass, NSString, NSSet, NSMutableOrderedSet;

@interface PKPaymentOffersControllerRequest : NSObject

@property (readonly, nonatomic) unsigned long long type;
@property (readonly, nonatomic) PKPaymentPass *paymentPass;
@property (readonly, copy, nonatomic) NSString *criteriaIdentifier;
@property (readonly, nonatomic) unsigned long long updateReason;
@property (readonly, copy, nonatomic) NSSet *dynamicPageTypes;
@property (readonly, nonatomic) NSMutableOrderedSet *completions;

- (id)description;
- (void).cxx_destruct;
- (void)addCompletions:(id)a0;
- (BOOL)coalesceWithRequest:(id)a0;
- (id)initDynamicContentRequestWithCriteriaIdentifier:(id)a0 pageTypes:(id)a1 completion:(id /* block */)a2;
- (id)initPaymentOfferCatalogRequestWithCompletion:(id /* block */)a0;
- (id)initPaymentOfferRequestWithCriteriaIdentifierIdentifier:(id)a0 paymentPass:(id)a1 reason:(unsigned long long)a2 completion:(id /* block */)a3;
- (id)initWithType:(unsigned long long)a0 completion:(id /* block */)a1;

@end
