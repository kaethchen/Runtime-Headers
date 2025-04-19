@class NSArray;
@protocol FCContentContext;

@interface FCPurchaseLookupFetchOperation : FCFetchOperation

@property (retain, nonatomic) NSArray *purchaseIDs;
@property (retain, nonatomic) id<FCContentContext> contentContext;

- (id)init;
- (void).cxx_destruct;
- (void)performOperation;
- (id)_prefixedPurchasedIDs:(id)a0;
- (id)initWithPurchaseIDs:(id)a0 contentContext:(id)a1;
- (id)processFetchedResults:(id)a0 error:(id)a1;

@end
